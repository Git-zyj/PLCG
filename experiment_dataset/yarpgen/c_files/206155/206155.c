/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 += 13691916259907382876;
                    var_22 = (((var_13 | 2080374784) ? 229 : var_8));
                    var_23 = (((arr_2 [i_1] [i_1]) > ((9223372036854775807 >> (arr_3 [i_2])))));
                }
            }
        }
        var_24 = (max(var_24, (-11 & 0)));
        var_25 -= (((arr_5 [4] [4]) ? (var_7 + -923423983767526933) : (((var_19 % (arr_2 [2] [i_0]))))));
    }
    var_26 = (max(var_26, var_5));
    var_27 = ((var_6 ? (((max(2819732973, var_2)) | var_13)) : (((var_2 ? var_4 : ((max(var_17, 0))))))));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_28 = (((arr_7 [i_3]) * ((min((arr_7 [i_3]), (arr_7 [i_3]))))));
        arr_8 [i_3] = (((((arr_6 [8] [i_3]) <= (arr_6 [i_3] [i_3]))) ? ((5374 ? 1 : 1)) : ((~((var_4 ? (arr_7 [i_3]) : var_9))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = (max(var_29, (arr_5 [i_4] [i_4])));
        var_30 = ((~(!var_7)));
        var_31 += (max(1834621781678635377, 2543777647));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_32 = ((((arr_14 [i_5]) ? var_13 : (arr_14 [i_7]))));
                                arr_23 [i_5] [i_7] [i_5] = (((~451179145) ? (-32767 - 1) : ((((((arr_17 [i_5] [i_5] [4] [i_5] [i_5] [11]) + var_15))) / (arr_11 [i_8])))));
                                var_33 = ((min((arr_10 [9] [i_6]), (arr_10 [i_5] [i_5]))));
                            }
                        }
                    }
                    arr_24 [i_7] = (((!-20) && var_17));
                }
            }
        }
        var_34 = (((var_1 ? (arr_15 [i_5] [i_5] [i_5]) : (-532015060 / 14784360202805221932))));
    }
    #pragma endscop
}
