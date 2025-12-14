/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, 63));
    var_16 = ((((min((!477), ((var_7 ? -7459065843343820016 : 3801634662))))) ? (((min(var_0, var_2)))) : (((((var_6 >> (63353 - 63315)))) ? var_13 : (min(var_6, var_10))))));
    var_17 = (min(var_12, (((min(var_6, var_9)) / (((4294967291 ? 5 : 12061)))))));
    var_18 = (((((1719875085 != var_6) ? ((var_2 ? var_6 : var_3)) : (var_10 & 477)))) ? (((((5 ? var_13 : var_12))) / ((var_5 ? 32767 : 0)))) : ((((1 >= (var_1 | var_9))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((+((~((var_12 ? (arr_0 [i_0]) : (arr_2 [i_0])))))));
        arr_4 [i_0] = (((((arr_1 [i_0]) ? var_6 : (arr_1 [i_0])))) ? ((var_7 ? (arr_0 [i_0]) : 5)) : 5);
        arr_5 [i_0] = 3827634328;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = ((~(((arr_6 [i_1]) ? (arr_6 [i_1]) : var_11))));
        var_20 += ((((~(arr_6 [i_1]))) > (!var_10)));
    }
    #pragma endscop
}
