/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (117 ^ 37607);
        var_10 = 119;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = var_3;
        var_11 |= (max(((0 & (arr_4 [1] [i_1]))), (arr_4 [8] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_12 |= (((((var_2 >> (((arr_6 [i_2]) - 81906582))))) ^ ((var_7 ? var_7 : (-9223372036854775807 - 1)))));
        var_13 += arr_6 [i_2];
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (((((((arr_11 [i_3]) >= (arr_1 [i_3]))))) < var_5));
        arr_13 [i_3] = 255;
    }
    var_14 = var_1;
    var_15 ^= var_4;
    #pragma endscop
}
