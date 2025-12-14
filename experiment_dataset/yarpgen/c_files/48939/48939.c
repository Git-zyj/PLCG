/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((((-75 - var_2) ? ((2804520533 ? 90 : 0)) : 163)));
    var_16 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 ^= (!var_1);
                var_18 = (arr_2 [i_0 + 2]);
                var_19 *= ((-((((((arr_1 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_1 + 1])))) ? ((min(166, (arr_1 [i_0])))) : (var_1 == var_11)))));
                var_20 = (min(var_20, (((((min((min(1, var_13)), var_9))) == ((((max(var_11, (arr_0 [i_0 + 3])))) ? (((arr_4 [4] [6] [i_0 - 2]) | (arr_1 [i_0]))) : (arr_3 [i_0 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
