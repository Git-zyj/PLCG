/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_11 ? 8226131459157129550 : (var_11 & 51))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (!-387710078319244623);
                    var_16 = (min((arr_2 [i_2 - 1] [i_2 - 1]), 9234866659524295643));
                }
            }
        }
    }
    var_17 = (min(var_17, (((((-((28098 ? 9211877414185255973 : 9211877414185255973))))) ? ((((var_0 ^ 18825) != (~var_0)))) : ((~(!var_12)))))));
    var_18 = var_10;
    #pragma endscop
}
