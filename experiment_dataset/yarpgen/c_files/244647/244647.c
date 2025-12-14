/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 13876;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [17] = min((((-13876 ^ (~-13888)))), (min(4294967295, (arr_1 [i_0 + 2]))));
        var_18 -= ((((max((arr_0 [i_0]), 7))) ? (arr_0 [i_0]) : (min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 4])))));
        arr_3 [i_0] = (min((max(((min((arr_1 [i_0]), var_2))), 12213830334301769206)), ((((min(var_11, (arr_1 [i_0]))) ^ ((min(-1351556871, -13897))))))));
        var_19 |= (arr_0 [i_0 + 4]);
    }
    var_20 = (((var_12 / var_14) * var_5));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [8] = ((~(((((var_11 ? 650950801 : (arr_6 [i_1]))) >= 13876)))));
        arr_9 [5] = (((arr_6 [i_1]) * (min(var_1, (((1966008906 >= (arr_7 [i_1]))))))));
        arr_10 [i_1] [i_1] = (max((max((arr_6 [i_1]), ((~(arr_6 [i_1]))))), ((-13899 - (arr_1 [i_1])))));
        arr_11 [i_1] = ((var_10 ? (max((min(1945606265, (arr_1 [i_1]))), (arr_0 [15]))) : (arr_7 [i_1])));
        arr_12 [i_1] [2] = (arr_0 [18]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = 13877;
        arr_17 [i_2] = ((~((~(arr_15 [i_2] [1])))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 -= (max((((max(81706957, -13877)) * (2227 <= 0))), (arr_0 [i_2])));
            arr_20 [i_2] = var_14;
            arr_21 [i_2] [i_2] [i_3] = (arr_14 [i_2]);
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_25 [i_4] = 77295285;
        var_22 = (min((max((arr_0 [i_4 - 1]), (1015808 > 1724864237))), (min((!97), (32654 | 131)))));
        arr_26 [i_4] = ((((~(arr_1 [i_4]))) << (((((min((arr_23 [i_4 + 2] [i_4 - 1]), (arr_15 [i_4 + 2] [i_4 - 1]))) + 17070)) - 24))));
    }
    var_23 ^= (((((((max(var_5, -16799)) <= var_7)))) == (((var_13 - 32651) - var_13))));
    #pragma endscop
}
