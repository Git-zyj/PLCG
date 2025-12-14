/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_1 [i_0]) + (arr_1 [i_0])));
                var_14 = (((arr_2 [i_0] [i_1]) | ((max(((var_1 ? 1 : -13792)), 1)))));
                var_15 = max(1, 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_17 = 1;
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_2] [i_3 - 1]);
                            var_18 = (((((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) * 1));
                        }
                    }
                }
                var_19 |= (arr_8 [10] [i_1] [10] [i_0]);
            }
        }
    }
    #pragma endscop
}
