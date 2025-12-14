/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197665
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
    var_20 ^= ((/* implicit */int) max(((+(262143ULL))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 6603017796709452287ULL)) ? (6800621438734606538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = ((unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_0 + 2] [i_0 + 2])), (var_6)));
        arr_4 [i_0 + 2] = min((((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11646122634974945092ULL)) ? (((/* implicit */unsigned long long int) -25643434)) : (6800621438734606513ULL))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) (-(arr_2 [i_1])))), (((unsigned long long int) var_2)))));
        var_21 = max((((unsigned int) arr_6 [i_1])), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 11646122634974945085ULL))))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (11646122634974945107ULL))), (6800621438734606505ULL)))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)206))))) : (min((((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1]))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (11646122634974945107ULL)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) min((var_7), (((/* implicit */short) var_19))))) / ((+(((/* implicit */int) var_9))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) max((((var_19) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) 732323736U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), ((unsigned char)38))))) : (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) 1732180741)))))))));
    }
}
