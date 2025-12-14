/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195607
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
    var_13 += ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1) : (((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
        var_15 += ((((/* implicit */_Bool) 2251765453946880ULL)) ? (((/* implicit */int) arr_1 [12U])) : (((/* implicit */int) var_7)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 2])) && (((/* implicit */_Bool) (unsigned short)0)))))));
            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(signed char)4] [i_0] [i_0])) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_9))))))));
        }
    }
}
