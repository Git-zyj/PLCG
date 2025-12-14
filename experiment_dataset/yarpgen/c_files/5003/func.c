/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5003
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 &= ((/* implicit */unsigned short) (short)19387);
        var_19 = ((/* implicit */signed char) 18446744073709551615ULL);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)76))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65527)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)65527))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)102)) ^ (((/* implicit */int) arr_1 [i_0] [i_2]))));
            arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_9 [i_0] [i_2])));
            var_22 = ((/* implicit */unsigned short) (unsigned char)99);
        }
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_16))));
    }
    var_23 |= ((/* implicit */long long int) var_9);
}
