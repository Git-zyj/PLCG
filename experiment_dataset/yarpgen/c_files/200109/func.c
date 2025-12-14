/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200109
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_4 [i_1]));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [4])) * (((/* implicit */int) arr_0 [i_0])))))));
            var_15 ^= ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_1 [i_0])));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21753)) ? (((long long int) (signed char)127)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) + (2147483623)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) : (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) -7690230220735638799LL))) ? ((-(((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (short)21753)))) * (((/* implicit */int) (signed char)65)))))))));
}
