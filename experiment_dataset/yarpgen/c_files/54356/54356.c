/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((1 ? var_0 : var_5)) == (((-30075 ? 644072321 : 913886875))))))));
                arr_5 [i_0] = ((0 == ((var_13 ? 1 : 2234342797))));
                arr_6 [i_0] = (((((((((var_8 + 2147483647) >> var_16))) > var_4))) == (-776173247 || var_1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 += (1352697943 == var_3);
                            var_22 = (min(var_22, (((~(var_8 >= 124))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = ((-((var_2 / (-2147483647 - 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_4] [i_6] [i_7] [i_4] = var_4;
                                var_23 = (min(var_23, -var_3));
                                arr_29 [i_4] [i_4] [i_5] [i_6] [2] [i_4] [3] = (-64 * 2689908815);
                                arr_30 [i_4] [i_4] [i_7] [i_6] [i_4] [i_4] = var_1;
                                arr_31 [i_4] = 96;
                            }
                        }
                    }
                }
                var_24 -= ((((((var_16 ? var_2 : 5938866247650038260))))) + ((var_3 >> (((10 + var_4) - 48)))));
                arr_32 [i_4] [i_5] = var_5;
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_25 *= (((7495938412394080596 / var_9) && (((179 ? -408774168 : var_6)))));
                            var_26 = (min(var_26, (((~((var_12 ^ (1346549179 / var_7))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                {
                    arr_45 [i_13] = (((~115) ? (((((var_9 <= var_14) > -65)))) : ((var_17 ? 34 : var_6))));
                    var_27 = (min(var_27, ((((~29781) ? var_7 : ((~(-1684797808 <= -74501933))))))));
                    var_28 = (((32758 || 94) ? var_11 : (1 == var_17)));
                    var_29 = (((~var_17) % var_11));
                    arr_46 [i_13] [i_13] [i_13] [i_11] = ((~(var_18 <= 47)));
                }
            }
        }
    }
    var_30 = var_14;
    var_31 = (((var_18 <= 2188) - ((((~17318765558367050463) == 14)))));
    #pragma endscop
}
