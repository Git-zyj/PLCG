/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_16 = 65535;
                    var_17 = (max(var_17, ((((var_6 && 1) | (var_7 / var_5))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0 + 3] [i_1 + 1] |= var_13;
                    var_18 ^= ((((((arr_1 [i_0]) ^ ((min(var_9, var_11)))))) ? 5 : (((arr_3 [i_0] [i_0]) ? -1 : (255 == var_8)))));
                    var_19 = (arr_3 [i_1 - 1] [i_1 - 2]);

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_20 ^= ((var_4 % (((min(255, var_5)) / var_12))));
                        var_21 = ((((((((((arr_1 [i_3]) && (arr_6 [i_3]))))) / ((0 ? (arr_5 [i_0 + 3] [i_0] [i_0] [i_0]) : var_8))))) ? (((arr_0 [i_1 - 2]) & 178)) : var_2));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_14 [i_5 - 1] = ((max((arr_8 [i_0 - 2] [i_5 + 1] [i_1 + 1]), (750420513 && var_6))));
                        var_22 -= ((((((var_8 * (arr_8 [i_5 + 2] [i_3] [14]))) & var_4)) * 178));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_23 -= ((2478131685527013223 ? var_13 : (var_3 > var_6)));
                        var_24 = (arr_17 [i_0] [i_0] [i_0] [i_6]);
                    }
                }
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    var_25 = (min(var_25, (((((((arr_12 [i_0 - 2] [i_1 - 2] [i_1 - 2] [i_7 - 1]) ? (((var_0 ? -1119621956 : (arr_16 [i_7] [i_7 - 1] [6])))) : 13139889456461138997))) ? (max(var_8, 1245129418)) : (!1245129418))))));
                    var_26 = (max((max(31724, var_9)), (((var_1 != (((arr_8 [i_0] [i_1 + 1] [i_1 + 1]) ? 6 : var_4)))))));
                    var_27 = (max(((251 << (1 == 1119621955))), (max((4438248775255549551 == -121), var_4))));
                }
                arr_21 [9] |= (arr_8 [i_0] [7] [7]);
            }
        }
    }
    var_28 = var_12;
    var_29 |= 8;
    #pragma endscop
}
