/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((min(var_17, (1613 <= 18446744073709551615)))) ? (((((2047 ? 1 : 1613))) ? ((var_2 ? var_11 : 68719476735)) : (var_19 & var_10))) : ((var_8 + (8634545173160302443 / 1613)))));
    var_21 = ((8634545173160302449 ? (0 != 18446744073709551613) : var_7));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_22 -= ((894838149 ? (min(404406903128517666, -92)) : (((var_2 / (arr_0 [i_0 - 2] [4]))))));
        arr_2 [i_0] = var_11;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_23 &= 255;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    var_24 = ((var_6 ? ((min(var_8, var_4))) : var_19));
                    arr_10 [i_1] [i_2] [i_2] = var_4;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_25 += (var_14 * (29577 / 8634545173160302447));
                                var_26 -= ((var_14 % (((((-6362 ? 32 : var_0))) ? (1260259978 ^ 63925) : 6947828796989986136))));
                            }
                        }
                    }
                    var_27 = (((((var_14 ? var_18 : (11498915276719565474 * 5607030283704773608)))) ? ((-(arr_13 [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_3 - 2]))) : (((((var_7 ? var_10 : var_11)) * 18252)))));
                }
            }
        }
        arr_15 [i_1 - 2] [i_1] = (max(((max(1, 13))), ((var_10 - (arr_8 [i_1] [i_1] [0] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_28 -= (1 ^ -95);
        arr_19 [i_6] = ((((min(18978, 0)))) - (((((247 ? var_11 : var_17))) + ((6947828796989986141 ? 4091161971 : 11498915276719565473)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                {
                    var_29 ^= (min(((-27952 ? 255 : 4091161971)), (65535 - 0)));
                    var_30 -= (((-27951 || -27952) % ((var_8 ? var_19 : var_13))));
                    var_31 = (!7035);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_32 = ((((((arr_11 [i_9]) ? var_6 : var_19))) ? ((min(1, var_9))) : ((min((arr_11 [i_9]), (arr_11 [i_9]))))));
        var_33 = (min(var_33, (((((((arr_25 [i_9]) >> ((((10879 >> (var_5 - 51127))) - 5434))))) ^ (min(((-22 ? -6547 : 902394796)), 1)))))));
        arr_27 [i_9] = (((-21861 ^ 254) ? (((var_4 - (var_6 * var_10)))) : (max(var_17, (!2157180366)))));
        var_34 ^= (-353055336 >= (!255));
    }
    var_35 = var_18;
    #pragma endscop
}
