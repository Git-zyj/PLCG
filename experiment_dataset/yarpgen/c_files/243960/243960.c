/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (!(arr_2 [i_0]));
                var_17 = ((-(((((min((arr_3 [i_0]), (arr_4 [i_1])))) || ((((arr_1 [i_1]) & 1))))))));
                arr_5 [i_0] [i_1] = (arr_1 [i_1]);
            }
        }
    }
    var_18 = (-18576 ? 31370 : -1034897040);
    var_19 = (-34165 * var_13);
    var_20 = ((141 ^ ((var_2 ? (!-1929929261) : var_11))));
    #pragma endscop
}
