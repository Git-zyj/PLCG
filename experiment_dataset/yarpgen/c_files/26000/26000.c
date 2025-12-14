/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_11 | 7511833042553338475) ? ((min(-2085855969, -1))) : var_6))) ? var_8 : (min(((var_5 ? var_8 : var_2)), ((min(7, 127)))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = ((max((((arr_2 [i_0] [i_0]) >= var_7)), (var_7 || var_6))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (((min(-228590047, ((3 ? var_3 : var_6)))) / var_6));
            arr_7 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_0]);
            var_14 = (min(var_14, ((((((((2085855979 ? 41 : (arr_0 [i_0])))) ? 19 : (var_1 > 85))) <= (var_6 / var_8))))));
            var_15 = (min(((((arr_4 [i_0] [i_1]) && (((var_6 >> (-43 + 87))))))), (((-123 >= -1420135931) - var_3))));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = (min(0, (((arr_8 [i_2]) ^ -1420135936))));
        arr_11 [i_2] [i_2] = var_6;
        arr_12 [i_2] = (arr_9 [i_2]);
        var_16 = ((((((arr_9 [i_2]) ? (arr_8 [i_2]) : (((arr_8 [i_2]) * var_2))))) ? (arr_9 [i_2]) : ((((min(var_8, var_5))) << ((max((arr_8 [i_2]), (arr_9 [i_2]))))))));
        var_17 = (((((arr_9 [i_2]) && (arr_9 [i_2]))) && ((max(var_1, 1)))));
    }
    var_18 = (((((var_7 ? ((min(-40, var_8))) : ((var_4 ? var_1 : var_5))))) ^ (((max(var_1, var_6)) & ((max(2586446358, -21)))))));
    #pragma endscop
}
