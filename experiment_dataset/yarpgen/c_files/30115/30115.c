/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (min(var_18, (((!(-2147483632 != 206))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] [i_0] = (min((min(2146959360, 141)), var_11));
                arr_6 [i_0] [6] = ((5010 << (((3706676804650860348 % 25474) - 19434))));
                var_19 = ((((((arr_4 [i_0] [i_1]) ? 46 : 5010))) ? (arr_4 [i_0] [i_1]) : (((arr_4 [i_0] [5]) + var_4))));
                arr_7 [1] [i_1] [8] = ((((((min(var_11, var_9))) ^ (arr_1 [10])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_20 = (max(var_20, (arr_1 [i_2])));
        var_21 = 0;
        var_22 = (((17198 & var_3) << (((arr_3 [i_2 - 3] [i_2 + 1] [i_2]) + 123))));
    }
    #pragma endscop
}
