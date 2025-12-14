/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(var_17, (13082713884496589670 || 32754))))) < ((((max(955523559, var_17))) ? (((min(var_6, var_8)))) : (var_6 & var_11)))));
    var_21 = ((var_17 ? var_17 : (((var_4 >= 610048916) ? var_17 : (!var_16)))));
    var_22 = (((((((17706289876030274470 ? var_3 : 44524))) ? var_10 : (21011 * 17706289876030274470))) * (var_6 & var_4)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = (min(var_23, (((2401795364 == 21003) & 1))));
        var_24 = (max((((arr_1 [i_0]) ? var_15 : (arr_1 [i_0]))), ((~(~21004)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_25 -= (min(-675370500, (-675370500 >= 21011)));
        var_26 = (arr_3 [i_1] [i_1]);
        var_27 = (min((-9223372036854775807 - 1), 4606710840264745195));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_28 = (((((var_14 / (arr_4 [i_2])))) ? (((arr_4 [i_2]) ? 0 : (arr_4 [i_2]))) : (((arr_4 [i_2]) >> (12555 - 12535)))));
        var_29 = ((((min((arr_4 [i_2]), 0))) || ((((arr_4 [i_2]) ? (arr_4 [i_2]) : (arr_4 [i_2]))))));
    }
    var_30 = (((((21005 | 1) ? 11289940154851864985 : (((-6772539918072245921 ? 1 : 20988))))) | (((~((max(75, var_17))))))));
    #pragma endscop
}
