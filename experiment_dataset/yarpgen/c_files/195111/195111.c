/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_2;
        var_10 = (!7709568616683175884);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [12] = (var_1 ? (((((arr_3 [i_1]) || var_7)))) : var_4);
        var_11 = (((arr_3 [i_1]) <= (arr_3 [i_1])));
        arr_7 [i_1] = 522440273;
        var_12 = ((-(arr_4 [i_1])));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_12 [i_2] [21] = (min((((255 ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])))), ((min((var_4 <= -32494), (min(2450672632, 2762146801)))))));
        var_13 = (max(var_13, 2450672632));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_15 [i_3] = var_4;
        var_14 *= (arr_14 [i_3] [i_3]);
        arr_16 [i_3] = (arr_9 [16] [14]);
        arr_17 [i_3] = ((+(((arr_11 [i_3] [i_3]) & (arr_13 [7])))));
    }
    var_15 = ((((var_5 <= (var_8 + 32489))) ? ((((var_4 >= var_4) || var_2))) : -27923));
    var_16 ^= ((!(!var_3)));
    var_17 = 3224491771;
    #pragma endscop
}
