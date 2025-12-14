/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = (min(var_20, ((max(((max(var_18, var_11))), 14352726707736468631)))));
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [8] &= (arr_1 [i_0] [8]);
        arr_5 [2] &= ((max(870820800, -32750)));
        arr_6 [i_0] = ((-(arr_3 [i_0] [i_0])));
        var_22 &= arr_2 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_23 = ((((-((var_18 ? var_7 : var_6)))) & (2861203645 <= var_15)));
            var_24 = ((((min((min((arr_3 [i_0] [5]), (arr_9 [i_0] [i_0]))), var_15))) ? var_18 : ((((var_7 < (arr_2 [i_1] [i_1])))))));
            var_25 = (max(var_12, ((((((var_11 ? 4094017365973082969 : (arr_8 [i_0] [i_1] [i_0])))) || (~var_5))))));
            arr_10 [i_0] [3] [i_1] = (((~(arr_1 [i_0] [i_0]))));
        }
    }
    #pragma endscop
}
