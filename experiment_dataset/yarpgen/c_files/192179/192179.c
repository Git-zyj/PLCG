/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [3] = ((min(var_5, 63)));
                var_12 = (max(var_12, (((((((arr_3 [4] [i_1]) - (((var_3 && (arr_1 [i_1] [i_0]))))))) ? -1 : ((((((76 ? 0 : 1))) != var_6))))))));
            }
        }
    }
    var_13 = var_11;
    #pragma endscop
}
