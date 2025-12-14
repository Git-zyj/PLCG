/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 || (64 * 160)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 += (min((arr_0 [i_0]), ((var_1 | (arr_0 [i_0])))));
        var_13 = (((max((arr_1 [i_0] [i_0]), ((var_5 ? 5720 : (arr_1 [19] [i_0]))))) | ((9241 << (55732 - 55732)))));
    }
    var_14 *= (((max((var_2 >= var_5), (min(var_7, 160)))) << (((var_1 + 15904) - 7))));
    var_15 = var_9;
    #pragma endscop
}
