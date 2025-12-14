/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((28988 ? ((var_17 ^ (((var_15 ? 12 : var_12))))) : (((((10 ? -5673104468452913362 : 31)))))));
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = ((~(min(0, 1568208338))));
                    arr_6 [i_0] = (~1568208338);
                }
            }
        }
    }
    var_22 = (max(((((1568208338 ? 36134 : 57510)) < 1568208339)), (var_14 <= var_18)));
    #pragma endscop
}
