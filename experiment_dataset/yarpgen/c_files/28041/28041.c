/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] &= var_1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [19] [i_1] = (((((-(arr_6 [i_0] [3])))) ? 1 : ((123 ? (arr_6 [i_0 - 1] [i_0]) : 0))));
            arr_8 [i_0 + 2] [i_1] [i_0 + 2] = (((arr_2 [i_0 + 1]) ? var_0 : (arr_2 [i_0 + 2])));
            arr_9 [i_0 + 1] [i_1] = ((arr_2 [i_0 + 2]) || (arr_3 [i_1] [i_0 + 2]));
        }
        arr_10 [i_0] [i_0 + 2] = (((((-var_11 ? (var_8 > 10772405480240013520) : (var_6 != var_4)))) ? (arr_6 [i_0 + 2] [i_0]) : ((((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : var_6)) ^ ((1 ? -26747 : 99)))))));
        arr_11 [i_0 + 2] [i_0] = ((~(~-1)));
        arr_12 [i_0] = ((-((min(2147483647, 0)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = (((0 ? 1 : 4294967295)));
        arr_17 [i_2] [i_2] = ((22006035 >> (17471 - 17420)));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_20 [i_3] [i_3] = (var_0 ? (((((!(arr_19 [i_3]))) || ((!(arr_6 [5] [i_3])))))) : ((~(var_4 < 0))));
        arr_21 [i_3] = (((((-(arr_5 [1] [13])))) ? (arr_1 [i_3]) : ((-((2567941704 ? var_1 : var_4))))));
    }
    var_14 = ((54621 ? ((((var_8 != (22006035 < 2104852753))))) : ((-(min(2104852753, -8489508681418324341))))));
    var_15 = ((var_5 && ((min(var_5, -122)))));
    var_16 = (((-(var_10 != var_4))));
    #pragma endscop
}
