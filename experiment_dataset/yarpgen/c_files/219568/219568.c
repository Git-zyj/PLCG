/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? ((~(!var_13))) : ((max(var_3, (var_9 > var_5))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] &= arr_2 [i_0] [i_0];
        arr_4 [i_0 + 1] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = ((-((+(((arr_2 [13] [i_1]) >> (((arr_0 [11]) - 6652049615456442574))))))));
        var_21 = max((max((arr_0 [i_1]), (arr_1 [i_1]))), -5866039699536232267);
        var_22 = -0;
        var_23 = min((min(0, (arr_5 [i_1 + 1]))), ((max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 2])))));
        var_24 = ((~(arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_25 *= ((1 ? 1 : ((min(1, 1)))));
        var_26 = (+(max(((((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [11])))), 4025359069)));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_27 = (((arr_10 [i_3 - 1]) & ((min((arr_10 [i_3 - 1]), 1)))));
        arr_11 [21] [2] = (max((((arr_9 [i_3 - 1] [i_3 - 1]) < (arr_10 [i_3 - 1]))), (min((arr_10 [i_3 - 1]), (arr_10 [i_3 - 1])))));
        var_28 = (max(var_28, (((max((((10 == (arr_9 [i_3 - 1] [i_3])))), -7417654512254947370))))));
    }
    #pragma endscop
}
