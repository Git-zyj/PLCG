/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242369
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
    var_14 = ((var_11) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_3))))));
    var_15 = ((/* implicit */signed char) ((var_6) ? ((~(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (4137092145401353912ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [(unsigned char)2]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [9ULL])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (+((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))) % (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))));
}
