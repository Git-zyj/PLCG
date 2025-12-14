/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));
    var_11 = var_3;
    var_12 *= (max(-var_9, (min((var_1 / 20052), 0))));
    var_13 = ((var_6 ? (((var_5 <= ((max(0, var_0)))))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_5, (!var_3)));
                            arr_12 [i_0] [i_0] [i_3] [i_3] = (((var_8 || -21581) > ((max(var_0, -21608)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = max((((var_0 ? (var_9 & var_1) : -21601))), ((255 ? 981855860 : var_8)));
                        }
                    }
                }
                var_15 -= (arr_1 [i_0]);
                var_16 -= var_5;
                arr_14 [i_0] = (arr_11 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_4] [i_5] [i_5] [i_5] [i_4] = (max((max(-var_9, ((255 ? 21600 : (arr_20 [i_0] [i_0] [i_0]))))), ((max((((21589 ? -21601 : var_8))), (arr_1 [i_0]))))));
                                var_17 = (max((((((-21602 ? (arr_19 [i_6] [i_1] [i_4] [i_1] [i_0]) : 55598))) ? (((!(arr_6 [i_5])))) : var_1)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
