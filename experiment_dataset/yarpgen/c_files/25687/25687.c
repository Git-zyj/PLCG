/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (min(var_15, -2096055319));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((~(((!((min((arr_1 [i_0]), 5))))))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_17 = (((((min((2255004453 <= 3821053421983147691), ((1 <= (arr_2 [i_0] [i_0]))))))) < (((arr_1 [i_1 - 2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1])))));
            var_18 = (max((((((-(arr_2 [7] [i_1])))) ? ((23246 ? 18446744073709551615 : 18446744073709551615)) : (arr_4 [i_1]))), -861143863));
            arr_6 [i_0] [i_1] [i_1 - 2] = 72;
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_19 = (max((175 == var_11), ((-(arr_8 [i_2 + 2] [1])))));
        var_20 = (max(var_20, (((((min((arr_7 [i_2 + 2]), 18446744073709551598))) ? 0 : (arr_7 [i_2 + 3]))))));
        var_21 = ((!(~var_10)));
    }
    #pragma endscop
}
