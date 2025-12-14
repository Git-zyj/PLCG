/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_3 ? (((883493369 | var_10) ? var_9 : var_7)) : ((min(var_2, var_9))));
    var_15 |= var_5;
    var_16 |= (((((18446744073709551606 ? (!606270235) : 0))) ? ((min(1675800987, 606270229))) : (37 + 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (!(((-((var_8 ? (arr_0 [i_1]) : var_4))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_18 -= (arr_12 [i_0] [i_0] [i_0] [i_1]);
                        arr_13 [i_3] [i_3] [i_3] = ((var_1 ? -var_8 : (arr_8 [i_0] [i_2] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            var_19 ^= var_1;
                            arr_20 [i_0] [2] [i_4] [i_5] = (var_13 + var_3);
                        }

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, (1152921504606846975 | 184)));
                            arr_24 [i_6] [i_1] [i_1] [i_4] [7] = ((~(((arr_16 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 3]) ^ (arr_16 [i_4 - 1] [i_4 + 4] [i_4] [i_4 + 3])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_21 = (max((arr_26 [i_0] [i_0] [i_2] [11] [i_7]), var_1));
                            var_22 = (max((((0 ? 1 : ((var_11 ? 1378870580 : 26003))))), 4106011253914285320));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_23 = ((-(((arr_10 [i_4]) ? (arr_5 [i_0]) : (((var_5 ? (arr_27 [i_4] [i_8] [i_1] [i_4] [i_4] [i_4 + 4]) : -103)))))));
                            var_24 = (((arr_23 [i_4] [6] [6] [5]) ? var_6 : (((arr_9 [i_0] [i_2] [i_2 - 1] [i_2 - 1]) ? (64910 != var_3) : (var_3 | var_13)))));
                            arr_30 [i_0] [i_1] [i_2 - 1] [i_4] [i_8] = -32763;
                        }
                    }
                    var_25 -= min((!var_1), (arr_17 [i_0] [0]));
                }
            }
        }
    }
    var_26 += var_0;
    #pragma endscop
}
