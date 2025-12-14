/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(-4943706594288831504, (min((min(1, 0)), var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((24077 ? 738447490 : 1));
        arr_4 [i_0] = ((!(arr_1 [i_0])));
        arr_5 [i_0] [i_0] = (-24077 ? -24077 : 78);
        var_12 = (min(var_12, ((((!-24077) ? ((((arr_2 [i_0]) ? (arr_0 [13] [13]) : 24059))) : (arr_2 [i_0]))))));
        arr_6 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [20] [i_0]) : (arr_2 [i_0])));
    }
    var_13 = var_6;
    var_14 = 1;
    #pragma endscop
}
