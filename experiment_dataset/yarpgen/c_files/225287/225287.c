/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_16, ((-((max(-9, var_10)))))));
    var_21 = ((var_1 == ((13264 ? 52272 : -1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((((min(((~(arr_1 [i_0]))), (arr_1 [i_0])))) ? ((((20 == ((-(arr_1 [2]))))))) : ((13067 ? 281474976710655 : -2))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_23 = (arr_4 [i_0] [i_1]);
            var_24 = ((0 >> (((arr_4 [i_0] [i_1 + 2]) - 6704376960442640966))));
        }
        var_25 = (max(var_25, (((((+(min((arr_4 [i_0] [i_0]), var_10)))) <= (arr_2 [8] [i_0]))))));
        arr_6 [14] = (-32767 - 1);
        var_26 = (((-7 ? ((-83 ? 226 : 2625374696) : 94))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = (arr_8 [i_2]);
        arr_12 [i_2] = (arr_10 [i_2]);
    }
    #pragma endscop
}
