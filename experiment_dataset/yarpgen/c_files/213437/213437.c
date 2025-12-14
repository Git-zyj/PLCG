/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((788 ? 65535 : 34359738366));
    var_14 = ((((((var_9 ? 117 : 41473)) & 24075))) ? (max(var_5, (max(var_5, var_1)))) : (!var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (arr_0 [7]);
        var_16 += ((0 ? 4294967295 : 73));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (min((arr_11 [i_0] [i_1] [i_3 + 1] [i_3 - 2] [2]), (arr_2 [i_2] [i_3 + 2])));
                                arr_12 [i_2] [12] [i_2] [i_2] = min(((!((max(41473, -1173490573606337004))))), (((arr_7 [14] [i_1] [i_2] [i_3]) > ((max((arr_5 [i_0]), 73))))));
                                var_18 &= (max(((-7938410990200207070 / (min(-1372884227, 2976938450923252514)))), 65524));
                            }
                        }
                    }
                    var_19 += 24062;
                }
            }
        }
    }
    var_20 = ((41473 ? 1406 : (-2147483647 - 1)));
    #pragma endscop
}
