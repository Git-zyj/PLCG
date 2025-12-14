/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53413
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
    var_17 = ((/* implicit */unsigned short) var_11);
    var_18 = ((/* implicit */long long int) ((unsigned long long int) var_10));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((((/* implicit */int) var_9)) >= (0))), (var_13)))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41862)) || (((/* implicit */_Bool) (unsigned short)23886)))))));
            var_20 = (i_0 % 2 == 0) ? (((((((/* implicit */int) var_13)) % (((/* implicit */int) var_6)))) >= (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (49317))))))) : (((((((/* implicit */int) var_13)) % (((/* implicit */int) var_6)))) >= (((((/* implicit */int) arr_0 [i_0])) >> (((((((/* implicit */int) arr_0 [i_0])) - (49317))) + (30273)))))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))));
            arr_10 [i_0] [i_2] |= ((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned short)41862)) - (41847)))))));
        }
        var_22 = max((((33554431ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned long long int) var_12)));
        arr_11 [(unsigned short)10] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)11))));
    }
}
