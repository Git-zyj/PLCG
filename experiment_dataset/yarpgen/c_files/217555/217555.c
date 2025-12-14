/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (86908946 + 31562);
    var_13 &= (-((min(var_0, var_2))));
    var_14 = (((2807435415 ? -86908949 : 193)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((86908946 ? (arr_1 [i_0]) : (arr_0 [i_0 - 3] [i_0 - 2]))));
        arr_3 [14] &= 119;
    }
    var_15 = ((-(-15084 * 119)));
    #pragma endscop
}
