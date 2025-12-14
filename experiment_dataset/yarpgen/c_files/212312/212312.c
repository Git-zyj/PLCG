/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212312
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
                var_12 ^= (((((((arr_1 [i_1] [i_1]) - 10633281499018814639)) * (((arr_3 [i_1]) % 5027593764809737)))) | -1710803799885259823));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [2] [i_0] [i_3] [i_0] [4] &= (arr_8 [i_1] [i_1]);
                            var_13 = 5027593764809718;
                            var_14 = (((1710803799885259822 + 118) + 18441716479944741860));
                        }
                    }
                }
                var_15 = (max(var_15, (~2247713300735123236)));
            }
        }
    }
    var_16 = (((!var_5) << 26));
    var_17 = (min(var_17, (((((4167246978 <= 312248813825648403) >= 1))))));
    #pragma endscop
}
