/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-9089055782101950385 / (((((7463044567980068397 ? 7325136823972732182 : var_4))) ? ((18446744073709551600 ? 4459961546968262733 : 32755)) : (-9223372036854775807 - 1)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 *= (min(((max(var_11, (((10867 * (arr_0 [i_0 + 3]))))))), ((((((arr_1 [i_0] [15]) ? (arr_1 [i_0] [i_0]) : 1))) ? (((max(1, 110)))) : -130560))));
        var_15 = ((arr_1 [i_0 + 4] [i_0]) / (((((arr_1 [i_0] [i_0]) ? -4928875483269976029 : var_9)) / -1)));
        var_16 = ((((((arr_0 [i_0 + 4]) ? 19600 : 6888869426182693979))) && ((((arr_1 [i_0 + 2] [i_0]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : 1)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = -7234;
        arr_5 [i_1] = (-(((var_10 || 1) ? (arr_3 [i_1]) : (((min(1, 1)))))));
        var_18 |= (((((((min(var_10, -1))) ? 18446744073709551603 : ((8617466958208392891 ? var_11 : (arr_4 [10] [10])))))) ? (min(18446744073709551599, -5320440881553571708)) : (((arr_4 [i_1] [1]) ? (arr_4 [i_1] [2]) : 24576))));
    }
    var_19 = (max((148 || 104), var_8));
    var_20 = min(((((((var_12 ? var_3 : 0))) ? var_2 : -29974))), var_3);
    var_21 -= var_11;
    #pragma endscop
}
