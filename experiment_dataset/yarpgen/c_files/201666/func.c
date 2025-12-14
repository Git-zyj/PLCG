/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201666
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -366951131)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(691040438U))))))));
    var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 691040438U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */short) min((min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_7)) ? (833873532) : (((/* implicit */int) (_Bool)1)))))), ((~(((((/* implicit */int) var_6)) & (2147483647)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max(((short)-14853), (((/* implicit */short) var_1))))) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
}
