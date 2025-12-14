/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] |= ((+((min((arr_0 [i_0]), (arr_0 [i_0]))))));
                var_11 = var_9;
                arr_7 [i_1] [i_0] = (max((arr_2 [i_0]), ((~(((arr_1 [i_0] [i_0]) >> (var_10 - 7028)))))));
                var_12 = (max((arr_5 [i_0] [i_1]), (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                var_13 = (max(var_13, (arr_5 [i_1] [i_1])));
            }
        }
    }
    var_14 |= (min((max(var_5, var_8)), var_4));
    #pragma endscop
}
