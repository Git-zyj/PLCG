/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((3439822921989263098 >= 50602162), ((~(-100 >= 4244365134)))));
    var_17 = ((var_13 & (~var_2)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((((34 ? -3439822921989263098 : 255)) + (((~((3439822921989263098 ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
        var_18 = (61445 - 5567297009100594086);
        var_19 = ((((arr_0 [i_0 + 1] [i_0 - 1]) != 2147483647)) ? ((3803645909 ? 0 : 0)) : (min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0] [i_0]))));
        arr_5 [i_0] = (arr_3 [i_0] [i_0]);
    }
    var_20 = ((~((~(!254)))));
    #pragma endscop
}
