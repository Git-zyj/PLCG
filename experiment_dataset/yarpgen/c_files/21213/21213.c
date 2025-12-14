/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_6;
    var_19 = (((max(var_17, (((var_7 ? -1581868364 : var_16))))) <= -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = -1468097044155141995;
                var_21 = (((arr_1 [i_0]) ? ((((((arr_0 [0] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : 1)) << ((((-8 ? 2836717611 : 1581868363)) - 2836717611))))) : (max((arr_3 [i_0] [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), 18446744073709551615))))));
                var_22 = -18895;
                var_23 = (max(-106, 1029599015));
            }
        }
    }
    var_24 = (max(((46166 ? -2015386429 : 23)), -var_11));
    #pragma endscop
}
