/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26589
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)60124))));
                var_17 += ((/* implicit */int) arr_1 [i_0] [13U]);
            }
        } 
    } 
    var_18 ^= (-(var_6));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) ^ ((((!(((/* implicit */_Bool) -6318314074225533365LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)5412)))) : (((((/* implicit */int) var_3)) % (var_9)))))));
    var_20 ^= ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_15))))))) ? (((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) 4611686018427387904LL)) ? (9153339908640813583ULL) : (((/* implicit */unsigned long long int) 1537905898)))) - (9153339908640813565ULL))))) : (((/* implicit */int) var_0)));
}
