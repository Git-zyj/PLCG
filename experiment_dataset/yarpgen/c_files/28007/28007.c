/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(-531038573, var_4))), var_14));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((max(4294967295, -317630736258968205)) << (((arr_0 [i_0] [i_0]) - 28019))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] |= ((((~(((arr_4 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [17] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))))) * (((0 ? (arr_3 [i_0] [i_0] [i_0]) : 0)))));
            var_17 = ((min((arr_1 [i_1 + 1] [i_1 - 3]), 1852488506)));
            var_18 = (max(((var_12 != (min(10984277231752090017, var_2)))), (0 != 980008432)));
        }
        var_19 = (max(1048575, (((!(arr_1 [i_0] [i_0]))))));
    }
    var_20 = var_9;
    #pragma endscop
}
