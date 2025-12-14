/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 -= ((((var_5 & ((var_9 ? var_6 : -1)))) << (var_0 && var_11)));
        var_14 -= (arr_2 [2]);
    }
    var_15 = (max(1, ((7872 ? (~255) : ((25 ? var_9 : -124))))));
    var_16 = var_3;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = (0 > 5126709956504022200);
        var_18 = (max(var_18, (max((((255 == (arr_3 [i_1])))), 255))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_1] = arr_8 [i_1] [i_1] [i_2];
            var_19 = (((arr_7 [i_1]) || (arr_7 [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_20 = (arr_5 [17]);
            var_21 = (max(var_21, 13614121033199601561));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_22 = 255;
            var_23 &= var_9;
        }
        arr_14 [i_1] = (max(-8, (max((((arr_8 [i_1] [i_1] [i_1]) ? (arr_12 [i_1]) : (arr_10 [i_1] [i_1] [i_1]))), 4832623040509950080))));
        arr_15 [i_1] [i_1] = (max(var_12, var_9));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_24 -= ((((32767 ? 26979 : -688072511952228368)) <= (((var_11 ? (min(463637688, 247)) : (((min(var_0, var_8)))))))));
        var_25 = (min(var_25, ((min((arr_7 [20]), ((((arr_7 [i_5]) > (arr_7 [i_5])))))))));
    }
    var_26 ^= var_9;
    #pragma endscop
}
