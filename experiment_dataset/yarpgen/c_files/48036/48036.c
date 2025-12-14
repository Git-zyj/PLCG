/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? ((var_2 << (-var_0 + 105))) : (((var_0 ? -var_1 : 32737)))));
    var_13 = (((((-(var_10 == -3137707601753787754)))) <= 18446744073709551615));
    var_14 = (max(((var_0 ? (-9223372036854775807 - 1) : 16669755861412235371)), (((var_5 ? var_0 : (((-9223372036854775807 - 1) % (-9223372036854775807 - 1))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((max(var_0, 16))) ? ((245 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((18 ? 33292288 : (arr_1 [i_0]))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = ((-6548607905471782529 || ((((((33292288 ? 1 : 1125895611875328))) ? 6726403694398926848 : 1776988212297316234)))));
            arr_5 [i_0] [4] = ((((!(arr_1 [i_1 - 2]))) ? ((((13956050510495909217 == (arr_3 [i_1 - 1] [i_1 + 1]))))) : (max(3001828647, 2094682422))));
        }
    }
    #pragma endscop
}
