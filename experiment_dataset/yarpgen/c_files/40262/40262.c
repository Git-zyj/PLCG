/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? (min(var_7, ((var_9 ? -189285773620910162 : 18446744073709551608)))) : var_2));
    var_12 += ((((-(1 <= 1)))) ? (((1 & var_10) ? var_10 : var_8)) : (((981014644 ? var_4 : 4176))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(((var_7 & (((min(1, var_8)))))), (arr_1 [0])));
        arr_5 [i_0] [i_0] = (((!1) ? -965253505 : (((var_9 != ((var_8 ? (arr_0 [i_0] [i_0 + 2]) : 1)))))));
        var_13 -= (((arr_0 [i_0] [i_0 + 1]) <= var_5));
        arr_6 [i_0] = ((((~(var_7 ^ 1)))) ? ((((min(var_1, (arr_1 [i_0 + 2])))) ? (((!(arr_0 [i_0] [i_0])))) : (((arr_3 [i_0]) % var_2)))) : ((-(min((arr_3 [i_0]), var_1)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (max(var_14, (((+((max(1, (((arr_8 [i_1]) != (arr_8 [i_1])))))))))));
        arr_9 [i_1] = arr_8 [i_1];
        var_15 = (((arr_7 [i_1] [i_1]) ? ((max((min(var_1, -1901146879)), (arr_8 [i_1])))) : (max(((min((arr_8 [20]), var_9))), 1649507390753107071))));
    }
    #pragma endscop
}
