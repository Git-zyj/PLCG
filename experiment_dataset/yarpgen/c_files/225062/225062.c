/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((min(27561, (min(var_0, 15418818491283805065))))))));
    var_17 = 20945;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 |= ((14908360714831437575 ? 14908360714831437586 : 1));
                            var_19 &= (((((((max(-18, 94))) ? 1 : (var_4 - 44443)))) ? -1538107662155247047 : (min((max(var_8, (arr_8 [i_3]))), ((((arr_7 [i_3 - 3] [i_1]) | var_15)))))));
                            var_20 &= arr_6 [1] [i_3];
                            arr_12 [i_0] [i_0 + 1] [i_1] [i_2] [9] [i_3] = (max(4, 20940));
                        }
                    }
                }
                arr_13 [i_0] = (((min(1, 2179183295))) ? ((((160 > (min((arr_7 [i_0 + 2] [i_1]), 25281)))))) : (max((arr_3 [i_0]), (arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0]))));
                arr_14 [i_0] [i_1] [i_1] &= (((-20940 - 5446962255400196493) < ((((((~(arr_0 [i_0]))) <= (max(22941, (arr_6 [i_0 + 3] [i_1])))))))));
            }
        }
    }
    var_21 -= ((14908360714831437572 || 9435645918175315222) ? (min((min(var_5, 44147)), 0)) : (((max(var_13, 28704)))));
    #pragma endscop
}
