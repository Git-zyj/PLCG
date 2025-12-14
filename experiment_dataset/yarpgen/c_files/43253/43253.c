/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 |= (max(((((max(var_1, var_8))) ? ((var_1 >> (13373948950591000579 - 13373948950591000554))) : (arr_1 [i_1] [i_0]))), ((((((arr_1 [i_1] [i_1]) && 1)) && ((!(arr_3 [i_1] [i_1]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 ^= ((!((min(var_7, 65535)))));
                    var_13 |= (+(max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))));
                    var_14 = (max(var_14, 4294967295));
                }
                var_15 = (min(var_15, (4294967295 ^ 4294967294)));
                var_16 += ((((!((((arr_6 [i_1] [i_1] [i_0] [i_1]) ? var_2 : var_4)))))) != 1);
            }
        }
    }
    var_17 |= (84 | 84);
    var_18 += ((5072795123118551037 * (((((13373948950591000579 ^ var_9) || (var_1 * 2474221270)))))));
    #pragma endscop
}
