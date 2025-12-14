/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51357
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
    var_15 = (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_0))) : (((/* implicit */long long int) var_4)))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_17 += ((long long int) (~((-(((/* implicit */int) (signed char)125))))));
        arr_2 [i_0] = min((((/* implicit */int) ((((arr_0 [i_0]) == (((/* implicit */int) var_8)))) || (((/* implicit */_Bool) var_1))))), (((((_Bool) arr_0 [14LL])) ? (min((((/* implicit */int) (unsigned short)511)), (1119011310))) : (1119011310))));
        var_18 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1]);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((-1119011310) + (((/* implicit */int) (signed char)-9))));
        var_20 = ((/* implicit */long long int) -1119011295);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (signed char)6);
        arr_9 [i_2 - 1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (1119011315)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (1119011315)))) : ((+(2435989169754129866LL))))));
    }
}
