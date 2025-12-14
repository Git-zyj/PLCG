/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((((((((arr_1 [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [3] [i_1])))) || ((min(68, 57821))))))) == (((arr_4 [i_0]) ^ (((1 / (arr_3 [i_1] [i_0])))))))))));
                arr_5 [12] [i_1] = 1;
            }
        }
    }
    var_13 = (-(((((max(var_6, var_9))) && (var_3 | 1)))));
    #pragma endscop
}
