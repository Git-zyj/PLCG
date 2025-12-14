/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((118 < -65) ? (min((min(13404223627762863961, 13497780834069904594)), var_7)) : ((((138 && -1476868520) % ((min((arr_1 [i_0]), var_8))))))));
        arr_3 [i_0] [i_0] = ((+(((arr_1 [i_0]) + (arr_1 [15])))));
        var_13 = (((arr_0 [i_0]) - (min((((arr_0 [i_0]) * var_9)), var_5))));
    }
    var_14 = var_9;
    #pragma endscop
}
