/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (~(max(((1152921504606846976 ? 3596293745689589588 : 126)), ((3596293745689589588 ? 14850450328019962034 : 14850450328019962044)))));
                    var_18 = ((var_13 ? (((min(-2633259568978231571, 124)) ^ ((64 - (arr_2 [i_2]))))) : ((14850450328019962035 ? (arr_2 [i_0]) : (!62)))));
                }
            }
        }
        var_19 = ((+((((((arr_4 [i_0]) ? 4294967295 : 18446744073709551615))) ? ((3596293745689589590 << (71 - 62))) : -76))));
    }
    var_20 = (-(max(((253 ? var_3 : 14850450328019962035)), ((14850450328019962041 ? 14850450328019962041 : -1)))));
    var_21 = (min(var_21, (((((-4181556348443698999 ? var_14 : 3)) & ((((((min(var_10, 3929895330689933440))) || (var_9 / 3929895330689933427))))))))));
    var_22 = var_3;
    #pragma endscop
}
