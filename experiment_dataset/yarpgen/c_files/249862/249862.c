/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((((arr_1 [i_0 + 1]) > (min(var_6, 16532181084973085438))))), 1914562988736466161));
        var_16 = (((16532181084973085440 % (arr_1 [i_0 - 2]))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = ((((min(16532181084973085440, (arr_0 [i_1 - 1] [i_1 + 1])))) ? (((arr_0 [i_1 + 2] [i_1 - 1]) ? 1914562988736466171 : (arr_1 [i_1 - 2]))) : var_8));
        arr_5 [i_1 + 1] = arr_3 [i_1 + 2];
        var_18 = (min(var_18, ((max((3437408564393868794 > -1152682752), var_7)))));
    }
    var_19 = var_6;
    #pragma endscop
}
