/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(var_12, var_8)), (((var_5 ? 127 : (((((-127 - 1) + 2147483647)) << (var_7 - 9211193872301473095))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((((((arr_1 [i_0] [i_0]) / 2752074743))) ? (min(-744955168963486849, 104)) : (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0] [7]));
        var_18 = ((min(((max(-104, 5)), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_19 = (((((max(-10152, (arr_1 [1] [i_0])))) ? ((min((arr_1 [i_0] [6]), 172))) : (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = arr_4 [i_1];

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_8 [5] [i_1] = (max(672643353, 4138));
                arr_9 [i_1] [i_1] [i_0] = (((((206158430208 ? -744955168963486860 : 5))) > (((arr_7 [i_0] [i_0] [9]) ? (max(6729071718242414948, (arr_0 [i_0]))) : ((min(8602720899029026093, 59)))))));
                arr_10 [1] [1] [1] = ((-25248 ? (~0) : ((max((arr_1 [10] [i_1]), (((arr_5 [i_0] [i_1] [i_2 + 1]) | (arr_7 [i_0] [i_1] [i_2]))))))));
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_13 [i_3] [15] = ((((min((arr_11 [i_3]), 32760))) & (max(((172 | (arr_11 [i_3]))), ((~(arr_11 [i_3])))))));
        var_21 = (arr_12 [1]);
    }
    #pragma endscop
}
