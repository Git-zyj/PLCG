/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (max((((!var_7) % ((-682901037 ? var_6 : var_8)))), (max(var_8, var_6))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] = ((-1 ? var_2 : var_6));
                        var_11 ^= ((var_4 ? (!var_8) : (var_3 < 115)));
                        var_12 ^= -6;
                        arr_14 [i_0] [i_2] = (((((3863528703 ? var_9 : 6))) ? var_0 : -3017040880305557476));
                    }
                    var_13 = (min(var_13, ((min(((((var_9 ^ var_5) != (min(var_1, var_7))))), ((30589 ? (-2147483647 - 1) : 127)))))));
                }
            }
        }
    }
    var_14 = var_4;

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (max(((min(var_0, -115))), -var_5));
        arr_19 [i_4] &= (var_4 & var_2);
        arr_20 [i_4] [i_4] = ((min(var_6, -562309902)) / -276553478);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_15 = max((91 ^ var_8), -625771258);
                    arr_25 [i_4] &= (((-((var_9 ? var_4 : var_4)))));
                    var_16 = (((((max(0, var_3) == var_4)))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_17 = ((0 ? -62 : 0));
                                arr_30 [7] [i_5] [i_5] [i_8] [i_8] = -682901037;
                                var_18 *= (((max(((var_9 ? var_6 : 9320295133900786429)), (((var_2 ? var_7 : -23))))) - ((max(var_0, -var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((max(var_7, var_0))));
    var_20 = (max((!0), var_9));
    #pragma endscop
}
