/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((((((arr_0 [10] [i_1]) + 9223372036854775807)) >> (((arr_3 [1] [i_0] [18]) - 38182)))) & (((((arr_0 [i_0] [17]) >= (((((arr_2 [i_0] [i_1] [17]) || (arr_3 [3] [2] [i_1]))))))))))))));
                var_11 = 2044521284;
                arr_4 [2] = (((((((arr_0 [i_1] [i_0]) + 9223372036854775807)) >> (((arr_0 [i_1] [i_0]) + 9075030188106953781)))) * (((((arr_1 [i_1] [i_0]) == (arr_2 [i_0] [1] [i_1])))))));
                arr_5 [i_0] = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
