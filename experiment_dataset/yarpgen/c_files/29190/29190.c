/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = -30464;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) | (arr_0 [i_0]));
        arr_4 [i_0] = (((416670583307976733 ? 5954398388765671404 : -416670583307976734)));
        var_22 = (max(var_22, ((((min((((arr_0 [i_0]) ? var_2 : 416670583307976734)), -23732)) > (((-var_4 ? var_14 : ((-416670583307976734 ? (arr_2 [i_0]) : 4))))))))));
        arr_5 [i_0] = (arr_0 [i_0]);
        var_23 = (max(var_23, (((((((210 ? -416670583307976746 : var_4)) <= (arr_1 [i_0]))) ? ((((var_8 ? (arr_0 [i_0]) : 2775718438)) * (arr_2 [i_0]))) : ((min(((var_5 ? (arr_2 [i_0]) : 12)), ((min(var_19, (arr_0 [i_0]))))))))))));
    }
    var_24 = (!((((max(1, var_14))) > var_5)));
    var_25 ^= ((var_9 ^ (((12 ? 247 : 197)))));
    #pragma endscop
}
