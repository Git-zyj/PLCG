/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = 8426131965992000017;
        var_12 = (max(var_12, (((-(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 -= ((arr_1 [i_1]) ? (((-(arr_1 [i_1])))) : (min(var_5, var_6)));
        var_14 = ((var_4 ? (~var_7) : (((-1 ? (arr_3 [i_1]) : (arr_3 [i_1]))))));
    }
    var_15 = (~var_1);
    var_16 &= ((var_7 ? var_0 : (3337556990 >= var_9)));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = (arr_7 [i_2]);
        var_17 &= ((10020612107717551599 && (arr_2 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = ((-(arr_1 [i_3 + 1])));
        var_18 = (((arr_10 [i_3 - 1]) ? (arr_0 [i_3 + 1] [i_3 - 1]) : var_0));
        var_19 ^= (((32 ? 4398046445568 : 4187859861748129455)) ^ ((((arr_1 [16]) % 17072))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_20 = (arr_7 [i_4]);
            var_21 |= 10189327070081537442;
            var_22 = 14258884211961422160;
            arr_17 [9] = (arr_16 [i_4] [i_5]);
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_23 ^= 32640;
            var_24 = (((arr_6 [i_4 + 1]) || (((48463 ? (arr_9 [i_4]) : (arr_1 [20]))))));
            arr_20 [i_6] [i_4 - 4] |= ((var_1 || (arr_7 [i_4 + 2])));
        }
        var_25 = (((arr_3 [i_4]) - var_1));
        var_26 = ((((arr_11 [2]) ? (arr_2 [i_4] [i_4]) : var_3)) & 12892);
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        var_27 |= var_8;
        var_28 = ((-32641 ? 8426131965992000017 : (min(((10312568362371174461 ? 1757398771288311389 : var_2)), 805306368))));
        var_29 *= ((var_6 ? var_4 : (((-((-(arr_22 [16]))))))));
        arr_23 [i_7] = ((-(((min((arr_22 [i_7]), var_9))))));
    }
    #pragma endscop
}
