/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_9, (~1))) >> (var_6 + 30963));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (((max(29237, var_3))))));
        var_14 = ((241 ? 65535 : 144));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((arr_2 [i_1] [i_1]) << (((arr_2 [i_1] [i_1]) - 812572002934008334)))))));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_16 = ((65528 ? 3 : 127));
            var_17 = (max(var_17, (65535 & 32780)));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (((((((arr_7 [i_3]) ? 192 : 1777215010))) ? 50868 : (arr_4 [i_3]))))));
            arr_9 [i_1] [3] = (var_0 + var_3);
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_19 *= (((arr_0 [10]) <= (arr_2 [11] [i_4])));
            arr_12 [i_1] = (arr_11 [i_1] [i_1]);
            arr_13 [i_1] [i_4] = ((-(arr_1 [i_1] [i_4])));
            var_20 = (((arr_1 [i_1] [i_4 - 1]) ? (arr_1 [i_4] [i_4 - 1]) : var_5));
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_21 = (max(var_21, 165));
            arr_16 [i_1] = (arr_14 [i_1] [i_1] [i_5]);
        }
    }
    var_22 = (max(var_6, var_5));
    #pragma endscop
}
