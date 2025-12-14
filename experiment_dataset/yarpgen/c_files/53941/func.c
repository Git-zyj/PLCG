/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53941
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
    var_16 = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) ? ((~(((int) 4294967295U)))) : (max((((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0)))));
    var_17 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) 127)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)20016))))), ((+(((/* implicit */int) (unsigned short)57937))))));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((unsigned short) (signed char)2))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)12030)))) : (((/* implicit */int) var_8))));
        var_21 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned short)21866)))) ? ((-(arr_1 [10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45519))) : (var_4)))))) < (((/* implicit */long long int) ((unsigned int) (~(127)))))));
        var_22 = (-(((unsigned long long int) (signed char)78)));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (unsigned short)248))))), (((((/* implicit */_Bool) var_15)) ? (2726573420U) : (494223235U)))))) ? (max((((var_12) % (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (signed char)39)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))))))));
    var_24 = ((/* implicit */unsigned short) ((8982443185618919602LL) + (((((/* implicit */_Bool) (unsigned short)12030)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (min((((/* implicit */long long int) 0U)), (4059482967244501765LL)))))));
}
