/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? (var_15 >= -var_10) : (((var_14 & -727776744985878740) ? (min(var_0, var_15)) : -var_15))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((!((((arr_3 [i_0]) & (arr_1 [i_0]))))));
        var_19 = ((var_17 + ((((var_11 < (var_3 || 0)))))));
        var_20 = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1 + 2] [i_1] = arr_6 [i_1];
        var_21 = (arr_5 [i_1 + 1] [i_1 + 1]);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = (arr_5 [10] [i_4 - 1]);
                    arr_15 [i_2] [4] [i_4 + 1] [i_4] = ((((((arr_12 [3] [i_3] [i_4 - 2]) ? (arr_8 [i_3]) : ((min((arr_10 [i_2] [0]), (arr_13 [i_2] [0] [0] [i_4 - 1]))))))) ? (((((var_4 ? var_6 : (arr_11 [i_2] [i_3 + 1] [13])))) ? (((arr_8 [i_2]) ? (arr_11 [i_2] [i_3] [1]) : 1367910614)) : (arr_5 [i_3] [i_3]))) : ((-(max((arr_11 [i_2] [i_3 + 2] [0]), (arr_13 [i_2] [i_3 + 1] [i_3 + 3] [i_4])))))));
                    var_23 = (arr_5 [i_2] [i_2]);
                }
            }
        }
        var_24 = ((((max(15792366521705332208, ((((arr_9 [i_2] [12]) || (arr_9 [i_2] [i_2]))))))) ? (arr_13 [i_2] [i_2] [1] [i_2]) : ((-(arr_11 [11] [i_2] [i_2])))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_25 = (arr_17 [i_5]);
        arr_18 [i_5] = -1367910627;
        var_26 = (((((arr_17 [i_5]) ? 7425529976437070698 : (arr_17 [i_5]))) >> (((((arr_6 [i_5]) ^ ((4058833367 ? var_0 : (arr_16 [i_5]))))) - 24413))));
        var_27 = ((((-((15792366521705332208 ? (arr_16 [5]) : (arr_17 [i_5])))))) ? (arr_16 [i_5]) : var_16);
        var_28 = (min(((min(1, var_13))), (min((arr_16 [i_5]), (((arr_17 [i_5]) ? var_16 : var_17))))));
    }
    #pragma endscop
}
