/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 += 93;
        var_18 ^= (-7 ^ (arr_2 [i_0] [i_0]));
        var_19 = (((((min(1, var_1)) ? ((109054064 ? 1512008906 : 3609897354)) : ((max(1, (arr_2 [9] [i_0])))))) - ((((arr_1 [i_0]) ^ (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = var_12;
        arr_6 [i_1] = (((((arr_3 [i_1] [i_1]) >= 67108863)) ? (((((~(arr_5 [0]))) > (arr_5 [2])))) : (min(((-17 ? 0 : (arr_3 [i_1] [i_1]))), ((var_9 ^ (arr_4 [i_1] [4])))))));
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        arr_10 [i_2] &= 0;
        arr_11 [4] = ((((((arr_0 [i_2 + 3]) ? (arr_0 [i_2 + 3]) : (arr_0 [i_2 + 3])))) ? ((((var_9 && (((~(arr_8 [8])))))))) : (((~117) ? (-57 ^ 4467570830351532032) : 1))));
    }
    var_21 &= var_0;
    var_22 = var_9;
    #pragma endscop
}
