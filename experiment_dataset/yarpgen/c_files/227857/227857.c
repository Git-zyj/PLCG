/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [2] [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (var_2 - ((var_3 ? 2989141682807297256 : (arr_2 [i_0] [i_0]))));
            var_13 = (((arr_0 [i_0]) % (arr_0 [i_0])));
            var_14 = arr_0 [i_0];
            var_15 = 58;
            var_16 &= ((!(var_4 / 198)));
        }
        arr_7 [i_0] [7] = (((arr_4 [i_0] [i_0] [i_0]) || (4592647 == 33554431)));
        arr_8 [i_0] = (arr_5 [i_0] [i_0]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (arr_5 [1] [0])));
        arr_12 [16] &= var_4;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 = var_6;
        var_19 ^= (arr_11 [1] [i_3]);
    }
    #pragma endscop
}
