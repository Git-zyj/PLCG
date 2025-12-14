/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 131071;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 -= ((!(arr_3 [i_0])));
                    arr_7 [i_0] [i_0] [i_1] = (arr_1 [i_2 + 2]);
                }
            }
        }
        var_18 -= var_16;
        var_19 ^= (131071 >= var_9);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, (((((var_11 - (arr_11 [i_0] [i_3 - 1] [2])))) ? (max((arr_10 [i_3] [i_0] [i_3]), (arr_11 [i_3] [i_3 - 1] [i_4]))) : ((((!(arr_11 [i_3] [i_3 - 1] [i_3])))))))));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_21 = (var_16 || 131054);
                        var_22 = ((~(max(-11446, (arr_3 [i_5])))));
                        arr_15 [i_4] [i_0] |= ((arr_14 [i_4 + 2] [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 1] [i_5]) << ((((var_3 ? (max((arr_9 [i_0] [i_4]), 3768770427)) : 2850195095)) - 7582312698752448904)));
                    }
                    var_23 += ((!((((arr_12 [i_0] [i_0] [i_3 + 1] [i_3]) ? var_6 : (arr_12 [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 1]))))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = (max(9549, 10234337910907159417));
                    var_24 += ((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_25 = (max(var_25, (max(((~(~var_6))), var_4))));
    var_26 *= var_16;
    var_27 |= (423136869 && var_16);
    #pragma endscop
}
