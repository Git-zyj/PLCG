/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226247
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
    var_19 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) 34381450)) : (4294967295U)));
        arr_4 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)0))));
        var_21 -= ((/* implicit */unsigned char) (((_Bool)0) ? (1901319061) : (((/* implicit */int) (unsigned char)0))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) 8449709005422589788LL)) : (18446744073709551615ULL)));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (524287ULL) : (((((/* implicit */_Bool) 31)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_24 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)235)) ? (33554431ULL) : (12937936719689915120ULL))), (((/* implicit */unsigned long long int) 4294967295U))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 4294967285U)) ? (16777215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (0ULL)));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (18446744073709551615ULL)));
        arr_13 [i_2] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (signed char)127))));
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (14789496640145031059ULL) : (0ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (((((/* implicit */_Bool) 4194303ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))))));
}
