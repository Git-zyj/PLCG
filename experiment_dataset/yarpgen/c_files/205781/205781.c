/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((((var_11 ? (arr_2 [i_0]) : var_11))) ? ((694877807 ? -23409 : -9703)) : ((48595 ? ((var_15 ? -694877814 : (arr_1 [i_0]))) : var_5))));
        var_18 = ((((((arr_1 [i_0]) ? 53034 : var_11))) ? ((667760240 ? 11808285639300973311 : 1)) : ((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_1)))));
        var_19 = (max(var_19, (((15502 ? -1208411575 : ((7125556472261296662 ? 667760240 : 707690682)))))));
        arr_3 [i_0] [i_0] = (((((48595 ? var_16 : var_14))) ? (((arr_0 [i_0]) ? var_4 : 785032242)) : (((33107 ? 58 : 32265)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_6));
        var_21 &= ((var_1 ? (arr_4 [i_1]) : var_8));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((((var_7 ? var_11 : ((-290749521 ? (arr_5 [i_2]) : 0))))) ? (((((((arr_6 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))) ? (((arr_6 [i_2] [i_2]) ? var_12 : var_4)) : var_0))) : (((arr_5 [i_2]) ? (arr_7 [i_2] [i_2]) : ((((arr_4 [i_2]) ? var_1 : -694877807))))))))));
        var_23 = (((((var_1 ? 1894807913 : -3))) ? ((((((-7 ? var_13 : var_0))) ? ((-55 ? -6864762733278318092 : 1)) : 679793129))) : ((var_6 ? var_10 : var_4))));
        var_24 = (((((1894807913 ? ((var_7 ? (arr_8 [i_2]) : (arr_8 [i_2]))) : var_12))) ? ((43311 ? ((var_2 ? var_10 : (arr_6 [i_2] [i_2]))) : 15882)) : (((-7156006845775677820 ? 1350773636 : 3)))));
        var_25 = (((((251 ? (((-667760241 ? -3 : -110))) : ((-10800 ? 7156006845775677809 : 3070))))) ? ((20929 ? var_12 : 16294812574406565003)) : ((((((var_9 ? var_3 : 1156918942))) ? (arr_7 [i_2] [i_2]) : (((var_16 ? var_5 : var_9))))))));
        var_26 = (min(var_26, ((((((3786 ? var_8 : (arr_4 [i_2])))) ? (((((var_10 ? 136 : (arr_5 [i_2])))) ? 26162 : ((var_4 ? (arr_5 [i_2]) : (arr_8 [i_2]))))) : (((((((arr_7 [i_2] [i_2]) ? 14109 : var_4))) ? ((28704 ? var_5 : (arr_8 [i_2]))) : var_3))))))));
    }
    var_27 = ((-2182 ? 876568888 : -876568888));
    #pragma endscop
}
