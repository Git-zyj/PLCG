/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (~-9223372036854775795);
        var_11 ^= (max(((-9223372036854775795 ? -9223372036854775795 : 1)), (((var_0 ? 31 : 227)))));
        arr_3 [i_0] = (((((((((arr_1 [i_0]) ? var_7 : (arr_0 [i_0])))) ? var_7 : (~var_8)))) ? (((+((max((arr_1 [i_0]), (arr_1 [i_0]))))))) : (max(9223372036854775795, (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_12 = ((-(min(-531355817, (arr_0 [0])))));
        var_13 = (max(var_13, ((min(((max(var_0, (arr_4 [i_1 - 2] [i_1 - 1])))), ((-531355795 ? 0 : 14336)))))));
        arr_6 [i_1] = ((((max(((var_6 ? 1 : 3716)), (((arr_4 [i_1] [i_1 + 1]) ? 15 : var_8))))) ? (max(((max(240, var_0))), (~-410863355))) : (((arr_5 [i_1 - 3] [i_1 + 1]) ? 531355800 : 0))));
        var_14 -= ((~((((max(0, (arr_0 [6])))) ? (((min(0, 63)))) : (min(12177798288007092317, (arr_0 [18])))))));
        arr_7 [i_1] = (((((~(arr_1 [12])))) ? (min((((-9223372036854775795 ? 56212 : 15))), -486895814)) : ((((~25733) ? (~-118) : (~var_10))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((~(min((max(531355800, 0)), (arr_4 [i_2] [i_2])))));
        var_15 = (max(var_15, ((max((max(((-531355803 ? (arr_0 [i_2]) : var_7)), ((~(arr_5 [4] [i_2]))))), ((max(var_7, 1))))))));
        var_16 = (max(var_16, (((~(max((arr_8 [i_2]), -7)))))));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_13 [11] = ((((!((max(3, 18446744073709551615))))) ? (min((((arr_1 [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3]))), 4095)) : (~9323)));
        arr_14 [i_3] = (max(((min(144115188075724800, 1))), 5676651890437140882));
    }
    var_17 = (max(((~(min(1, -3316067625622810241)))), (((((var_7 ? var_9 : 255))) ? var_7 : (min(-9223372036854775795, var_3))))));
    var_18 = var_9;
    var_19 = (max(var_1, (min(((var_10 ? var_0 : -106)), ((min(1, var_7)))))));
    #pragma endscop
}
