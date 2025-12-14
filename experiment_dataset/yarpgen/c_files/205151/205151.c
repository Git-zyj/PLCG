/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= ((~(((max(var_11, var_1)) * var_1))));
        arr_3 [i_0] = var_11;
        var_17 = -6;
        var_18 = ((~(arr_2 [1])));
        var_19 = ((-(max(((var_9 ? 65021 : 0)), var_2))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                var_20 ^= (((((var_2 - (arr_5 [i_1])))) ? ((255 ? 111 : 4611729624591377196)) : ((((arr_5 [i_2]) ? (arr_7 [i_2]) : (arr_5 [i_1]))))));
                arr_9 [i_1] [i_1] [i_1] = (max((arr_5 [i_1]), ((~((467212954 ? 52142 : var_2))))));

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_21 = (min(((min((arr_5 [i_3 + 2]), var_8))), (max((arr_8 [i_3 - 1] [i_3]), (arr_4 [i_3 + 2])))));
                    arr_12 [i_1] = (arr_8 [i_3 + 1] [i_3 + 1]);
                    arr_13 [i_1] [i_1] [i_1] [i_1] = -71;
                    var_22 = (((max((arr_6 [i_3] [19] [19]), (var_9 && var_6)))) ? (arr_10 [i_1]) : ((~(((arr_8 [i_3] [i_2]) ? (arr_10 [i_2]) : var_1)))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_23 = (((arr_6 [i_1] [i_2] [i_4]) ? (min(var_14, -16)) : var_3));
                    var_24 = (min(var_24, ((((((max(9223372036854775807, 1)))) ? (((!(arr_10 [i_2])))) : 1)))));
                    arr_17 [i_1] [i_2] [i_1] = var_4;
                    var_25 = 255;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_26 = (arr_19 [i_1] [i_5]);
                    var_27 = 0;
                    var_28 = (((((-(-127 - 1)))) ? (((arr_4 [i_2]) * ((min(var_4, (arr_20 [i_1] [i_2] [i_5] [i_5])))))) : (((((max(var_0, 2147483647))) ? ((-1203864074 ? var_3 : 13394)) : 0)))));
                    var_29 |= (((((-((4425908371849668233 & (arr_19 [i_1] [i_5])))))) ? (((arr_16 [i_1] [0] [16] [i_1]) ? var_0 : 17475167473286475485)) : var_11));
                }
                arr_21 [i_1] [i_1] = (arr_20 [i_2] [i_2] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
