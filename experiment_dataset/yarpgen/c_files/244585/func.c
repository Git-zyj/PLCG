/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244585
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
    var_19 = ((/* implicit */unsigned long long int) ((var_12) / (var_7)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) min(((unsigned char)9), (((/* implicit */unsigned char) (_Bool)1))))))), ((!(((/* implicit */_Bool) min((9218868437227405312ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))))))));
        arr_3 [i_0 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)60401))), ((unsigned short)5135))))) - ((+(((((/* implicit */_Bool) (unsigned short)60412)) ? (((/* implicit */unsigned long long int) var_15)) : (arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((4294967295U) * (3476424265U)))) | (((unsigned long long int) 818543044U))))) ? (((/* implicit */int) max(((unsigned short)5139), (((/* implicit */unsigned short) arr_2 [i_0 - 2]))))) : (((/* implicit */int) (unsigned short)47075))));
        arr_5 [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((9223372036854775807LL) / (((/* implicit */long long int) var_12))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                arr_14 [i_1] [i_2] |= ((/* implicit */int) var_0);
                arr_15 [i_1] [i_1] [i_2] [16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_3 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (arr_8 [i_1] [i_3 - 1])))));
                arr_16 [i_1] [i_2 - 1] [i_3 - 1] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 28)) ? (((min((((/* implicit */long long int) (unsigned short)10213)), (var_13))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)49))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3] [i_2 + 1])))))));
                arr_17 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) min((arr_8 [i_3] [i_2]), ((~((~(4194288)))))));
                arr_18 [i_1] = ((/* implicit */unsigned short) arr_9 [i_2] [i_3]);
            }
            var_22 = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1)))))));
        }
    }
}
