/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [1] = ((0 ^ (~2591320181024903007)));
                    var_20 = ((1 ? 16594415504183348188 : 3452703750));
                    var_21 = ((!((((arr_0 [i_0] [i_0]) | (arr_0 [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_22 = (min(var_22, (18446744073709551615 ^ 2591320181024903007)));
                                var_23 |= (-82 && (arr_9 [i_0] [i_1] [i_3] [i_4]));
                                var_24 = (((~134215680) ? 12610 : (~4160751616)));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_6] [i_1] = ((((1 ? 842263546 : 3230))) ? 58172 : 27398);
                        var_25 = ((-1812063607 ? -1 : (arr_0 [i_6] [i_0])));
                        arr_19 [i_0] [i_0] [i_3] [i_0] [i_1] = (--17060);
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_0] [i_1] = ((-(0 << 0)));
                        var_26 = ((3452703750 ? 0 : (~0)));
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [19] = (!65535);
                            var_27 = (((1 | (arr_3 [i_0] [2]))));
                            var_28 = (max(((max(448, ((3150254671 ? 127 : 1037382373))))), ((~((-69 ? 9223372036854775807 : 3468642468361830872))))));
                        }
                    }
                }
                var_29 += 62;
                var_30 = ((((((65535 ? (arr_22 [i_0] [16] [i_0] [16]) : 469932179)))) ? (((((((1240855268 + (arr_25 [i_0] [i_1] [i_1])))) && (~1))))) : (max(((-26 ? 252 : (arr_22 [i_0] [15] [i_1] [7]))), -128))));
                var_31 = 0;
            }
        }
    }
    var_32 = (6969792861607945466 ? ((-5239 ? 1 : (max(var_16, -1)))) : (((-469932179 ? -120 : var_18))));
    var_33 = var_15;
    #pragma endscop
}
