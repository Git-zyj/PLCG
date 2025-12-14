/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= -2386308570;
    var_13 = ((-(!1486078748)));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = max(1594456297, (((1267455027 && 3686383002) ? (max(var_5, (arr_2 [i_0]))) : (arr_2 [i_0 + 3]))));
        var_15 = ((((((((arr_1 [i_0] [3]) == 3110064233))) | (!3027512268)))) ? 4294967295 : ((4057567625 ? 16862869 : ((~(arr_1 [i_0] [i_0 + 1]))))));
        var_16 = (1023 * 3027512265);
    }
    #pragma endscop
}
