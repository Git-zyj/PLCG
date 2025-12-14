/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((!-76) ? var_13 : var_8)), var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((-14 ? ((6291456 ? 12084186488750572525 : ((-104 ? 3862473091153117999 : 2311576797)))) : 94479231));
                arr_5 [i_0] = ((+((+(((arr_4 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0] [i_1])))))));
                arr_6 [i_0] [i_1] = ((((((4294967295 / var_3) * -var_0))) ? ((((((arr_1 [i_1]) * 14))) ? (((2024014870 ? 88 : (arr_4 [i_0])))) : ((var_11 / (arr_0 [i_0] [i_1]))))) : ((-(max((arr_0 [i_0] [i_0]), var_8))))));
                var_17 = 5;
                arr_7 [i_1] [i_0] = ((!(arr_4 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
