/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36870
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = (+(max((((/* implicit */long long int) -2135476820)), (((5LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (min((((/* implicit */int) arr_1 [i_0])), (-1907373242))) : (((/* implicit */int) ((_Bool) 2893588716316882585LL)))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (short)-1))))) + (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) max((arr_7 [i_1]), (var_4)))) : (((/* implicit */int) max((arr_7 [i_1]), (((/* implicit */short) arr_5 [i_1] [i_1])))))));
        var_12 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_1])), (0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)93))))) : (((2893588716316882585LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-22857)))))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_13 = ((/* implicit */int) var_0);
        var_14 = ((/* implicit */int) ((_Bool) 0LL));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1023)) ? (0LL) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_5 [(unsigned short)16] [i_2])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_6 [10LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)88))) : (arr_9 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((signed char) var_7);
    var_18 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) - (((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) var_9))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-94)), ((short)-22857)))) : (((/* implicit */int) max((var_8), (((/* implicit */short) var_0)))))))));
}
