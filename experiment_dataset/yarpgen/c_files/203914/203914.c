/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = ((-32753 - (min((arr_1 [i_0 + 1]), (var_17 == var_12)))));
        arr_2 [i_0] = ((-1361069790 - (arr_1 [i_0])));
        var_20 |= ((862957086 ? 169 : 862957095));
        arr_3 [i_0] = 3432010208;
        var_21 -= (max((var_18 ^ 9962), ((~(arr_0 [i_0 + 1] [4])))));
    }
    var_22 &= ((-((((((var_7 ? var_7 : var_0))) && (1 && var_6))))));
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                {
                    var_23 = (max(var_23, (((var_3 ? (((arr_4 [i_1] [i_2]) - (arr_8 [4]))) : ((-1075953318 + (arr_7 [i_3]))))))));
                    var_24 = ((-1048576 ? 3331648411823594235 : 1048575));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_25 |= (arr_9 [i_4 + 1] [i_4] [i_4] [i_3 + 2]);
                                var_26 |= -1181669055;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
