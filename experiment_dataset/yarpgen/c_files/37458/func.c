/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37458
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
    var_17 += ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (((0ULL) - (((/* implicit */unsigned long long int) 8639991773890754931LL)))))), (((/* implicit */unsigned long long int) min(((-(var_13))), (475273895))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 2]))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) var_4)) < ((-(-475273896)))));
                        arr_10 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-(3092249433U)));
                        var_20 = ((((/* implicit */_Bool) -828310014742969840LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 3092249432U)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_13 [(_Bool)1] &= ((/* implicit */unsigned short) (~(3319797506227309411ULL)));
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [2ULL] [2ULL])) ? (((/* implicit */long long int) 628214339U)) : (var_5)))) ? (((475273895) & (((/* implicit */int) (unsigned short)20410)))) : (((/* implicit */int) ((_Bool) var_2)))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_4] [i_4]));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_17 [14] [14] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4152796670U)) ? (-475273892) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)65535)) : (var_13));
            var_22 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))));
            var_23 ^= ((/* implicit */short) ((((/* implicit */long long int) arr_15 [i_4] [i_5] [i_5])) / (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_8)))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_24 = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)20405))))));
            arr_20 [i_4] [6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [(unsigned char)10] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))) / ((+(31242632)))));
        }
    }
    var_25 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned int) (short)32767))));
}
