/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= var_3;
        arr_4 [2] |= (~-31199);
        var_20 = (arr_2 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_21 = (min(var_21, var_16));
                var_22 = (min(var_22, (((-29231 ? 1275868126 : 252073892)))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_23 += (((((31199 >> (-371875701291145855 + 371875701291145862)))) ? var_5 : var_4));
                var_24 = (arr_8 [i_0] [i_0]);
            }
            arr_14 [i_0] [i_1] [i_0] = 4663505103860157395;
            var_25 = (min(var_25, ((-(arr_10 [i_1] [i_0])))));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_19 [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_0]);
                arr_20 [i_0] [i_0] [i_4] = (56852 && 536870908);
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_26 = ((((((arr_27 [i_6] [i_0]) == ((18446744073709551615 ? (arr_9 [i_0]) : 56848))))) <= (arr_2 [i_0])));
                        var_27 = ((56852 ? 371875701291145838 : 21152660));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_31 [i_0] [i_7 - 1] [i_6] [3] [i_5 + 1] [i_0] = (arr_18 [i_6] [i_7]);
                            var_28 = ((-(arr_17 [i_0] [i_0] [i_7] [i_0])));
                            arr_32 [i_0] [6] [i_6] [i_0] [i_0] [i_6] [6] = 17;
                            arr_33 [i_0] = (min(((-(arr_3 [i_0] [i_0]))), (254 * 25786)));
                        }
                    }
                }
            }
        }
    }
    var_29 = ((((((var_8 * 1169874205) / var_11))) ? ((-((var_9 ? var_4 : 969899309)))) : ((~((max(var_16, var_16)))))));
    #pragma endscop
}
