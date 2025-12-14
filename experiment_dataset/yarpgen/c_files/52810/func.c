/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52810
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-29)) != ((-(((/* implicit */int) arr_1 [i_0])))))))) & (((long long int) (!(var_14))))));
        var_17 ^= ((/* implicit */_Bool) (((~((~(var_10))))) & (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 426730426U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-1)))))))));
        arr_4 [i_0] = (~((((!(((/* implicit */_Bool) (short)17183)))) ? (var_1) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (-2394187699016090338LL)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) var_9);
        var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (174572425U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))) < (1073741823U))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 - 1]))))) : (max((min((((/* implicit */unsigned long long int) (unsigned short)8191)), (3988712640926277428ULL))), (((/* implicit */unsigned long long int) 2147483647))))));
    }
    var_20 = var_16;
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (921740546U))) == (((var_7) + (1430339064U)))))) | (((/* implicit */int) var_2)))))));
}
