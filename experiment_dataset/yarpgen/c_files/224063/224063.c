/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((((((var_0 + 9223372036854775807) >> (var_13 - 19453)))) ? (((~1) / var_0)) : ((min((var_6 >> 1), (var_1 == var_5))))));
                            var_14 -= (((((((min(var_6, var_3))) ? var_13 : (693559920 < var_12)))) ? ((max((var_6 + 118), 1))) : var_0));
                            var_15 *= ((((((min(var_10, var_3))) & ((var_5 ? 17793 : 17793)))) << (((var_11 | var_1) - 3697846072))));
                            var_16 = (min(var_9, var_4));
                            var_17 = (max(var_17, -4872637285758491267));
                        }
                    }
                }
                var_18 = ((((((var_6 != var_11) && ((((var_3 + 2147483647) << (((var_2 + 49) - 15)))))))) - var_9));
                arr_11 [5] = (((max((~62870), var_9)) >> (((((((var_3 | var_3) + 2147483647)) << (((min(var_13, var_7)) - 19488)))) - 2147483556))));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_19 = (((var_7 + var_0) - ((((var_1 + 855133588961391978) ? ((var_13 ? var_2 : var_1)) : (((62186 ? -19898762 : 1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((((var_8 >= var_1) ? 15619420908111060278 : (var_11 && var_2))), (((var_1 == (var_5 > 31877)))))))));
                                var_21 -= (max((max((var_9 + 1), (var_6 - var_11))), (((1 <= (var_3 * var_5))))));
                                arr_22 [i_0] [i_5] [i_0] [i_0] [i_6] = var_10;
                            }
                        }
                    }
                    var_22 -= (((-9223372036854775807 - 1) && ((((max(var_6, var_3))) == -1))));
                    arr_23 [i_0] [i_4] = (((((var_1 >> ((((max(var_5, var_8))) - 70))))) ? (((1 * 31877) >> (((15619420908111060278 - var_6) - 15619420908111060276)))) : var_6));
                }
            }
        }
    }
    var_23 += (max(((((var_13 || -1070100474) << ((((max(1, var_4))) - 5135))))), ((((max(1, 2))) ? (max(var_2, 16563153078420997533)) : (17793 / var_13)))));
    var_24 = 1;
    #pragma endscop
}
