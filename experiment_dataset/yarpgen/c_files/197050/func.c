/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197050
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
    var_10 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_7))))) : ((~(((/* implicit */int) var_1)))))));
    var_11 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_6)))) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (unsigned char)236))))), (((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_1))))) / (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_3 [i_0])))));
        var_13 = ((/* implicit */signed char) ((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) / (min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))) ? (((((/* implicit */long long int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) - (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((1099511627775ULL), (((/* implicit */unsigned long long int) (unsigned char)108))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)112)))) : (arr_0 [i_0]))))));
    }
    var_15 -= ((/* implicit */_Bool) var_3);
    var_16 *= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
}
