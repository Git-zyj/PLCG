/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((var_5 ? (var_10 && var_0) : ((206750477 ? (587729167 <= 135) : ((min(212, -22192)))))))));
    var_14 = 587729167;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = ((max((min(var_8, (arr_1 [i_0]))), -7936)) + (var_2 + var_4));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_16 = (max(var_16, ((-(arr_2 [i_1])))));
            arr_4 [i_0] = ((22211 ? ((min(205, (arr_1 [i_0 + 4])))) : (((((174 ? (arr_3 [i_0]) : (arr_1 [i_0])))) ? (((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : 126)) : 21508))));
        }
    }
    var_17 = (min((max(var_7, 18)), ((var_9 ? var_1 : ((min(249, 253)))))));
    var_18 = 73535346;
    #pragma endscop
}
