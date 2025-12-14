/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += (((min((((arr_1 [i_2] [i_1]) ? var_2 : var_8)), 1)) / -562197746740541681));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_13 [17] [i_0] [i_2] [17] = ((~((-(arr_12 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_0])))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] = ((+(((arr_4 [i_0 + 1]) ? (arr_3 [i_0] [i_0 + 3]) : (arr_3 [i_0] [i_0 - 1])))));
                        arr_15 [i_0] [i_1] [i_1] [i_0] [3] = var_11;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_17 &= var_13;
                        arr_20 [i_0] [i_1] [1] [i_4] &= ((!(((18446744073709551586 ? 34359214080 : (arr_5 [i_0 - 3]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 -= var_12;
                                arr_25 [i_0] [i_2] [i_1] [i_0] = (((((((0 != (arr_22 [i_0] [12] [17] [17]))) ? 0 : (arr_2 [i_0])))) ? ((var_6 ? (((-(arr_4 [i_2])))) : (168956411 * var_1))) : ((min(-8192, (-2147483647 - 1))))));
                                var_19 = (min(var_19, ((((!var_14) / (((((var_1 ? (arr_5 [i_0]) : var_7))) ? (33451 != -919924833) : ((0 ? 3115893450759488890 : var_3)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1] [10] [13] [i_1] = (((((((var_14 ? -34359214059 : 32757))) && ((min(1390461958, var_3))))) ? (arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 2]) : (((min(var_1, (var_9 < var_8)))))));
                                var_20 ^= (((1443477808 - 0) < (((((247 ? (-32767 - 1) : 1))) - ((1 ? 34359214091 : 1))))));
                                arr_33 [i_1] [12] [i_2] [12] [8] |= (((((arr_28 [i_1] [i_1] [4] [i_2] [12] [12] [12]) ? ((-(arr_22 [i_0] [i_0] [1] [i_0]))) : (34359214059 && var_14)))) ? ((var_8 - ((-105 ? 919924814 : 562197746740541681)))) : (~4294967273));
                                arr_34 [i_0] [i_0] [i_1] [11] [i_0] [i_8] = (!var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 -= ((var_1 ? (((((var_14 ? -6228 : var_6))) ? var_13 : (((min(32748, 209)))))) : var_15));
    #pragma endscop
}
