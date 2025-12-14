/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (min((((-var_14 & (!var_8)))), (((var_15 | var_3) / ((var_4 ? var_1 : var_13))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_14 == ((max(var_14, var_12))))) ? (var_11 <= 1059118724) : -var_6));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0 - 1] = var_9;
            var_17 = var_9;
            arr_7 [i_1] [i_1] [i_1] = var_12;
            var_18 = var_7;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_19 = (((max(((var_8 ? var_5 : var_6)), (var_9 ^ var_2))) << (var_15 - 217)));
            arr_11 [i_2] [i_2 - 2] = var_9;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 = var_14;
            var_21 = var_6;
            arr_15 [i_3] [i_3] |= var_14;
            var_22 = ((((((((var_12 ? var_4 : var_15))) && (var_9 > var_14)))) != (1059118724 <= -1059118725)));
            arr_16 [i_0 - 2] [i_3] [i_3] = var_14;
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_23 = var_9;
        var_24 = (var_14 >= var_15);
        var_25 += (394324759 < -1059118721);
        var_26 = var_0;
        var_27 = (min(var_27, var_9));
    }
    #pragma endscop
}
