/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 |= ((((min((((-(arr_6 [i_0] [i_0] [i_0])))), (arr_1 [i_1] [i_1])))) - (max((2109711194 + -23692), (arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = ((11627517892478881582 ? 7078539063889741663 : 0));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_3] = (min(((~((761260436599452559 ? (arr_6 [i_1] [i_1] [i_3 - 2]) : (-127 - 1))))), (((((54287 ? 6819226181230670033 : -341))) ? var_13 : (arr_9 [i_2])))));
                            }
                        }
                    }
                    arr_15 [8] [8] [i_2] [i_1] = (min((min(3702676896, 4030880639)), (arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_1])));
                }
            }
        }
    }
    var_19 = (min((~7078539063889741673), (max((((var_12 ? var_3 : var_13))), ((var_0 ? 11368205009819809942 : 63488))))));
    var_20 = var_16;
    #pragma endscop
}
