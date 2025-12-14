/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (--2147483642)));
            arr_6 [i_0] [i_0] = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = (188 >= 187);
            var_19 += 31686;
            var_20 -= arr_4 [i_2] [i_0];
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_21 += 68;
            arr_14 [i_0] [i_0] [i_0] = var_6;
            arr_15 [i_0] = ((((16383 ? (arr_0 [i_0]) : 67)) % -16369));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] = (arr_9 [i_0] [i_0]);
            var_22 += 11972720174807413870;
        }
        arr_19 [i_0] [i_0] &= var_10;
        var_23 ^= 6487;
        var_24 *= (arr_12 [i_0] [0]);
        var_25 ^= (arr_8 [8] [i_0]);
    }
    var_26 = var_13;
    #pragma endscop
}
