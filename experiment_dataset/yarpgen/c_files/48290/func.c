/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48290
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((5675954101980313201ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) != (((2269814212194729984ULL) >> (((var_14) + (1681543496)))))));
        arr_2 [i_0] = ((((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (0ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))) == (((((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) (unsigned char)216)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) ((signed char) var_14))))));
    }
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_14)) ? (min((8ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (+(((int) var_4))))) ? (var_14) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_8))), (((signed char) (signed char)-73)))))))));
}
