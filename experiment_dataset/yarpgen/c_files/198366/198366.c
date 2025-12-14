/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0] [i_0 + 1]);
                arr_5 [i_0] [i_0] [i_0] = (min((max(-1212838120, (arr_4 [i_0]))), (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 *= ((~(max(var_11, 0))));
                var_18 = (max(var_18, ((min(0, (((arr_2 [i_2] [i_2] [14]) ? 0 : (arr_2 [i_2] [i_2] [i_3]))))))));
            }
        }
    }
    var_19 = (var_8 && 36);
    #pragma endscop
}
