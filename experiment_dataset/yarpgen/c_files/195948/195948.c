/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((min(1, 32041))), var_5);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((max(-32043, 32054)))) ^ (max((max(-1759155176, 18446744073709551592)), -21290)))))));
        var_20 = (min(var_20, (((((min(1740636319, (arr_0 [i_0])))) ? 7 : (((max(-32056, -471794999)) & -32041)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (max((((432932834786288499 ? -72556095 : -126))), ((10 + ((min(227, (arr_3 [i_1] [i_1]))))))));
        var_22 = (min((min(((((arr_2 [i_1]) ? (arr_2 [i_1]) : -384604289))), ((32060 ? 1740636302 : (arr_2 [i_1]))))), 18));
        var_23 = (min((max((arr_2 [i_1]), (arr_3 [i_1] [i_1]))), 534773760));
    }
    var_24 = (((max(-7396311387351345647, (((18446744073709551604 ? 16383 : 255))))) != (((min(((max(-112, 8))), (max(3, var_6))))))));
    var_25 = (max(var_25, (((((max(((max(4294967295, 234))), (var_11 / 18747)))) ? ((((min(17451490126030926372, 7396311387351345646))) ? ((var_16 ? var_6 : var_7)) : (((4199 ? -7396311387351345666 : 106))))) : (((15 ? 3 : 32042))))))));
    var_26 = (max(var_26, (12 / 2510)));
    #pragma endscop
}
