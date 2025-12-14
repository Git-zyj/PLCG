/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(var_11, (max(3380624251, 154)))) + (((max((var_13 == var_9), var_1))))));
    var_16 = var_6;
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [7] = (((var_2 < 36) && var_7));
        arr_4 [2] [i_0] = (((var_7 <= (arr_2 [i_0]))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] = (var_9 + 43);
            arr_8 [i_0 + 1] [i_0] = 12151711680746082202;
            var_18 *= 3;
        }
        var_19 = (max(var_19, (((((arr_1 [i_0 + 1]) && 95))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (min(var_20, ((((37576 != var_13) * ((max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))))))));
        arr_11 [i_2] = 34;
        arr_12 [i_2] [i_2] = ((var_12 << (((((arr_10 [i_2]) + 18325)) - 19))));
    }
    #pragma endscop
}
