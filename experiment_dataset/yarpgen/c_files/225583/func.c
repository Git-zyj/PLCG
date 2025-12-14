/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225583
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) 16572783620190638493ULL))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) == (-6612822133240950263LL)));
        var_11 ^= ((/* implicit */int) 18263530445598882294ULL);
        arr_3 [i_0] = ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) var_0)) - (4082))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_12 = ((/* implicit */long long int) min((max((18263530445598882294ULL), (((/* implicit */unsigned long long int) 8140641162715294221LL)))), (((/* implicit */unsigned long long int) (+((+((-9223372036854775807LL - 1LL)))))))));
        arr_6 [i_1] [(signed char)4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) 183213628110669322ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) var_6))))) ? (((183213628110669323ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))) : (((/* implicit */unsigned long long int) 8583289407619484163LL))))));
        arr_7 [(short)9] = ((/* implicit */int) ((min((((((/* implicit */_Bool) -8181503054581794956LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (183213628110669308ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8181503054581794956LL)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))) << (((var_2) - (1313700835U)))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_11 [i_2] = var_4;
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((36028797018963952ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))));
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_8 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 454356639U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)181)))) : (((((/* implicit */int) max(((unsigned short)39934), (arr_10 [8])))) - ((((_Bool)1) ? (((/* implicit */int) (short)-6004)) : (((/* implicit */int) (unsigned char)70))))))));
    }
    var_15 = ((/* implicit */int) min((var_15), (var_9)));
    var_16 = 1184556457;
}
