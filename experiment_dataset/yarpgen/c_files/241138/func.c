/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241138
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((signed char) 1073741823U))), (((((/* implicit */_Bool) (unsigned char)240)) ? (1495367835261876328LL) : (-1LL))))) >= (((/* implicit */long long int) var_7))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min(((+((+(27LL))))), (((max((((/* implicit */long long int) var_9)), (-2LL))) & (((/* implicit */long long int) arr_1 [i_0])))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(arr_1 [i_0]))))));
    }
    var_16 = max((((short) ((var_11) - (((/* implicit */int) var_0))))), (var_10));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((27LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((var_7), (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((7), (var_7)))) : (((((-6LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (49161))))))) : (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (int i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)240)), (min((((/* implicit */int) var_5)), (arr_1 [i_1]))))), (((/* implicit */int) (signed char)-51))));
        var_19 = ((int) ((((/* implicit */int) arr_2 [(unsigned char)11])) ^ (((/* implicit */int) arr_2 [i_1 + 1]))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_12);
        var_21 = ((signed char) ((((((/* implicit */_Bool) 5LL)) ? (281474708275200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (var_8))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_4 [i_2])))))) : (((max((-14LL), (arr_4 [i_2]))) * (((/* implicit */long long int) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        arr_6 [i_2] = ((/* implicit */unsigned char) (+(min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (unsigned char)31))))));
    }
}
