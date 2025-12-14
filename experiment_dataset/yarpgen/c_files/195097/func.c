/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195097
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
    var_20 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */long long int) var_14))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned long long int) var_15)), ((-(var_7))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)37)))), (((((/* implicit */_Bool) -1770343321592323585LL)) ? (((/* implicit */int) var_13)) : (var_15)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (3241337971768470688LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)31446)))) != (((/* implicit */int) arr_0 [i_0])))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) (_Bool)0)))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) arr_1 [i_0])) - (var_9)))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_24 = max((((((/* implicit */_Bool) var_0)) ? (arr_5 [i_1]) : (((/* implicit */int) var_13)))), (((int) (_Bool)1)));
            arr_8 [i_1] = ((/* implicit */int) var_3);
        }
        arr_9 [i_1] |= ((/* implicit */signed char) (_Bool)1);
        var_25 = ((signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))) == (((arr_7 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))));
        var_26 &= ((/* implicit */int) ((((_Bool) arr_7 [i_1])) ? (min((arr_7 [i_1]), (arr_7 [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
    }
}
