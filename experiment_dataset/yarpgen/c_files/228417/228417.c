/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 && var_4);
    var_11 = (max(((((0 << (14005947220536578806 - 14005947220536578773))) + (max(2158956985598964358, 2334516844)))), 1960450450));
    var_12 = (min((min(43, 2155159171)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((((max(var_3, var_9))) ? 17890990997981911082 : -48)) == (!-1)));
                var_14 = (min(var_14, ((max((((!((max(var_5, var_1)))))), (~var_8))))));
                var_15 -= ((168 + ((min(var_1, -var_2)))));
                var_16 = max((var_7 && var_6), (((var_1 << (var_7 - 104)))));
            }
        }
    }
    #pragma endscop
}
