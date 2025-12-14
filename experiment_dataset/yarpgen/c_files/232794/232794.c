/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (((max((min((arr_0 [i_0]), var_3)), 64)) << (9824786452352784051 - 9824786452352784032)));
        arr_5 [i_0] = (-74 <= -27209);
        arr_6 [i_0] [i_0] = ((((var_9 >> (((arr_2 [i_0]) - 132)))) == (((var_2 != (arr_2 [i_0]))))));
        arr_7 [1] = ((((((((var_10 ? var_4 : 64))) ? ((var_7 ? 5 : 49)) : var_9))) + (((var_8 + 64692236) - (((var_3 - (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_10 [i_1] = (((min(var_6, ((22 + (arr_9 [i_1] [i_1]))))) | (max((max(1195917686, (arr_9 [1] [i_1]))), var_6))));
        arr_11 [i_1] = (min(((~(arr_9 [i_1] [i_1]))), ((+(min((arr_9 [i_1] [i_1]), var_10))))));
        arr_12 [i_1] [i_1] = (arr_8 [i_1] [i_1]);
        arr_13 [1] = ((!((45938 == (arr_8 [1] [i_1])))));
    }
    var_11 &= var_4;
    var_12 = (max(var_2, var_8));
    #pragma endscop
}
