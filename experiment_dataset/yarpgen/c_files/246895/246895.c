/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(1, 69)))) * ((29532 ? -113 : var_15))))) ? ((min((max(var_4, var_2)), ((min(-2027984418, var_10)))))) : (max((((var_1 ? var_16 : -2027984427))), ((var_3 >> (-2027984428 + 2027984463))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 *= ((((((1 * 1) ? ((1 ? 2027984418 : 2027984427)) : 15))) ? (((1 ? ((max(65530, 16352))) : (65522 || 1073741824)))) : (min((((arr_4 [i_0]) ? (arr_5 [i_2]) : var_13)), ((var_9 ? (arr_6 [4] [i_1]) : (arr_7 [8] [8] [i_2])))))));
                    arr_9 [i_2] [i_1] = ((((((((2027984426 ? var_0 : (arr_3 [11])))) ? (var_8 || 140) : (max(2027984426, (-2147483647 - 1)))))) ? ((((((arr_6 [i_2] [i_0]) ? var_4 : var_17))) ? (((arr_1 [i_2]) ? 2027984426 : (arr_1 [i_0]))) : ((min(2027984411, (arr_4 [i_2])))))) : ((max((max(8176, (arr_0 [i_0]))), ((min((arr_2 [9] [i_1]), var_13))))))));
                    arr_10 [i_0] [i_1] [3] = ((((max(((min(var_7, (arr_7 [i_0] [i_0] [i_0])))), (var_16 % var_12)))) / (min(((var_0 ? -60 : 576460752303423486)), (((1 ? -112 : 1)))))));
                }
            }
        }
    }
    var_20 = ((((min((max(var_6, var_0)), (((65527 ? -23454 : var_5)))))) ? (((((var_2 ? var_3 : var_3))) % (var_0 | 62))) : ((((((var_7 ? var_8 : var_8))) ? (((-1515155141 + 2147483647) >> (var_10 + 198068161))) : ((max(10846, var_4))))))));
    #pragma endscop
}
