/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_6, var_18));
    var_21 = (((((var_7 & ((4294967280 ? 4294967295 : var_16))))) ? (((max(var_13, var_19)))) : var_8));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 += (max(0, 2490));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = ((!(-127 - 1)));
            arr_9 [i_0] = (1 << ((((-(var_9 ^ var_14))) + 1668)));
            arr_10 [i_0] = (max((max(var_11, (min(var_16, var_14)))), ((((arr_5 [i_0] [i_1]) != ((var_19 ? (arr_5 [i_0] [16]) : 4294967266)))))));
            arr_11 [i_0] [6] [i_0] = (((max(((125 ^ (arr_7 [i_0] [i_0] [i_0]))), (((arr_6 [i_0] [i_0]) & (arr_7 [i_0 - 1] [i_0 - 1] [i_0]))))) | (((((~(arr_2 [i_1])))) ? (~var_14) : ((min((arr_7 [i_0] [i_0] [i_0]), var_0)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_15 [i_0] = ((((max(-23236, 1))) | -var_5));
            var_23 ^= ((((((1 ? var_7 : (arr_14 [i_2])))) ? (((var_18 ? (arr_5 [1] [1]) : var_5))) : ((-95 ? (arr_3 [0]) : (arr_14 [i_0]))))) != (~var_7));
            arr_16 [i_0] = ((((min(4294967266, (var_9 <= var_18)))) ? (arr_2 [i_0 - 1]) : (arr_5 [i_0] [i_0])));
        }
    }
    #pragma endscop
}
