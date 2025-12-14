/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = (min(var_18, (((((1099511627775 ? 2453795170 : 2146435072)) / (15297 ^ 50235))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (((!(((var_7 ? var_16 : (arr_1 [i_0] [i_0])))))));
        var_20 = (min(var_20, (1 || -4534)));
        var_21 = ((((arr_0 [i_0]) | (arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_22 = (min(var_22, (((!((max(var_11, (arr_6 [i_1])))))))));
            var_23 = (17891555486206881355 ^ -2275480055951499052);
        }
        var_24 = (max(var_24, (((((min((arr_4 [i_1]), (arr_3 [i_1 + 1])))) != (arr_7 [i_1 - 1] [i_1] [i_1 + 1]))))));
        var_25 *= ((+(min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])))));
        var_26 = ((((((((arr_3 [i_1]) && var_14))) < ((((arr_4 [i_1]) <= (arr_8 [0] [i_1 - 1] [i_1])))))) ? (((arr_6 [i_1 - 1]) ? 15321 : 1)) : ((45 ? (arr_5 [i_1 - 1]) : (106 >= 15297)))));
    }
    #pragma endscop
}
