/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [0] [i_1] [5] [0] = (arr_6 [i_0]);
                        var_16 *= ((!(((-(arr_4 [i_0] [i_0]))))));
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_1] = ((!(((+(((arr_6 [i_2]) ? 1119406127 : (arr_4 [i_0] [i_0]))))))));
                    arr_14 [i_0] [i_2] |= (((((((((arr_6 [i_1]) && var_4)))) | (min((arr_8 [i_0] [3] [3] [i_1] [i_2] [i_2]), 341228875)))) - ((((arr_2 [i_2 + 2]) ? var_5 : (arr_2 [i_2 + 3]))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((var_7 > ((268431360 ? (min(5988090416345923778, (-2147483647 - 1))) : (!3175561159))))))));
    #pragma endscop
}
