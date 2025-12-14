/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 13215713432188185098;
    var_11 |= -var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min(var_12, ((((max(var_0, (arr_1 [i_0])))) % (max(((max(7798, (arr_1 [i_0])))), (max(2433234900, var_6))))))));
        arr_2 [i_0] = var_0;
        var_13 = (min((((arr_1 [i_0]) ? var_4 : (arr_1 [i_0]))), (((!(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 2292426155;
        arr_8 [i_1] = (max(((var_5 ^ (max((arr_1 [12]), (arr_0 [i_1] [i_1]))))), var_0));
        var_14 = (max(var_14, ((((arr_5 [i_1] [i_1]) ? (((((arr_5 [i_1] [i_1]) >= (arr_5 [i_1] [i_1]))))) : (((arr_5 [i_1] [6]) % var_6)))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_15 = ((!((max(15848801189664744432, (arr_10 [i_2 - 1]))))));
        var_16 ^= (~var_2);
    }
    var_17 = ((((var_8 ? var_6 : (((max(var_8, 32767)))))) != var_2));
    var_18 = (max(var_18, var_6));
    #pragma endscop
}
