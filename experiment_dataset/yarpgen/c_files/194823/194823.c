/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((arr_4 [i_1 - 1] [i_1]) ^ ((((arr_3 [i_0]) || (arr_1 [i_0] [i_0])))))) ^ (arr_1 [i_0] [i_1 - 1])));
                var_20 = (max(var_20, -1));
                var_21 = (((arr_4 [i_0] [i_0]) * (arr_1 [i_0] [i_0])));
                var_22 = (max(var_22, 0));
                var_23 = (!((min((arr_1 [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
            }
        }
    }
    var_24 = ((((((((73 ? var_11 : 18310))) ? var_11 : ((345 ? 15231 : var_14))))) ? -32748 : var_17));
    var_25 = ((((18446744073709551611 ? var_6 : -108))));
    #pragma endscop
}
