/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20839
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
    var_18 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) var_2);
        var_20 = ((/* implicit */_Bool) ((unsigned int) var_8));
        var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_22 = (unsigned char)237;
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) (_Bool)1);
            var_24 = ((/* implicit */int) 5162546403927955507LL);
            var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) | (((((/* implicit */long long int) ((((/* implicit */_Bool) -5162546403927955508LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_2]))))) | (min((5162546403927955528LL), ((-9223372036854775807LL - 1LL))))))));
            var_26 = ((/* implicit */unsigned short) min((max((1328240348U), (((/* implicit */unsigned int) (short)-23164)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1])) : (var_15))))))));
            arr_7 [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1448455943)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-63)) ^ (((/* implicit */int) (short)25730))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (5162546403927955536LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1555771199)) ? (((/* implicit */int) ((signed char) -6565137020883365655LL))) : (((/* implicit */int) var_10)))))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(var_3)));
            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50090)))))));
            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29711))));
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) (((~((~(var_5))))) >= (((/* implicit */unsigned long long int) 3748500480880698964LL))));
            var_30 |= ((/* implicit */long long int) (signed char)127);
        }
        arr_17 [i_1] = ((/* implicit */unsigned int) (-((((+(((/* implicit */int) var_11)))) * (((/* implicit */int) (signed char)-10))))));
    }
}
