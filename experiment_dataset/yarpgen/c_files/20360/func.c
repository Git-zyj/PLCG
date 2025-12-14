/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20360
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)23531))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 = ((/* implicit */signed char) ((short) (signed char)-99));
    }
    var_19 = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) var_8)))))) & (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)127))))) == (min((var_16), (((/* implicit */long long int) var_2)))))))));
    var_20 = ((/* implicit */unsigned int) max((((signed char) 1ULL)), (var_2)));
    var_21 = ((/* implicit */signed char) 16368U);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_12))))))) == (((((/* implicit */_Bool) (-(var_11)))) ? (var_3) : ((~(var_16)))))));
}
