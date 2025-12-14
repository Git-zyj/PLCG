/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((2396662665 != var_0) ? var_2 : (~var_8)))) ? ((-((var_15 ? 4 : 1339037348)))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((((((arr_1 [i_0]) != (arr_1 [4]))) ? (var_7 != var_11) : (((arr_1 [9]) ? var_12 : (arr_2 [i_0])))))) ? (arr_2 [i_0]) : (arr_0 [1] [i_1])));
                var_20 = (min(30368, 35143));
            }
        }
    }
    #pragma endscop
}
