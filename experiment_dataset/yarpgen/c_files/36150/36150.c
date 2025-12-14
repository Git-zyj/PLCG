/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -8981185934735575367;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] &= 213;
        arr_5 [i_0] = arr_3 [i_0];
        var_16 = (((arr_2 [i_0]) == var_4));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 = ((((((max(var_14, 10845))) == ((10855 ? 1 : (arr_7 [i_1]))))) || (((2057804278 ? (arr_3 [0]) : ((var_11 ? (arr_0 [i_1]) : 22)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = (min(var_18, (arr_7 [i_2])));
            var_19 &= -10855;
            var_20 = ((-21867 ? 255 : -10847));
            var_21 -= (-32767 - 1);
        }
    }
    #pragma endscop
}
