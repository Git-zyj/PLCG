/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [i_0] [7] = 228;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = ((!((((arr_12 [i_1 + 1]) ? 8353 : (arr_0 [i_4 - 1]))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] = (arr_12 [i_1]);
                            }
                        }
                    }
                }
                var_13 = (max(var_13, 8330));

                for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] = (min(((0 ? ((4294967286 ? 2376334968739280910 : 288230376151709696)) : 3478425842)), (arr_4 [i_0] [9])));
                    arr_21 [i_0] [i_0] [i_1] [i_0] = ((var_3 ? ((min(0, (arr_15 [i_0] [i_0])))) : (((arr_1 [i_0]) ? (max(var_4, var_8)) : ((((arr_10 [i_1] [i_5 + 1]) ? 1087 : 1261053511980382368)))))));
                    var_14 = ((((((!175) ? ((((arr_4 [i_0] [i_0]) ? 4294967291 : var_9))) : ((var_6 ? -9223372036854775806 : -8331))))) ? 129 : (max((248 < 27), (((arr_15 [i_0] [i_1 + 2]) + 61))))));
                }
                for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_15 *= (max((((arr_4 [8] [8]) ? ((max((arr_12 [i_1]), (arr_14 [1] [i_0] [1] [i_1] [i_6])))) : ((8331 ? 51446 : var_6)))), (((!(arr_3 [i_0] [i_0]))))));
                    arr_24 [i_0] = (min((arr_22 [i_0] [i_1 + 1] [i_0]), ((-(((-5040 != (arr_19 [i_0] [i_0]))))))));
                    var_16 = (((arr_14 [i_0] [i_1] [i_1] [i_1] [0]) ? ((((((arr_9 [8] [i_1] [i_1]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_22 [i_0] [i_1] [i_0])))) ? 5266 : 8349)) : 1));
                    var_17 = ((-10471 ? (!7622029097685862674) : (-32767 - 1)));
                    arr_25 [i_0] [i_0] = (((((~(~103)))) ^ (min(10824714976023688941, (arr_23 [i_0])))));
                }
                arr_26 [i_0] [i_0] = ((((max((arr_18 [i_0] [i_1 - 1]), 32767))) ? ((((((7 ? (arr_9 [i_0] [i_1] [i_1]) : (arr_1 [i_0])))) ? (((-32767 - 1) / var_8)) : ((max(1, 6898)))))) : ((4824643166366766203 * (((4503462188417024 ? -8354 : 2376334968739280910)))))));
            }
        }
    }
    var_18 = ((((((23893 | var_9) ? var_10 : var_2))) <= var_4));
    var_19 = ((((((max(27, var_8))) && (4503462188417024 * var_1))) ? (~var_6) : -8192));
    var_20 = var_7;
    #pragma endscop
}
