/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238252
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_7))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16)))) + (18446744073709551615ULL)))));
        var_19 &= (+(((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))));
        arr_2 [(unsigned short)7] = ((/* implicit */unsigned short) ((((arr_0 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))))) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8191)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_20 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1 - 2]))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_7))));
            var_22 -= ((/* implicit */unsigned long long int) ((signed char) var_13));
        }
        for (short i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            var_23 += ((/* implicit */unsigned short) ((((long long int) 3037684531U)) & (((-1236472923969952927LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 3] [i_1] [i_3 - 3])) ? (((/* implicit */unsigned long long int) arr_5 [i_3 + 2] [i_1] [i_3])) : (var_14)));
            var_25 += ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))));
        }
        var_26 += ((/* implicit */unsigned short) arr_7 [i_1] [10] [(unsigned short)8]);
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((_Bool) var_8))))) * (((/* implicit */int) var_9))));
}
