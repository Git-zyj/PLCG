/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((min(255, var_0)) + (max(-5066570088446430113, var_2)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, (((((max(var_11, (arr_1 [12])))) ? (min(((255 ? 2305842940494217216 : 2305842940494217228)), ((231 ? -9140902793039751561 : var_5)))) : (((-(arr_1 [10])))))))));
        var_21 = (arr_1 [i_0]);
        var_22 = min((((1700926626836216002 != (min(1700926626836216002, var_6))))), ((((arr_0 [i_0] [8]) ? (arr_0 [i_0] [4]) : var_8))));
        var_23 = min((arr_1 [i_0]), -0);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (~var_15);
        var_24 = (max(var_24, ((((2046971120834559958 != 243) && ((min(var_2, 51539607552))))))));
        var_25 = (((!var_10) ? (min((var_0 | var_0), var_15)) : (arr_3 [i_1])));
        var_26 = (min((((arr_5 [i_1]) + var_13)), (arr_5 [i_1])));
        arr_7 [i_1] [i_1] = 4767290922615767878;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_27 = (min(var_27, ((min(((-(arr_0 [9] [i_2]))), (arr_0 [i_2] [8]))))));
        var_28 ^= (~(min(((var_2 ? 0 : (arr_8 [i_2]))), (((-(arr_1 [4])))))));
        var_29 |= ((~(~var_13)));
    }
    var_30 *= ((var_1 ? (max(var_17, -230)) : (((min(var_14, (var_7 != 6)))))));
    var_31 = (max(var_31, (((((-1 ? 6 : 255)) << ((((~((var_13 ? var_16 : var_16)))) - 4020217309045524990)))))));
    var_32 = var_8;
    #pragma endscop
}
