/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_4 [i_1] [i_0]);
                arr_6 [i_0] = max(((~((65529 ? var_12 : (arr_4 [4] [i_0]))))), 19);
            }
        }
    }
    var_20 = (max(var_20, ((min(((-(max(var_16, 18446744073709551615)))), (!var_3))))));
    var_21 = (!((((var_4 | 21) ? var_12 : ((65534 ? var_0 : var_12))))));
    var_22 *= ((((((~53607) > (!var_3)))) ^ -28678));
    #pragma endscop
}
