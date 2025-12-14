/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_10 = (arr_1 [i_0] [i_0]);
                            var_11 = max(-8484580554063960869, -8484580554063960857);
                        }
                    }
                }
                var_12 = (min(var_12, ((min((((arr_3 [i_1 - 1] [i_1 + 1]) ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_4)), (((!(arr_3 [i_1 - 2] [i_1 - 2])))))))));
            }
        }
    }
    var_13 = (max((!var_4), ((var_6 ? -var_2 : -8388608))));
    var_14 = (!var_9);
    var_15 += 8388632;
    #pragma endscop
}
