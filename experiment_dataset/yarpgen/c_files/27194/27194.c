/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min((arr_1 [i_1 - 2]), ((~((min((arr_2 [i_0]), var_5)))))));
                var_11 -= ((min(((1 ? 9872 : 1)), ((min((arr_0 [i_0] [i_1]), var_2))))));
                var_12 = (min(var_12, ((min((max(1, 1)), (!var_9))))));
            }
        }
    }
    var_13 = max((max(1803197310, 240)), (((max(1, var_5)))));
    var_14 = (max(var_14, (max(((min(((min(1, (-127 - 1)))), (max(1, var_1))))), (min(((var_3 ? var_8 : var_6)), var_0))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_9 [i_3] = ((min(-var_7, var_2)));
                arr_10 [i_3] = (((((min((arr_6 [i_3]), (arr_8 [i_3] [i_3])))) ? (max((arr_1 [i_2]), 4294967295)) : var_1)));
                arr_11 [i_3] = (max(((min(2, 9223372036854775807))), ((min(((var_4 ? 1 : 65534)), ((min((arr_3 [i_3]), (arr_0 [i_2] [i_3])))))))));
            }
        }
    }
    #pragma endscop
}
