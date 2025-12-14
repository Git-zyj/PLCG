/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(!var_0)));
    var_12 = var_9;
    var_13 = (!(((((-32767 ? 14 : 14))) || var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((8191 ? 4294967295 : 4294967295)) & (!37))))));
                var_15 = ((14 ? ((max((!32766), (!var_7)))) : (-2147483647 - 1)));
                var_16 = (min((!var_7), ((5910893893290956058 ? 1 : 18446744073709551615))));
            }
        }
    }
    var_17 += 16281313960486763570;
    #pragma endscop
}
