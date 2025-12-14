/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = 40;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = ((((-32767 - 1) ? ((min((arr_5 [9] [i_2] [i_2] [i_2]), var_7))) : (arr_6 [i_0] [i_2] [i_4]))));
                                var_14 = (max(var_14, ((max((max(((-5831246247071971816 * (arr_2 [i_0] [i_1]))), ((((arr_0 [i_4]) / 216))))), ((((((arr_11 [i_3] [i_3] [i_3] [i_3] [i_1]) ? 63 : 40))) ? (arr_4 [i_1] [i_1]) : (((arr_2 [i_1] [i_4]) ? 17160220615104103658 : 1)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 44129;
    #pragma endscop
}
