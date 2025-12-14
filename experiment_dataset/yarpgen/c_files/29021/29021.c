/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((min((arr_3 [i_1 - 2] [i_1]), (min((arr_4 [i_0]), 51)))) & (((var_5 <= var_3) ? (arr_3 [i_1 - 1] [i_1]) : (arr_4 [i_0]))));
                var_20 *= (((1378135116 ? ((4294967295 ? 50210 : (arr_3 [i_0] [i_1]))) : -52)) | (arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 2]));
                arr_7 [i_0] [i_1] = (min((arr_3 [i_0] [i_0]), (min(var_11, (arr_5 [i_1 + 2] [i_1 + 3] [i_0])))));
                var_21 = ((((((24469 + 15326) && (((arr_3 [i_0] [i_1]) != var_15))))) - 0));
            }
        }
    }
    var_22 *= ((((144115188075855871 && 9223372036854775807) & ((min(11117, var_12))))));
    var_23 = var_7;
    #pragma endscop
}
