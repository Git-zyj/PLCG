/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, ((((~9223372036854775807) ? ((var_10 ? var_12 : ((-18445 ? (-9223372036854775807 - 1) : 555454193914223813)))) : 4611686018427387903)))));
        var_14 *= (((min(7885, (-9223372036854775807 - 1)))));
        var_15 = (max((arr_0 [i_0] [i_0]), (!var_5)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 3] [1] [i_1] = ((max((-9223372036854775807 - 1), var_8)));
                    var_16 *= ((((arr_5 [6]) | var_8)) | (((~(244 >= var_10)))));
                    var_17 = (max(var_17, 224));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] = (((min(7885, 224))) ? (~0) : var_11);
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_3] [3] = ((((((arr_5 [i_1]) ^ -2137638935))) ? (arr_5 [i_1]) : (min((arr_5 [i_1]), var_3))));
                        arr_14 [i_1] [i_3 + 1] [i_2] [i_1] [i_1 - 3] [i_1] = 0;
                        arr_15 [i_1] = var_11;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_18 = (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4] = var_9;
                            arr_20 [i_0] [i_2 + 3] [i_2 - 1] [i_0] [i_4] [i_1] [1] = (((((~((max(-14683, var_7)))))) ? (((422516532 ? var_6 : 9223372036854775807))) : (((((((45610 ? -2137597929 : var_9)) + 2147483647)) << (var_12 - 9402))))));
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = var_2;
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_19 = (((((7207 ? var_7 : ((8454640761889983370 ? 32309 : 11314))))) ? (((((3899525211870665813 * (arr_22 [i_5])))) ? (arr_22 [i_5]) : 222)) : var_1));
        var_20 = 936142915;
        var_21 = (max(var_21, (((((1563256443 << (((-3521 + 3529) - 8)))) >> (((var_8 | var_1) + 8456)))))));
        var_22 = (min((((var_11 ? var_5 : var_7))), 7207));
        var_23 = (((((1582924529 ? 3449 : (arr_23 [i_5 - 1])))) ? ((-(arr_23 [i_5 + 1]))) : (arr_22 [i_5])));
    }
    var_24 = (((((-622571603 ? 14682 : 7216)))) ? (((!((min(var_0, var_2)))))) : (((var_1 + -2137638954) ? var_7 : 1396469866)));
    var_25 = var_11;
    #pragma endscop
}
