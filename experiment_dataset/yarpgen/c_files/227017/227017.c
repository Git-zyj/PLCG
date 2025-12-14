/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(2757644368345839258, var_4))) ? var_15 : 2147483647))) || ((((((var_0 << (var_5 - 1576563169)))) ? 1965413815 : (var_0 > -37)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_1 [i_0] [i_0 - 1]) / (arr_1 [i_0] [i_0 + 2])))) ? (arr_1 [i_0] [i_1]) : (min(((var_13 - (arr_6 [i_0] [17] [i_0]))), var_2))));
                    arr_7 [i_0] [i_0] = (min((((arr_4 [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 4]) ? 309757451023783540 : 55945023)), ((max((arr_4 [i_0 - 1] [1] [i_0] [i_0 + 3]), 127)))));
                    arr_8 [i_2] [i_1] [i_0] |= ((!(arr_2 [i_1])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_19 = (((((var_11 >> (((arr_13 [i_0 + 2]) - 33078))))) - (((arr_5 [i_3] [i_3] [17] [i_0]) % 96))));
                var_20 = (min((~var_5), ((((((var_0 & (arr_0 [i_4])))) > ((var_9 ? -968674457 : 2757644368345839258)))))));
                var_21 = (max((var_9 - var_14), (((max(5538833308731960857, var_10)) - -8192))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_0] = 3098076153;
                var_22 = ((((arr_5 [i_3] [i_0 + 3] [i_0 + 3] [i_0 + 3]) <= 20991)));
                var_23 = (min(var_23, (arr_16 [i_5])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_6] = ((var_5 ^ (((arr_9 [i_0 + 3] [i_0 - 1] [i_0]) ? var_9 : 60))));
                var_24 = -171324409;
                arr_22 [1] [i_3] [i_6] |= (~932991611);
            }
            var_25 -= (((((min(var_16, var_12)))) >> (!var_7)));
        }
    }
    #pragma endscop
}
