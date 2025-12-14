/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_11 = max((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 1]));
        var_12 = (min(((((arr_1 [i_0]) >> (arr_1 [i_0])))), (max((max(7155730700643359429, var_1)), ((min((arr_1 [i_0 + 1]), var_5)))))));
        var_13 = (min(var_13, ((max(((~((var_4 ? 11291013373066192186 : (arr_0 [i_0] [i_0]))))), ((max(var_9, (arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = min((arr_2 [i_0 - 2] [i_0 - 1]), 1152921504069976064);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(((-(arr_4 [i_1]))), (arr_4 [i_1])));
        var_14 = (arr_5 [i_1]);
        arr_7 [i_1] = (!var_4);
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_15 = (min(var_15, ((max((min((arr_2 [i_2 + 1] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2 - 1]))), ((~(arr_2 [i_2 + 1] [i_2 - 1]))))))));
        var_16 += (!(((-((min((arr_1 [7]), 12)))))));
    }
    var_17 += var_3;
    var_18 = (min(7155730700643359444, var_8));
    var_19 = (min(var_19, (var_3 & var_1)));
    #pragma endscop
}
