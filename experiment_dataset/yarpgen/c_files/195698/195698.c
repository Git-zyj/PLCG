/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((0 | ((103 ? (min(-1262969778, 126)) : 14336)))))));
                var_18 = (min(var_18, 133));
                arr_5 [i_0] [i_0] = ((((var_2 | (arr_3 [i_0]))) * ((0 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
