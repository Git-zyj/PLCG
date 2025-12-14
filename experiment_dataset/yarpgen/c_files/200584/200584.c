/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 ^= -87;
                var_15 |= var_8;
                arr_5 [i_0] [i_0] = (((((3136849445234486792 ? 1 : ((-(arr_4 [i_1])))))) * (arr_0 [i_0 + 1])));
            }
        }
    }
    var_16 = var_10;
    var_17 ^= (((((max(var_3, var_1)))) > ((((max(57, var_4))) ? var_13 : (-3151 | 230046899)))));
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_19 |= (max(((((((arr_10 [i_2] [i_3]) ? 4772076062113770911 : -6642103307849124060))) ? -4772076062113770895 : (max(-4772076062113770886, 28515)))), 42));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_20 -= 493326166;
                    var_21 = ((-4772076062113770868 ? -1998815440 : (-4772076062113770895 ^ var_13)));
                    var_22 = (((((arr_8 [i_2 + 1] [i_2 - 1]) < 4772076062113770904)) ? var_1 : var_2));
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_23 -= ((-((529518389271991030 ? var_1 : (arr_10 [i_2 + 1] [i_2 + 1])))));
                    arr_18 [i_2] [i_3] [i_3] [i_2] = ((~(arr_16 [i_2] [i_3] [i_2])));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_24 = var_13;
                        arr_26 [i_2] [i_7] [14] [i_6] [i_3] [i_2] = (arr_24 [i_2] [i_2] [i_2 - 1] [i_2]);
                        var_25 = var_0;

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            arr_29 [i_2] [i_3] [i_6] [i_7] |= ((var_13 ? var_8 : ((4772076062113770891 ? 0 : var_13))));
                            var_26 *= -4772076062113770892;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] = ((~((((arr_30 [i_7]) != -82)))));
                            var_27 -= ((-(((arr_8 [i_2 + 1] [i_2 + 1]) ? -25036 : -4772076062113770877))));
                            var_28 = ((-4772076062113770903 ? 3286625460 : (arr_28 [2])));
                        }
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            var_29 ^= 1;
                            var_30 = ((~(((var_0 < (arr_15 [i_2]))))));
                        }
                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            arr_40 [i_2] = (1 ? ((max(81, var_5))) : ((-21517 ? ((var_8 ? 8387584 : var_7)) : (arr_11 [i_2 + 1] [i_2]))));
                            var_31 = (max((arr_28 [i_2 + 1]), ((((max(var_6, 1))) ? var_3 : ((var_13 ? 4607908632685850820 : var_0))))));
                            var_32 = (max(var_32, (((-(((~31954) ? (~16) : -36104)))))));
                            arr_41 [i_2 + 1] [i_3] [i_11] [i_7] [i_11 - 2] [i_11 + 2] [8] |= ((max((arr_28 [i_7]), (max((arr_14 [i_2] [i_2] [i_2] [i_2]), 125829120)))));
                        }
                        arr_42 [i_2] [i_2] [i_2] [19] [i_7] = var_4;
                    }
                    var_33 = -82;
                    var_34 = 1857610500;
                }
            }
        }
    }
    #pragma endscop
}
