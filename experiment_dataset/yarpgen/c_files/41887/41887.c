/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((+(((arr_0 [i_0 + 2]) ? ((min(var_16, (arr_0 [i_0 + 2])))) : 3360432339)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_9 [i_0] [i_0] [i_0 - 1]) == 2147483647));
                            var_20 = (max(var_20, ((max((((((var_13 ? (arr_10 [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : 5137486775063643571)) > (arr_7 [i_2 + 1])))), -1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
