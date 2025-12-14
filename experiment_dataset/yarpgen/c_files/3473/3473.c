/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(8, 245));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_17 ^= (arr_6 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (max(2, -74));
                                var_18 *= ((((((arr_13 [i_2 - 3] [i_2 - 3] [i_2] [i_2] [i_4] [i_2]) ? (arr_13 [i_2 - 2] [i_1] [i_2] [i_3] [i_2 - 2] [i_2]) : var_10))) ? 244 : ((-1 * ((-(arr_2 [i_1])))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (((var_0 << (-119 + 131))))));
                    var_20 = (((arr_2 [i_5 - 1]) ? 1 : (arr_2 [i_5 - 3])));
                }
                arr_19 [i_1] [i_1] &= (arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]);
                arr_20 [i_0] = (((!3107020938) ? (~-1) : 1));
            }
        }
    }
    var_21 = (max((((249 || var_14) ? (~var_10) : (((var_10 ? 18 : var_2))))), ((((((0 >> (var_2 - 4329248489153928433)))) / ((5843 ? var_6 : 16777215)))))));
    #pragma endscop
}
