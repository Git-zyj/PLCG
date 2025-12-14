/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243908
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
    var_18 = ((/* implicit */unsigned int) (~(((int) (~(3682800823876276288ULL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14763943249833275338ULL)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)4])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1672519508)) : (var_12)))))))))));
        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)20)) != (((/* implicit */int) (unsigned short)0))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((unsigned short) arr_1 [4] [i_0]))) : (((((/* implicit */_Bool) 3682800823876276288ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (max((((/* implicit */int) (unsigned char)32)), (25)))))) ? ((+(((unsigned int) (signed char)-61)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-7141)))))));
    }
}
