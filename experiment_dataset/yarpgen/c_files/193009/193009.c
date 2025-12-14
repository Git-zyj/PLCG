/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 -= (arr_1 [i_0]);
        arr_2 [i_0] = ((var_7 == (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= (max(var_7, var_9));
        var_11 = var_4;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_12 = (3636779203 ? var_0 : (((2646452997372437751 || (arr_6 [3])))));
        var_13 -= (~4294967295);
        arr_9 [i_2] [i_2] = 12282638320203109234;
    }
    var_14 *= (((max(1452, var_7)) == (((-1 / var_3) ? var_0 : var_7))));
    var_15 = (max(var_15, (((((max(var_2, var_4))) * ((var_6 >> (((~var_5) + 63576)))))))));
    #pragma endscop
}
