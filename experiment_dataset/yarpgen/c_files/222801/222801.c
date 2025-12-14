/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (max(var_17, var_4));
        var_18 &= ((77 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_19 = (((((-7614654838282456831 && 18446744073709551615) ? (max(18446744073709551610, 1054010605555140037)) : ((var_8 ? var_12 : var_9)))) - 25));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = ((!(((9757320449886990622 <= var_3) || (((9757320449886990622 % (arr_3 [i_1] [i_1]))))))));
        arr_5 [i_1] = (max((!17), ((1054010605555140037 ? 153 : -5102114209896609961))));
        var_21 = (max((var_11 - 0), (((var_4 ? (arr_0 [i_1]) : (arr_4 [i_1]))))));
    }
    var_22 = 5827804882578083510;
    #pragma endscop
}
