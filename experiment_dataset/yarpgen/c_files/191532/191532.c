/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = -var_19;
        arr_4 [i_0] = (((~584240684) < ((((arr_1 [i_0]) && (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (~32767);
        var_20 ^= ((((min(1, (arr_7 [i_1])))) & ((~(arr_7 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((arr_1 [i_2]) || (!192)));
        arr_12 [i_2] = (arr_1 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] &= ((7921553485959798849 ? (arr_7 [i_3]) : (arr_7 [i_3])));
        arr_17 [i_3] = (((arr_10 [5]) ? (!var_9) : var_5));
        arr_18 [i_3] = (arr_15 [i_3]);
    }
    var_21 = (max(var_21, 32767));
    #pragma endscop
}
