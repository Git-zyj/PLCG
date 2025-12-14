/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_9;
    var_15 = -16786;
    var_16 = ((var_5 ? -var_0 : (~var_10)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0] = (arr_3 [1] [i_1 - 1]);
                var_17 = (((max((arr_1 [i_0] [i_0 - 3]), (arr_1 [i_0] [i_0 + 2]))) == (((-((max(43925, var_5))))))));
                var_18 = ((18446744073709551615 == (max(1466105710, ((min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_2 [i_1 + 1]))))))));
                var_19 ^= ((241 * (arr_2 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
