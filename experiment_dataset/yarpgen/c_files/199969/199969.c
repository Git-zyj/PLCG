/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_5, -var_12));
    var_14 = ((((!(~0)))) % var_8);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = (((1 | -1058613014) >= (max((781806558775122049 & 5282), (~91)))));
                var_16 = (max(var_16, ((max(14308, -12)))));
                var_17 += (17664937514934429567 / 1);
                arr_6 [i_1] [i_1] [i_0 + 1] = (((max(-730434939, 781806558775122074)) % ((((((arr_0 [i_0]) - var_5)) << (((arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1]) - 29268)))))));
            }
        }
    }
    var_18 = (((((((var_12 << (6918454399145045215 - 6918454399145045203))) && (~5158))))));
    var_19 |= 39;
    #pragma endscop
}
