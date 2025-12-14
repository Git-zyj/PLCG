/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 = var_4;
                    arr_6 [i_2] [i_0] [i_0] = 46594;
                    arr_7 [i_2] [i_0] = ((44703 >> (1261960398944408694 - 1261960398944408680)));
                    arr_8 [i_1] [i_1] = (~var_13);
                    var_18 = (~var_6);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 7;i_3 += 1)
                {
                    var_19 = var_7;
                    arr_11 [i_3] [i_1] [i_1] [i_3] = (-493470246331851240 + var_15);
                    var_20 = ((0 ^ (-2147483647 - 1)));
                    arr_12 [i_0] [i_3] = 2147483647;
                }

                /* vectorizable */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    arr_16 [i_0] = (16 ? -2147483647 : 493470246331851257);
                    var_21 = var_13;
                    arr_17 [i_0] [i_1 - 1] [i_4] = (!var_6);
                    var_22 = 67108863;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    var_23 = (max(var_23, var_0));
                    var_24 = 2556678333669618258;
                    arr_22 [i_5] [i_5] = (var_9 && var_2);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_25 [i_6] = -95;
                    arr_26 [i_6] = (((arr_2 [i_1 + 2] [i_1 + 2]) - (((var_6 ? 84 : var_10)))));
                    var_25 = (min(var_25, (1 * 0)));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    arr_31 [i_0] [i_1] [i_0] = (!8550937297378754894);
                    arr_32 [i_0] [i_1] [i_0] [i_0] = ((var_8 ? -54 : 115));
                    arr_33 [i_0] [i_1 - 1] [i_7] = ((-31943 % (arr_0 [i_7 + 3] [i_1])));
                }
                var_26 = (max(var_26, (((9895806776330796721 ? (((~var_2) ? ((var_12 ? var_8 : var_16)) : var_3)) : (min((min(var_16, var_7)), (arr_20 [i_0] [9] [i_1]))))))));
                arr_34 [i_0] [i_0] [i_0] = (((((((arr_28 [i_0] [i_1]) ? var_11 : 46117)) != 108)) ? ((7 ? (arr_24 [i_1] [i_1 + 3] [i_1]) : (arr_24 [i_1 - 1] [i_1 + 3] [i_1]))) : ((max((var_14 && -1), (-149794090 - 2333852375))))));
            }
        }
    }
    var_27 = ((!(((-(var_1 - 4034823954))))));
    var_28 = 2147483637;
    var_29 ^= (min(var_7, var_15));
    var_30 = 2047;
    #pragma endscop
}
