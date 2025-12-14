/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((2116535052 ? 3897980573 : -22643));
    var_16 = (2178432243 ? ((18122 ? (2116535052 >= 26529) : var_2)) : ((max(-18122, 5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = (((!-19257) ? var_13 : (var_5 && var_1)));

            for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
            {
                arr_11 [i_1] [i_1] [i_0] = ((var_14 || (-1497598587 || 1)));
                arr_12 [i_0] [i_0] = var_8;
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_17 [i_0] [12] = (var_13 % 32767);
                arr_18 [i_0] [i_0] [i_3] = ((1 ? var_7 : (38211 | -32762)));
            }
            arr_19 [i_1] [i_0] [i_0] = (max((max(2116535068, 29717)), (((var_3 ? -18117 : (arr_10 [i_1 - 2] [i_0] [i_1 - 2]))))));
            var_17 = (max(var_17, ((max(var_1, (min(4060768226, (arr_4 [i_0] [i_1]))))))));
            var_18 ^= var_1;
        }
        var_19 = ((var_10 ? (~448) : var_9));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_20 = (((((-1501929323 ? var_10 : var_12))) ? var_2 : (((1 ? var_8 : var_3)))));
        var_21 ^= (min(var_10, -29416));
        var_22 = (((-2984 ? 61 : 30919)));
        arr_23 [i_4] = var_4;
    }
    #pragma endscop
}
