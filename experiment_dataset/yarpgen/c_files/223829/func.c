/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223829
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
    var_10 = ((/* implicit */long long int) ((max((max((1638324473), (1638324473))), (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) ((((((/* implicit */_Bool) 1638324480)) ? (3773495532U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) < (3773495542U))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) (~(var_4)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2894884835U)))), (var_6))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */int) var_3);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) 1513514833))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 3077801111386677682LL)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_0 [21]) : (((/* implicit */int) (unsigned char)8)))))));
            var_14 = ((/* implicit */signed char) ((long long int) 6992583004139763733ULL));
        }
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 15594858019010127916ULL))) < (((/* implicit */int) arr_3 [i_2]))));
            var_16 = ((/* implicit */unsigned short) ((var_5) ^ (((/* implicit */unsigned int) var_1))));
        }
        arr_15 [i_2] [(unsigned short)8] &= ((/* implicit */int) arr_11 [0LL] [10]);
    }
}
