/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((((-((((arr_1 [i_0]) >= var_11))))) & ((min(var_14, (14236347790928071407 > 14236347790928071393))))));
                var_18 = (arr_0 [i_0] [i_0]);
            }
        }
    }
    var_19 = (max(var_19, 17175674880));
    var_20 = var_17;
    #pragma endscop
}
