/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_11 &= (((4294967295 ? 0 : 1715069651)));
            var_12 ^= ((-(~547320355974651584)));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_13 += (((arr_2 [i_0]) ^ (max((max((arr_7 [8]), 3200421800)), (arr_8 [i_0])))));
            var_14 = (min(((((547320355974651584 + 2147483647) >> (((max(0, (arr_6 [i_0] [i_2] [i_2 - 2]))) - 1522025632930618869))))), (((((-8429010122118337992 ? (arr_1 [i_0]) : (arr_3 [i_0] [8] [i_0])))) ? var_3 : -1715069655))));
            arr_9 [i_2] [i_2] = 0;
        }
        var_15 = (3616159391310695564 || (arr_0 [i_0]));
    }
    #pragma endscop
}
