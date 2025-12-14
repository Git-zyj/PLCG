/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_11 ? 960200353499354162 : -8133323938582261906)), ((((69 <= 2036158764095447402) ? var_2 : var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (max((((arr_1 [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_1]))), ((18417678627367764766 ? (arr_2 [i_0]) : (arr_3 [i_0])))));
            var_14 = ((-2036158764095447402 <= (((((18417678627367764766 ? (arr_1 [i_0]) : (arr_0 [i_1])))) ? (((26 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1])))) : -2036158764095447389))));
        }
        var_15 -= ((((28083 ? (arr_2 [i_0]) : (arr_2 [i_0]))) | 1));
    }
    var_16 = ((((((((var_2 ? 8877149923899117407 : 28))) ? ((562400197607424 ? 93 : 91)) : var_1))) ? (((((211 && 104) <= var_4)))) : 18417678627367764764));
    #pragma endscop
}
