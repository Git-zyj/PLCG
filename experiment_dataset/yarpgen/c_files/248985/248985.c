/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_2 > ((var_7 ? (max(7322769074731957310, 7322769074731957316)) : ((10177449557583267500 ? 7322769074731957310 : 6005375315398048311)))))))));
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((var_7 ? ((((arr_0 [i_0]) <= (arr_2 [i_0])))) : (!var_6))));
        var_18 = (((min(7222310350385796527, (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_2)))) / (((-((var_15 ? var_9 : var_12)))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_13 ? ((var_8 ^ (arr_0 [i_1])) : (arr_0 [i_1]))));
        arr_9 [6] |= 7322769074731957310;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = ((-((max(((var_6 <= (arr_10 [i_2]))), -99)))));
        var_20 = (((arr_10 [i_2]) ? ((396640964897859341 ? (max((arr_11 [i_2]), var_8)) : (arr_1 [i_2]))) : (((~((11718542387168415983 ? 7222310350385796542 : -2147483640)))))));
        var_21 = (((((var_9 ? (arr_2 [i_2]) : 1))) / ((max((arr_6 [i_2]), (((arr_11 [i_2]) | 153)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (!2147483636);
        var_22 = (min(var_22, 8280679459867968997));
    }
    #pragma endscop
}
