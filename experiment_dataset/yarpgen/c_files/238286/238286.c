/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(32767 || var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = -17928;
            arr_5 [i_0] = ((!((((arr_2 [i_0] [i_0]) >> (((arr_1 [i_1]) - 667054266)))))));
            arr_6 [i_1 - 2] [i_0] [i_0] = (((!1033293016) != (arr_3 [i_0])));
            var_11 = (arr_2 [i_1 - 2] [i_1 - 2]);
            arr_7 [i_0] [19] = 0;
        }
        var_12 = arr_1 [i_0];
    }
    #pragma endscop
}
