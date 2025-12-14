/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!var_5) && var_2)) ? var_2 : ((24964 ? var_3 : ((max(245183418, 30720)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((((((arr_1 [i_0] [i_0]) | 44314)))) ? (((var_4 ? var_17 : (arr_2 [i_0] [i_1 + 1])))) : (((arr_0 [i_0]) - (max((arr_1 [10] [i_1 + 2]), var_2))))));
                arr_5 [i_1] = (arr_4 [7]);
                arr_6 [i_1] [i_1 + 1] [i_1] = (((245183416 && (arr_0 [i_1]))) ? ((0 ? 3940649673949184 : 24330)) : 0);
                var_21 = ((~(((((32767 ? 3940649673949184 : 24330))) ? (((var_12 + 2147483647) << (((arr_0 [i_0]) - 125)))) : var_3))));
                var_22 = ((!(((1 ? 243 : 1)))));
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
