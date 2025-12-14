/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((86404294 ? 4208563002 : 4923395705167947770));
        var_13 &= (((((+((min((arr_0 [i_0]), (arr_1 [0]))))))) ? (min(var_3, 4923395705167947770)) : (arr_2 [6])));
        var_14 = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) + (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = ((((((!86404294) ? (((min((-127 - 1), (arr_4 [i_1]))))) : (min(4208563009, (arr_3 [i_1] [i_1])))))) ? (max(((((arr_4 [i_1]) && -1))), (arr_4 [i_1]))) : (!0)));
        var_16 += (max(((((4208563009 < (arr_3 [i_1] [i_1]))) ? (var_10 && 86404287) : (arr_3 [i_1] [i_1]))), (arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = ((((((arr_4 [i_2]) - (arr_6 [i_2])))) ? var_0 : (((arr_3 [i_2] [i_2]) ? (arr_3 [3] [i_2]) : var_1))));
        var_18 = ((((((arr_3 [i_2] [i_2]) && 52817))) * (((!(arr_6 [i_2]))))));
        var_19 += (arr_4 [i_2]);
    }
    var_20 = (max(var_20, (((max((var_8 || var_3), (!12718)))))));
    var_21 = var_3;
    #pragma endscop
}
