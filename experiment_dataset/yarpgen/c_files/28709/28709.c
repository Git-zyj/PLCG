/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (min(-95, var_12));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 *= (min((((-((var_9 ? -31279 : var_7))))), (max((arr_5 [7] [i_0 - 1]), (arr_3 [i_0] [i_0 + 2] [i_0 + 4])))));
                    arr_6 [i_2] = (((((var_14 % (arr_4 [i_0] [i_1] [i_1] [i_2]))) ^ ((max(64863, var_5))))));
                    var_20 = (min(var_20, (((-6826153675993556002 ? ((((arr_0 [i_0 + 4]) * var_1))) : var_15)))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_21 |= var_11;
                                var_22 = (min((var_11 ^ 18446744073709551588), ((((max((arr_11 [i_0] [i_1] [i_3] [i_4] [i_3]), (-127 - 1)))) ? (((-(arr_8 [i_0] [i_0] [i_3])))) : 9223372036854775804))));
                                arr_14 [i_0] = (((arr_0 [i_4]) ? ((-0 ? 6826153675993556016 : (((((arr_0 [i_0]) != -877730906561259979)))))) : ((((var_3 >= (arr_8 [i_3] [i_3] [i_3]))) ? 3924315291751066138 : (((4109410772 ? var_16 : var_5)))))));
                                arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = (arr_0 [i_1]);
                            }
                        }
                    }
                    arr_16 [i_0 + 4] [i_0] [i_0] = var_16;
                    var_23 = (min(var_23, (arr_0 [i_0 + 2])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_19 [1] [1] [i_6] = (var_1 || -48);
                    arr_20 [i_0] [1] [1] &= (((arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) ? 68 : ((4880211827447073867 ? (arr_3 [i_0] [i_1] [i_1]) : var_12))));
                    arr_21 [11] |= ((~(185556525 + 255)));
                    var_24 = (14689289792196085971 * var_0);
                }
            }
        }
    }
    var_25 = var_10;
    var_26 = min(var_4, (((((233 ? 267911168 : 185556525))) ? ((var_11 ? 9246226864126404543 : 718851976)) : (~var_8))));
    var_27 = 2895133983843083930;
    #pragma endscop
}
