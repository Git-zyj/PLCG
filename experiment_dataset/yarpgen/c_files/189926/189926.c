/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 &= 18446744073709551614;
                var_18 = (max((((0 ? (arr_3 [i_0 + 3]) : (arr_3 [i_0 + 2])))), ((2049 ? -4294967283 : var_1))));
                arr_5 [i_1 - 1] [i_0 + 1] = (min((arr_2 [i_0]), ((((arr_3 [i_0 + 4]) ? var_4 : var_11)))));
                var_19 = (((((!((min((arr_1 [i_1]), (arr_4 [8]))))))) % (arr_3 [i_0 + 4])));
            }
        }
    }
    var_20 *= ((64459 ? 28498 : 28517));
    #pragma endscop
}
