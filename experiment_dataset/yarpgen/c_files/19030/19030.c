/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    var_19 = (max(var_19, ((min(((var_15 ? (((12121 ? 1 : -14380))) : ((2139095040 ? var_8 : var_2)))), var_4)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-24 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? (max(var_16, (arr_1 [i_0 - 1] [i_0]))) : (arr_0 [i_0 - 1])));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_20 = (arr_5 [i_1] [i_0] [4]);
            arr_6 [i_0] [i_1] [i_1] = (((((((-6048 >= (arr_0 [i_1])))))) ? ((14375 ? 14379 : 1431295706)) : (((19345 - var_0) ? (arr_5 [5] [i_0] [i_0]) : ((-(arr_4 [i_0] [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = 14379;
            arr_10 [i_0] = ((233 ? -8 : 31));
            arr_11 [i_0] = (max((((((var_13 ? var_2 : (arr_0 [i_2])))) ? (((18446744073709551615 == (arr_4 [i_0 - 1] [i_2] [i_2])))) : var_4)), 6048));
            arr_12 [i_0] [i_0] = (arr_8 [i_0 - 1]);
            arr_13 [i_0] [i_0] = ((-(((arr_4 [i_0 - 1] [i_0] [i_0]) ? (arr_8 [i_0 - 1]) : var_5))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 |= var_3;
            arr_16 [i_3] [i_3] [i_3] |= ((0 ? ((((arr_1 [i_0] [i_3]) ? (arr_7 [14] [i_3] [i_0 - 1]) : ((var_2 ? 0 : (arr_4 [i_0] [i_0] [i_0])))))) : ((-6048 ? ((-38 ? 7 : 6022)) : (((arr_5 [i_0 - 1] [i_0] [i_0]) ? 105553116266496 : 2383349051))))));
        }
        var_22 = (max(var_22, (((4961376618826510286 ? 1 : 255)))));
        var_23 -= (((((((max(1, (arr_8 [i_0])))) << 0))) || (((-(-12121 - 0))))));
        var_24 = -21;
    }
    #pragma endscop
}
