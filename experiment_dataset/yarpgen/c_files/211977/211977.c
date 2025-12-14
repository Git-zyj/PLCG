/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((3008 > ((max((var_4 == 1526815311), 2998)))));
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = var_11;
        var_17 &= (max((~3016), ((max(1, (arr_0 [i_0] [i_0]))))));
        var_18 *= (min(10110598740361340434, (max(((((arr_0 [i_0] [i_0]) > 63))), var_6))));
        var_19 &= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 ^= -7185;
        arr_4 [i_1] = ((((((3008 - var_1) % (arr_3 [i_1])))) >= var_8));
        var_21 = var_5;
        var_22 &= (((1 + 8186127714162408388) && ((((max((arr_2 [11] [i_1]), 7015657466851410453)) / (var_13 / var_5))))));
        var_23 &= ((~(var_11 ^ 11568)));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_24 -= 10157;
            arr_9 [10] |= (max((+-66), (((var_12 / (arr_7 [0]))))));
            arr_10 [i_2] [i_3] [i_2] = (((arr_0 [0] [i_3]) << 5));
        }
        arr_11 [i_2] [1] = ((~((min(449515288, 7472)))));
    }
    var_25 = var_1;
    var_26 = (var_6 >= var_10);
    #pragma endscop
}
