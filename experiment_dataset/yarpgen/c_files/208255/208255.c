/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((((var_2 ? -16 : (arr_2 [i_1]))) | (min(var_2, (arr_1 [10])))))) ? ((-29547 ? (max(29559, 4489977871076081651)) : (((max(-17567, 22401)))))) : ((var_12 ? (min(-8221169004861356431, (arr_0 [i_0]))) : (arr_1 [i_0])))));
                var_15 = arr_0 [i_1];
            }
        }
    }
    var_16 = ((min(var_6, (119 | -2784))));
    var_17 = var_1;
    #pragma endscop
}
