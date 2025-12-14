/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20306
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
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((short)16376), (((/* implicit */short) (unsigned char)255))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))) ^ (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30636))) : (var_13))), (((unsigned int) var_0))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294963200U))))) || (((/* implicit */_Bool) (+(3534912140U))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1])))) ^ (((/* implicit */int) ((4294963202U) > (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)50963))));
            var_25 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)61341)))));
        }
    }
}
