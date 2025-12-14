/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_13 <= var_0) <= (var_15 || 0)))) - var_4));
    var_19 = var_11;
    var_20 = (max(-1, 4961321944658836640));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((min((var_6 > -1), var_16)) ? (1 + var_15) : ((32640 >> (24576 - 24547)))));
                var_22 += 0;
            }
        }
    }
    var_23 = 2947529517232411108;
    #pragma endscop
}
