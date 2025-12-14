/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3;
    var_20 = ((-(((((59646 ? var_17 : -1197021720))) ? var_0 : ((-1197021720 ? var_3 : var_5))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 3] [i_0] [i_0] [i_0] = 17592186044415;
                    var_21 = ((var_5 ? 64511 : var_12));
                    var_22 = ((+((max((arr_0 [i_0]), 2147425140)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = ((1298080947 ? ((-(((!(arr_5 [10] [10] [14])))))) : (~65534)));
                        var_24 = (max(var_24, ((((min((~1197021720), var_11)) > ((var_8 ? 1 : 154)))))));
                    }
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_25 *= ((-740415334347100693 ? var_12 : (((arr_13 [i_0 - 2] [i_0 - 2]) ? var_9 : (arr_13 [i_0] [i_6 + 1])))));
                        var_26 = (((129 == ((var_14 ? var_14 : (arr_10 [i_3] [i_3]))))));
                        arr_20 [i_6] [i_3] [3] [0] [i_3] [i_0] = ((2538369473404329193 ? ((~(((arr_0 [7]) ? 35183835217920 : 0)))) : 18193952574744908158));
                        var_27 = (max(var_27, var_15));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_3] [i_7] [i_8] = (arr_10 [i_3] [i_3]);
                                arr_26 [i_0 - 3] [i_3] [i_7] [i_8] [i_8] = ((-((var_13 ? var_10 : 650500736))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_3] [10] |= 255;
                }
            }
        }
        arr_28 [i_0] [i_0] = min(((((-32767 - 1) ? -1197021721 : 10))), (((((9666893175217377636 ? -32762 : var_2))) ? (~-4142618358408052162) : var_18)));
    }
    #pragma endscop
}
