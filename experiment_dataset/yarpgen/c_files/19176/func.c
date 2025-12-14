/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19176
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((2304573933633153942ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9816)))))));
        var_18 = ((((/* implicit */int) arr_2 [(short)6])) ^ ((+(-419422496))));
        var_19 = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1] [i_0]))));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
            var_22 = ((/* implicit */_Bool) (~(6597069766656ULL)));
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((+(504834738))) << (((((/* implicit */int) (short)26313)) - (26312))))))));
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 504834725)) ? (((/* implicit */int) (short)-9817)) : (-504834762)));
            arr_9 [i_0] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28))));
            var_25 = var_1;
            arr_10 [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        }
    }
    var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(var_6)))) : (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) var_15))))));
}
