/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = ((((min(var_16, (32751 && 698969885398422363)))) ? -32751 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 = ((((((3278 - (arr_0 [i_0] [i_0]))))) ? (arr_0 [i_0] [i_1]) : ((((-21104 + 2147483647) << (((arr_0 [i_0] [i_1]) - 8255)))))));
                var_23 = ((!((min((arr_2 [i_0]), -32751)))));
                var_24 = arr_3 [i_0] [i_0] [i_0];
                var_25 = (((-32745 < (min(var_15, 3768197007375636800)))) && (((((((arr_1 [i_0] [14]) ? 33 : (arr_0 [i_0] [i_1])))) ? var_19 : ((0 ? 32744 : 2392335270))))));
            }
        }
    }
    #pragma endscop
}
