/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= min(((-(var_0 & var_7))), 2635148795);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_3 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (min(var_7, ((var_9 ? var_4 : (arr_0 [6] [i_0])))))));
            arr_6 [i_1] &= (arr_3 [i_1] [4]);
            arr_7 [5] [i_0] [i_0] = (min((max(131072, (arr_4 [i_0] [i_0]))), ((((arr_2 [i_1] [i_1] [i_0]) ? (((~(arr_2 [9] [9] [i_0])))) : (((arr_0 [11] [i_0]) ? 4294967295 : (arr_3 [i_0] [i_1]))))))));
            var_18 = (arr_2 [i_0] [i_1] [i_0]);
        }
        var_19 = (((arr_0 [i_0] [i_0]) ? (var_12 > var_8) : ((~(arr_4 [i_0] [i_0])))));
        var_20 = ((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_15)));
        arr_8 [i_0] = ((arr_0 [i_0] [i_0]) - 3169627723);
    }
    #pragma endscop
}
