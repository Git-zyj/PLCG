/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((1898014444 ? (max(1898014444, 79)) : -1898014444)), var_9));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 ^= (min((((arr_1 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0]) << (((arr_0 [i_0]) - 2100494827990344638)))) - 4263651159434523631)))), (arr_0 [5])));
        var_21 = (max(var_21, (((((((((-(arr_0 [i_0])))) ? (((((arr_0 [19]) < var_17)))) : (min(6472582869226630940, 8))))) ? ((((-(arr_0 [i_0]))))) : (min((min(var_2, (arr_1 [i_0] [i_0]))), ((min((arr_0 [i_0]), 127))))))))));
        var_22 += (min(((min((var_12 > 4294967287), ((4294967292 != (arr_1 [i_0] [1])))))), (((arr_1 [i_0] [0]) ? (arr_1 [i_0] [i_0]) : 1898014446))));
        var_23 = (min(var_23, ((((((arr_0 [i_0]) << ((((4092 ? (arr_0 [11]) : 1812405722668037308)) - 2100494827990344646)))) != ((((!(((var_2 ? var_14 : var_3))))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (((!8190) ^ (max((arr_0 [i_1]), (((var_5 ? (arr_3 [i_1] [i_1]) : var_9)))))));
        var_24 *= max((((-((min((arr_3 [i_1] [4]), (arr_3 [i_1] [i_1]))))))), var_1);
        arr_5 [i_1] [3] = ((var_2 ? (min(var_2, (arr_1 [7] [i_1]))) : (((arr_1 [5] [5]) % (arr_3 [i_1] [i_1])))));
        arr_6 [i_1] = (arr_1 [3] [i_1]);
    }
    #pragma endscop
}
