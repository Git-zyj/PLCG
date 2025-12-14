/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((((max(167, 12914837606831445831)) * (max(1, 1736726207))))) ? (min(-8639, (~1736726196))) : (var_9 + var_1))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] = var_3;
                            var_17 = (min(((0 ? 0 : (arr_7 [i_3] [i_3 + 3] [i_3] [i_2] [i_3] [i_2]))), ((((arr_7 [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3] [i_3]) > (arr_7 [i_3] [i_3 - 1] [i_3] [i_1 + 2] [i_1] [i_1]))))));
                        }
                    }
                }
                arr_10 [3] [3] [i_1] = ((+((((var_4 ? (arr_8 [i_0] [13] [i_1 + 2] [i_0] [i_1] [2]) : var_6))))));
                arr_11 [i_1] [i_1 + 2] = (max((--205), ((~(arr_8 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0])))));
            }
        }
    }
    var_18 = (min((((var_11 << (4607993093578039473 - 4607993093578039471)))), var_10));
    #pragma endscop
}
