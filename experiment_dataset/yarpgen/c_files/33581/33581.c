/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -24113;
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (max(var_21, (((~(arr_1 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 += -8895;
            arr_4 [13] [i_1] [1] = 6925648654643486612;
            arr_5 [i_0] [i_0] &= (arr_2 [i_0] [3] [0]);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_23 -= 117;

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_24 = 208;

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_25 = (min(var_25, (arr_3 [i_0] [i_3] [i_2])));
                        var_26 = (~-2517350990039019321);
                        arr_12 [i_1] [i_1] = 6756005234151740852;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_27 = (min(var_27, (~218)));
                        var_28 -= (~10);
                    }
                }

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_20 [i_0] [8] [i_0] &= (arr_11 [i_0] [i_1] [i_2] [i_2] [i_6]);
                    arr_21 [i_1] = 4799001894253775223;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_29 *= 8964;
                    arr_24 [i_1] [i_1] = (!-1546);
                }
                var_30 = (~140736414613504);
            }
        }
        arr_25 [i_0] = (arr_16 [i_0]);
        var_31 = (max(var_31, (arr_16 [i_0])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_32 = 9042860037352710750;
        var_33 ^= (arr_17 [14] [i_8] [i_8] [i_8] [i_8] [8]);
        arr_29 [i_8] = (arr_17 [14] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    var_34 = var_11;
    #pragma endscop
}
