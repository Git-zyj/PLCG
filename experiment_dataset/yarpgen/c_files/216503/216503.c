/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(-2147483647 - 1)));
    var_18 = (max(var_18, ((min(var_11, 2041037527670653930)))));
    var_19 = (((((var_0 / var_8) * var_1)) > var_5));
    var_20 = ((var_8 ? ((((var_3 >> (var_3 - 16010776202895569585))) ^ (var_14 | 38))) : ((var_7 ? -1091944444 : ((var_3 << (var_8 - 36467)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = var_4;
                var_21 = ((((35897 & -81) ? 81 : (arr_4 [i_1 - 2] [i_1] [i_1 - 2]))));
                var_22 = (max(var_22, var_12));
                var_23 += ((((max(var_9, var_11))) && (arr_0 [i_0])));
                arr_7 [i_0] = (!(((~(arr_2 [i_1 - 3])))));
            }
        }
    }
    #pragma endscop
}
