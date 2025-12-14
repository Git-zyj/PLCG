/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(max(var_3, -var_1))));
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_22 = 29771;
                var_23 += (46822 <= 0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_24 = (max(var_13, ((46298812701958263 ? -2078663514 : 2574766384661567444))));
                            var_25 = (((arr_7 [3] [i_1 + 2]) ? (max(var_9, (var_15 / 32767))) : (!-2544963664238722336)));
                        }
                    }
                }
                var_26 = (!805306368);
            }
        }
    }
    var_27 = var_10;
    #pragma endscop
}
