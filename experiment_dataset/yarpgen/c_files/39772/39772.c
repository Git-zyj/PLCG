/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_4 ? var_11 : var_2)) ? ((var_13 << (131071 - 131040))) : (((1 >> (-36 + 40))))))));
    var_21 |= ((((((var_14 >= var_15) + ((65535 ? 1 : 0))))) ? (((-16250 >= -25636) | (65531 & -1))) : ((14725 ? (((var_6 + 2147483647) << (((var_6 + 11609) - 21)))) : ((1 ? 65535 : 1))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = ((((((((-54 + 2147483647) >> 21))) ? (((1284450380 ? 32767 : 1))) : 15409475920214000450)) % ((((((1 ? 16 : var_3))) ? 1 : ((194 ? 1 : 61054)))))));
        var_23 = (((((((((arr_2 [i_0]) || (arr_0 [i_0]))))) <= (var_16 % 255))) ? (((var_18 & var_2) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : 17860)) : 229)) : (((((((arr_1 [i_0]) % -1))) && (arr_1 [i_0]))))));
        arr_3 [i_0] = ((((((var_8 ? 65535 : (arr_2 [i_0]))) / (var_9 >= 11))) >> ((((((128 > (arr_1 [4]))) ? ((var_5 ? var_5 : var_15)) : var_11)) + 3))));
    }
    #pragma endscop
}
