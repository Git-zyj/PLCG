/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240643
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_18))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-82)))), (min((((/* implicit */int) (signed char)60)), (((((/* implicit */_Bool) (unsigned short)32354)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_1]))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 2091697124)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (1195935085U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))))));
            }
            var_23 ^= ((/* implicit */unsigned long long int) (-(var_16)));
        }
        arr_9 [i_0] [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
        var_24 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1557989352U)))), (max((arr_0 [i_0]), (var_16)))))), (var_8)));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((4103741984498347431LL), (((/* implicit */long long int) (unsigned short)61430))));
        var_26 ^= ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) ((_Bool) max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) arr_13 [i_3])))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (arr_12 [i_3]) : (((/* implicit */int) arr_11 [i_4]))))) ? (((/* implicit */int) (unsigned short)61276)) : ((-(((/* implicit */int) (unsigned short)37991))))));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(((max((1322055056U), (((/* implicit */unsigned int) (_Bool)1)))) & (max((1359939450U), (((/* implicit */unsigned int) var_15)))))))))));
        var_30 |= ((/* implicit */unsigned short) max((((unsigned long long int) min((((/* implicit */long long int) var_9)), (-902880870248825356LL)))), (((/* implicit */unsigned long long int) (-(((long long int) (signed char)-52)))))));
    }
    var_31 = ((/* implicit */unsigned short) ((var_8) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_17) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) var_7)))))));
}
