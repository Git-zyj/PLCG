/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 += (((1 != 3805061097461354112) << (((max(((max(var_4, (arr_4 [i_1] [1])))), (max(14641682976248197503, 3014)))) - 14641682976248197495))));
                var_14 = (max(((var_4 ? 14641682976248197496 : var_6)), -3805061097461354129));
                arr_7 [i_1 + 1] [7] = (max((~94), ((-((61016 ? 582 : 10831010803742878492))))));
            }
        }
    }
    var_15 = var_10;
    var_16 = (min((~var_6), (((((max(-6756454010573467768, var_10))) || (!6756454010573467767))))));
    var_17 = max(var_7, (~var_0));
    #pragma endscop
}
