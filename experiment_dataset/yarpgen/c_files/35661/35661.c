/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? 0 : 17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_5 [8] |= var_9;
            arr_6 [18] = 1477845970691557017;
            arr_7 [i_1] = ((1 << ((((arr_4 [i_1] [i_1]) <= var_6)))));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_2] = var_2;
            arr_12 [i_0] = (arr_2 [i_2 - 1]);
            arr_13 [i_0] = var_8;
            arr_14 [i_0] [i_0] [i_2] = 18;
            arr_15 [i_0] = (arr_4 [i_2] [i_2]);
        }
        arr_16 [i_0] [i_0] = -1;
    }
    #pragma endscop
}
