/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (((max(((var_4 ? var_12 : var_10)), var_16)) + ((var_1 ? (max(511, 65535)) : ((max(0, 0)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(1, ((((!(arr_0 [i_0]))) ? var_1 : var_10))));
        arr_2 [i_0] [1] |= (((var_13 ? (arr_1 [i_0]) : 15)));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 |= 0;
            var_21 = arr_4 [i_1];
            var_22 ^= ((+(max((-6 * 72057593970819072), (((var_5 ? 16777215 : var_14)))))));
        }
        arr_8 [i_1 - 3] [i_1] = (arr_4 [i_1]);
        var_23 = ((~((((72057593970819072 + 2339) && 18374686479738732556)))));
    }
    var_24 &= var_5;
    #pragma endscop
}
