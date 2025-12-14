/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_5, (~8849164481180934066)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = ((max((arr_1 [i_0 + 4] [i_0]), -1760916498)));
        arr_2 [i_0] = (8849164481180934066 && -120);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        arr_6 [11] = -1760916513;
        var_22 = 241;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [13] [i_2] = (arr_0 [i_2]);
        arr_10 [i_2] = ((-(((((-(arr_1 [14] [i_2])))) ? (arr_8 [i_2] [i_2]) : (var_17 == var_5)))));
        var_23 ^= var_13;
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] = (((((+(max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3])))))) ? (arr_11 [i_3] [i_3]) : (~0)));
        var_24 = (max(var_24, ((((((+((((arr_11 [8] [i_3 + 1]) > var_9)))))) + (min((((-1760916504 ? 1760916497 : -120))), (max((arr_13 [i_3 - 1] [i_3]), (arr_11 [2] [2]))))))))));
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_25 -= ((((arr_4 [i_4 - 1]) + 9223372036854775807)) >> (-1903428321 + 1903428366));
        var_26 &= ((((arr_15 [i_4 - 2]) < var_0)));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] &= (max(128, ((-(arr_3 [i_5])))));
        arr_20 [i_5] = (min(9597579592528617561, (arr_8 [i_5] [i_5])));
    }
    var_27 = (min((((max(var_8, var_18)) % -var_3)), (max((max(-1903428310, 8849164481180934066)), var_14))));
    #pragma endscop
}
