/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195219
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
    var_14 += ((/* implicit */short) ((min((((/* implicit */long long int) ((signed char) 4755007054373634637LL))), (((((/* implicit */_Bool) 17044025290177347407ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL)))))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) var_4);
            var_16 = ((/* implicit */_Bool) 1202841326U);
            var_17 = ((unsigned long long int) 4755007054373634637LL);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)54)) / (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) var_6);
            var_20 |= ((/* implicit */signed char) arr_7 [i_0]);
        }
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))) + (((/* implicit */unsigned long long int) 0))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
        var_23 *= ((/* implicit */int) min((((max((((/* implicit */long long int) var_5)), (arr_9 [i_3] [i_3]))) | ((~(-4755007054373634638LL))))), (((/* implicit */long long int) (!(arr_3 [i_3] [i_3]))))));
    }
}
