/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232747
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((_Bool) min(((signed char)15), ((signed char)-15)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))), (max((var_9), (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (var_11)))) : (((/* implicit */int) ((signed char) (signed char)-15))))) : (((/* implicit */int) var_11))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) -5829599797049951107LL)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? (67076096) : (67076103))))) : (((/* implicit */int) (signed char)-15)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((short) 5829599797049951131LL));
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_11)) / (((/* implicit */int) var_8))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (short)-1))));
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
        arr_4 [10ULL] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
    }
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((0LL), (((/* implicit */long long int) (signed char)21))))))) ? (min((((/* implicit */unsigned long long int) ((-6532149176636248379LL) > (((/* implicit */long long int) 267386880U))))), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_10)) ? (((6111828614723327111LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) : (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (max((((/* implicit */int) (signed char)-15)), (var_12))))))));
}
