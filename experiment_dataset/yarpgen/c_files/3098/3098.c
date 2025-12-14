/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_3 ? var_3 : (3650666296 & 3650666296)))));
    var_19 = (min(var_19, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (!9223372036854775806);
                var_21 = (((((var_12 < (arr_3 [i_1]))) ? -102 : (arr_4 [i_0] [i_1] [i_0]))));
            }
        }
    }
    var_22 = (min((((~((((-2147483647 - 1) <= var_3)))))), ((44521 ? 44546 : 503316480))));
    var_23 -= var_7;
    #pragma endscop
}
