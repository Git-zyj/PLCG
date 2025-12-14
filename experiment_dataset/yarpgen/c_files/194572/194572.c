/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_15 = (arr_3 [i_0 + 1] [i_0 + 1]);
            arr_5 [i_0] [i_1] [i_1] = var_4;
            var_16 = var_6;
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_17 = (min(var_17, (arr_6 [i_2 + 2])));
            var_18 ^= ((~(((arr_7 [i_0 - 1] [i_2] [i_2 - 1]) ? var_9 : (arr_1 [i_0 + 1])))));
        }
        var_19 += 1652346500;
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3 + 3] [i_3 - 2] = (max((((315915546 ? (arr_9 [i_3 + 3]) : (arr_9 [i_3 + 1])))), (max((var_7 ^ var_1), ((-2147483636 ? (arr_11 [i_3 + 3]) : var_6))))));
        arr_13 [i_3] [i_3] = 15080148022647818420;
        var_20 = (((((arr_11 [i_3 + 2]) != (arr_8 [i_3 + 1] [i_3]))) ? (max(var_7, (arr_9 [i_3 + 2]))) : (arr_10 [i_3 - 1])));
        arr_14 [i_3] = max((~var_5), (arr_11 [i_3]));
    }
    var_21 = -var_3;
    #pragma endscop
}
