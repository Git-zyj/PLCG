/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((+(min((var_0 + 15930398975734685939), (arr_1 [i_0])))));
                var_13 += (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_0] = ((((-8 <= (arr_9 [i_4] [i_0] [i_3 - 1] [i_2] [i_1] [i_0]))) ? -3882 : (max(((-(arr_1 [i_0]))), -53))));
                                var_14 |= var_10;
                                arr_13 [i_0] [6] [i_0] [i_3 - 1] = 7;
                                arr_14 [i_0] [i_1] [i_0] [2] [0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_15 [i_0] = (arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_0] [i_2 - 1] [i_0]);
                            var_15 = (max(var_15, (((6549639118250108007 - (max(7443, 7596401101795365384)))))));
                            var_16 = (max(var_16, ((max((arr_3 [i_0] [i_1] [i_2]), (((-6317 ? var_2 : (min(1923416599, (-127 - 1)))))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = (((((20757 <= (arr_11 [i_3 - 1] [i_2 + 2] [i_2])))) - var_9));
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_1 == var_0);
    #pragma endscop
}
