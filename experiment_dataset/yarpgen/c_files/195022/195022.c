/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [11] = (~1721247162);
        arr_5 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_1] = (arr_0 [i_0] [i_0]);
            arr_9 [10] [i_1] [i_1] = -27737;
            arr_10 [i_1] [11] [i_0] = (min(((~(arr_1 [i_0]))), 127));
        }
    }
    var_10 = (((((-var_2 << (32 - 5)))) ^ var_4));
    #pragma endscop
}
