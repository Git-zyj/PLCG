/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((44 ? (((max(var_6, 854109099)) << ((((0 ? (-127 - 1) : 128)) - 128)))) : ((18 ? 255 : 255))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 |= (max(((((((18 ? 128 : 104))) ? (((min(var_9, 234)))) : ((var_13 >> (((arr_1 [i_0]) - 13486139132482804314))))))), (((arr_1 [i_0 - 1]) << ((((var_13 ? var_10 : var_14)) + 306242838))))));
        var_20 = -18;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1 - 2] = (arr_3 [i_1]);
        var_21 = (!var_0);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_22 = (max(var_22, ((((min((arr_3 [i_2]), (arr_3 [i_2])))) ? ((21 ? var_1 : 198)) : ((((max(50, -3768741721628091529)) != ((((var_4 + 2147483647) << (((arr_6 [i_2] [i_2]) - 1))))))))))));
        var_23 = (arr_6 [i_2] [i_2]);
        var_24 = (((((((var_12 ? var_10 : (arr_7 [i_2])))) ? var_3 : ((0 / (arr_6 [i_2] [i_2]))))) != ((1031534387 ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))));
    }
    var_25 = var_4;
    var_26 = ((((((((var_13 ? var_2 : var_6))) ? (118 && 2347292955) : 4294967295))) || var_13));
    #pragma endscop
}
