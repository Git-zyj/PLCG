/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(-18229, ((min(var_11, 35))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 ^= 245;
                arr_5 [i_0] [i_1] = (((arr_3 [i_1] [i_1] [i_1]) - (0 <= 4576)));
                arr_6 [i_1] = ((-56 ? ((-(!-115))) : (arr_2 [i_0])));
                var_14 = var_0;
                var_15 = max(((62928 - (arr_0 [i_1] [i_1]))), ((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
            }
        }
    }
    var_16 ^= 0;
    var_17 = ((((max(var_1, (max(-2380, 1))))) == (-2048 < var_5)));
    #pragma endscop
}
