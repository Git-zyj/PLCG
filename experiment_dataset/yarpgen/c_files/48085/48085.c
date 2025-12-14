/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(32767, ((-(min((arr_2 [i_0]), 3538388907))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 = (0 % 192);
            arr_5 [i_0] = (arr_0 [i_0]);
        }
        var_18 = (min(var_18, (((~(((arr_3 [i_0] [i_0]) / (arr_4 [8] [i_0]))))))));
    }
    var_19 = ((!((max(756578366, 2079232368)))));
    #pragma endscop
}
