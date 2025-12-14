/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (min(var_16, var_8));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = -var_2;
                arr_6 [1] [1] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_19 = (min(var_19, ((((arr_10 [i_3] [i_3]) | ((((((arr_8 [8] [i_3]) ? (arr_9 [i_3]) : var_5))) ? (!var_0) : 235)))))));
                arr_11 [i_2] = (arr_9 [14]);
                arr_12 [8] [i_2] = (!(((0 & (arr_7 [12])))));
                arr_13 [i_2] = (arr_9 [i_2]);
            }
        }
    }
    #pragma endscop
}
