/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-((var_4 ? var_7 : var_1))))) ? ((min(-var_0, var_4))) : (((var_5 / var_7) / (((65519 ? var_1 : 0)))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~((var_7 ? var_2 : 4799778898062641247)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 -= (arr_3 [i_1 - 3] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 -= ((-(((arr_13 [15] [i_3 - 1] [3] [3] [3]) + var_6))));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_4] = (((((arr_7 [i_1] [i_1]) - -3)) * (arr_3 [i_0] [i_3])));
                                arr_15 [i_1] [i_3] [i_2 - 2] [i_1] = ((((min(3, 15327220910495239622))) ? var_4 : ((((((var_10 ? var_3 : (arr_5 [i_0 - 2]))) == (((15677363787426727514 ? var_7 : var_10)))))))));
                                arr_16 [i_0 - 1] [6] [i_1] [0] [1] = ((-11 ^ (((((max(var_2, var_10))) && ((((arr_1 [i_2]) ? 2769380286282824109 : (arr_5 [5])))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_14 += ((15677363787426727514 ? 0 : 2769380286282824109));
                        var_15 = (max(((var_10 ? ((1541937724 ? var_2 : var_3)) : var_3)), var_10));
                    }
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_16 = (max((max(2147483647, (arr_21 [i_1] [i_2 + 1] [i_2] [i_6]))), (~var_3)));
                        arr_23 [i_0 + 2] [i_1] [i_2] [i_1] = (32767 || 32745);
                    }
                }
            }
        }
    }
    var_17 = (max((((((var_4 ? var_8 : var_6))) ? (!var_1) : (min(15677363787426727514, var_4)))), (((((var_0 ? var_10 : -32765))) ? var_5 : var_9))));
    #pragma endscop
}
