/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228002
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 |= ((/* implicit */unsigned long long int) max((((((((-5286317967410241290LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_4)))) & (((/* implicit */long long int) ((/* implicit */int) ((-524101122) <= (((/* implicit */int) var_0)))))))), (2097088LL)));
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 |= ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_17 |= ((/* implicit */int) (!(((/* implicit */_Bool) (~(-2097090LL))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((int) arr_0 [i_0 - 1]);
                    var_19 = ((/* implicit */signed char) (-(var_11)));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 4582785680807419316LL)) ? (1318174196954356963LL) : (((/* implicit */long long int) var_1))));
                    var_21 |= ((/* implicit */int) ((-2097089LL) | (-2097088LL)));
                }
            } 
        } 
    }
}
