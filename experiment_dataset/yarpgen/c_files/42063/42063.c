/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [3] [9] = ((2147483647 >> (61054 - 61028)));
                var_16 |= ((((min(-var_0, var_1))) ? (arr_5 [i_1]) : (~67108352)));
                var_17 = (min(((-2147483647 ? (!-19581) : var_11)), var_1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [2] [i_3] = ((2147483647 ? (-2147483647 - 1) : -22368));
                var_18 = (min(var_18, 2147483647));
                var_19 = (~2444349718078955291);
            }
        }
    }
    var_20 = ((min(((max((-2147483647 - 1), var_15))), (min(var_6, var_12)))));
    var_21 *= (min(((((min(var_14, 2444349718078955295))) ? var_10 : (min(239, -2147483647)))), var_15));
    #pragma endscop
}
