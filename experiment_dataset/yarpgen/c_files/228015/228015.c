/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-1010356473 / 1010356464) >= (((arr_0 [i_0]) ? 25 : 3176256007))));
        arr_3 [i_0] [i_0] = (((((229 & -17685) ? -31115 : (var_12 & 141729355))) != ((((arr_0 [i_0]) ? 25 : (arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((((((arr_1 [8] [8]) <= (arr_1 [i_0] [i_0])))) & ((((arr_1 [i_0] [i_0]) && var_10)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((790238589 || 253) || ((((arr_5 [i_1]) ? var_2 : var_1)))));
        arr_8 [i_1] [i_1] = (((-31115 / -31102) - ((var_6 ? (arr_6 [i_1]) : var_2))));
        arr_9 [i_1] = (((0 & 230) ? ((17536 ? (arr_5 [i_1]) : var_0)) : (2013945001 != 19)));
        arr_10 [i_1] = (((((arr_5 [i_1]) || var_8)) || (var_3 || var_12)));
    }
    var_16 = var_1;

    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        arr_13 [16] [16] = (((-47 >= var_12) ? ((-14942 ? var_12 : (-32767 - 1))) : (var_5 >= -31115)));
        arr_14 [i_2] [i_2] = (((((arr_12 [i_2 - 4] [i_2]) | (arr_11 [i_2 - 2] [i_2]))) <= (2898287047 - 1)));
        arr_15 [i_2] = ((((var_5 ? 26 : (arr_11 [19] [i_2]))) + (((arr_11 [i_2 - 2] [i_2]) | var_8))));
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_18 [7] = ((511 - var_13) << ((((var_13 ? 18338298269885940708 : (arr_16 [i_3 - 1]))) - 814972815247056808)));
        arr_19 [11] = (((var_5 != var_14) + (0 > var_15)));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] &= (((((arr_21 [i_4 + 1] [i_4 - 1]) | (arr_21 [i_4] [i_4]))) >= (((var_2 + 2147483647) >> (((((arr_11 [i_4] [i_4]) | 596743935)) - 8154172840511641334))))));
        arr_23 [7] = ((((0 | (arr_11 [i_4 + 1] [i_4]))) + (((18446744073709551615 ? var_4 : var_0)))));
        arr_24 [i_4] [i_4] = (((4410 >= 5) ? (((arr_12 [i_4 + 1] [i_4]) - var_9)) : (((var_8 || (arr_12 [i_4 - 2] [i_4]))))));
    }
    #pragma endscop
}
