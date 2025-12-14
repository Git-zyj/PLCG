/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193635
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
    var_14 = var_1;
    var_15 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((3815720557U), (((/* implicit */unsigned int) (short)396))))) ? (var_6) : (var_6))), (((unsigned long long int) (+(-7098246892087369345LL))))));
    var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) 1889360933807951699LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (9223372036854775807LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) -7098246892087369345LL));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(32114472U))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7098246892087369347LL)) ? (((/* implicit */long long int) 8191)) : (-7098246892087369345LL)));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 524287LL)) ? (7098246892087369361LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_20 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 719986122)) ? (13072764661546611901ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)6943))))))))));
    }
    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (max((min((13072764661546611898ULL), (((/* implicit */unsigned long long int) (short)-4177)))), (((/* implicit */unsigned long long int) min((-524288LL), (((/* implicit */long long int) 2147483647)))))))));
}
