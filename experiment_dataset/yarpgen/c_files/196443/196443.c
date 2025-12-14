/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((var_15 ? (((((!var_6) && (var_9 < 44415))))) : 79));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((!(~18446744073709551615)));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_22 *= -17922;
                    var_23 = ((max((-9223372036854775804 + 18012199486226432), -24753)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_24 = (((((var_16 ? var_5 : -9223372036854775804))) & (max(18446744073709551615, 3894316163986494686))));
                                var_25 = ((((!52) % ((74 ? var_3 : var_2)))));
                            }
                        }
                    }
                    var_26 = ((((~var_4) ? ((0 >> (2420834481012303436 - 2420834481012303414))) : ((min(var_1, var_5))))) > ((((-32767 - 1) ? 0 : 280375465082880))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_27 = ((var_5 ? 4294965248 : (!var_10)));
                                var_28 = arr_3 [i_5] [12];
                            }
                        }
                    }
                    var_29 *= var_9;
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    arr_22 [i_1] [3] [3] = ((~((min((var_11 >= 0), (!-9223372036854775804))))));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_30 = ((((max(((min((arr_7 [12] [12] [12] [i_1] [i_8]), var_5))), (min(0, 2251797666201600))))) ? (max((2224232056 & 349699223), (((-32762 ? 1 : 181))))) : (((!60546) ? (!-21) : -4294967268))));
                        var_31 = (!0);
                        var_32 = (min(((min(-1348630425, 0))), ((285978576338026496 ? 36 : 8474333489497242273))));
                    }
                    arr_26 [i_0] [i_1] [1] [i_1] = ((2111976021 || (((0 % (arr_3 [i_8 - 1] [i_1 - 1]))))));
                }
                var_33 = 0;
            }
        }
    }
    #pragma endscop
}
