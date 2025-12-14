/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] |= (min((arr_3 [i_0] [i_0]), (!-var_15)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (max((((-3 - (!105)))), (max((arr_3 [i_3 + 1] [i_3 - 1]), (arr_3 [i_1 - 1] [i_1 + 3])))));
                            arr_13 [i_2 - 3] [5] = 12316438414067407976;
                            var_20 ^= var_5;
                            arr_14 [i_0] [i_0] [i_2] = (4995537207166353529 >> (12316438414067407955 - 12316438414067407946));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = 99;
                var_21 *= (max(var_7, (((!(arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
            }
        }
    }
    var_22 *= var_6;
    #pragma endscop
}
