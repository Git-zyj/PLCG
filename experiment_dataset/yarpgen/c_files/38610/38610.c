/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_2, ((((5 < var_3) <= (var_11 < 64))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((!(arr_2 [i_0] [i_0])));
        var_22 -= (5 > var_9);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_23 |= var_11;
        var_24 &= ((((3745411950 < (arr_3 [i_1]))) ? (arr_3 [i_1]) : 3745411950));
        var_25 ^= 3599904957;
        arr_5 [2] = (((arr_3 [i_1]) <= ((16037574014517363620 + (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_26 = 1;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_27 = (((arr_9 [i_2] [i_3]) ? (arr_6 [i_3] [i_2]) : (arr_9 [i_2] [i_3])));
            var_28 &= ((arr_7 [i_3] [i_3]) ? ((((arr_4 [i_3]) * (arr_4 [i_3])))) : 18327745593527272184);
        }
    }
    #pragma endscop
}
