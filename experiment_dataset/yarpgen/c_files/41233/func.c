/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41233
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) (((~(var_18))) >> (((var_9) + (4512277590876691286LL)))));
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)12710)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)52830)))) : (((/* implicit */int) (unsigned short)52825))));
            var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)21]))) : (var_6))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) arr_4 [11LL]);
    }
    var_23 = ((/* implicit */unsigned char) var_14);
    var_24 = ((/* implicit */unsigned int) var_7);
    var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(((/* implicit */int) var_13)))))));
}
