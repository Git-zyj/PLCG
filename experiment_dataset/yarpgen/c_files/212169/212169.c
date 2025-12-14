/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = 20209;
    var_19 = (max(((45327 ? (0 / 1) : (!13140931776310188282))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0]);
                arr_4 [i_1 - 1] = var_15;
                arr_5 [i_1] = (arr_0 [i_0]);
                var_21 = 45341;
            }
        }
    }
    #pragma endscop
}
