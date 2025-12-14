/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_2, var_1);
    var_18 = (min(((min(((var_16 ? var_12 : var_15)), -473485987))), (min((var_9 ^ var_13), (~var_2)))));
    var_19 -= ((-(min((var_5 + 39), 197))));
    var_20 = (min(var_20, (((((min(((16760832 ? var_3 : var_3)), 19463))) || ((max((min(var_13, var_11)), var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 *= (((min(2147483647, var_5))));
                                arr_14 [i_0] [i_0] [i_0] [1] [i_1] = (max((((arr_12 [i_4 + 1] [7] [i_2] [i_3] [i_4 - 2] [i_2]) ? (arr_12 [i_4 - 2] [i_1] [10] [10] [i_1] [i_4 - 1]) : var_10)), (~208)));
                            }
                        }
                    }
                    var_22 = (max(var_22, -265096816));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] = (min((arr_4 [i_0] [i_1] [i_5]), var_2));
                    arr_18 [i_1] = ((-(((!((min(216, 1))))))));
                    var_23 = (arr_6 [i_0] [3] [1]);
                    arr_19 [i_0] [i_1] [i_1] = ((~((max(1, 34)))));
                }
                arr_20 [i_0] [i_1] = 2113929216;
                var_24 = -265096816;
            }
        }
    }
    #pragma endscop
}
