/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 5416646821102235835;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [10] = (((((1073676288 ? 5416646821102235835 : var_9))) != ((min((arr_1 [i_0]), (~var_18))))));
        var_20 = (((arr_0 [i_0]) ? ((((13030097252607315766 < 13030097252607315766) < ((max((arr_1 [i_0]), 16565)))))) : ((-var_8 ^ ((~(arr_3 [i_0] [i_0])))))));
        var_21 = ((-((-(((arr_0 [i_0]) ? 16565 : (arr_1 [i_0])))))));
        var_22 += (min((arr_0 [i_0]), (((((((min(var_12, (arr_2 [i_0])))) + 2147483647)) << (127 - 127))))));
        var_23 = ((!(3989677022 & 13030097252607315781)));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_24 = (max((((!(-127 / 14)))), (((arr_2 [i_1 - 1]) ? (arr_5 [i_1 - 1]) : (arr_2 [i_1 + 1])))));
        var_25 = (max((((arr_1 [i_1 + 1]) & (arr_0 [i_1 + 1]))), (((((((arr_0 [i_1 - 1]) >> (((arr_0 [i_1]) - 5871816709741418406))))) ? (arr_6 [i_1 - 1]) : (arr_5 [i_1 + 1]))))));
    }
    #pragma endscop
}
