/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3731501837636771343LL)))))) ? (((/* implicit */long long int) 503316480U)) : ((+(6208169681327568210LL))));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */signed char) min(((-(3791650836U))), (max((503316490U), (((/* implicit */unsigned int) (unsigned char)1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_19 = (-(-6208169681327568211LL));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 503316480U)))) < (-1LL)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((+(2380414349U))) << (((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))))))) != (var_7)));
    }
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (var_3) : (((min((var_12), (((/* implicit */long long int) (_Bool)1)))) - (((1LL) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    var_21 = ((unsigned long long int) 2185842692U);
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) max((((_Bool) 899494205U)), (((((/* implicit */_Bool) 3791650816U)) && (((/* implicit */_Bool) 503316474U))))))), (var_12)));
}
