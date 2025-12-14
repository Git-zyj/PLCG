/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((((max(var_4, var_4)))) ? var_4 : (((62219 - var_8) + 62219)))))));
    var_18 = (((((max(var_7, 32505856)) << ((var_8 ? var_13 : 255)))) < (((-1384298154 + 2147483647) << (((288230376151707648 & 62221) - 61440))))));
    var_19 = (min(((var_6 ? ((var_14 ? -1797473637862515479 : var_13)) : (((min(var_11, var_9)))))), 83));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (62219 ? 1991 : (arr_2 [i_0] [8]));
        arr_3 [i_0] [i_0] = ((-3766378499 >> (248 - 227)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= ((((arr_4 [i_1]) % (arr_4 [i_1]))));
        arr_8 [i_1] &= (max((((((4852203863458951748 ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (arr_4 [i_1]) : (arr_6 [i_1]))), (!3299)));
    }
    #pragma endscop
}
