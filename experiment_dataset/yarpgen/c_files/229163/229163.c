/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((max((!var_6), 18446744073709551615)) ^ 18446744073709551615))));
    var_15 = min(var_12, 16689855028867145927);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (18446744073709551615 ? ((12403432192517094010 ? (max(var_11, var_7)) : ((12403432192517094010 & (arr_0 [i_0]))))) : var_13);
                    var_17 = max((max((max(6043311881192457605, 1536129182025680311)), (1536129182025680305 <= 541165879296))), (max((arr_4 [i_1] [i_1 - 1] [i_1]), 18446744073709551615)));
                }
            }
        }
    }
    var_18 = (!6043311881192457582);
    #pragma endscop
}
