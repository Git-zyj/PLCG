/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217220
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65535))))))) : (18446744073709551615ULL))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) (short)4193))))) ? (((((/* implicit */int) var_6)) >> (((989976494U) - (989976468U))))) : (((/* implicit */int) var_1))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)6234)))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)51690)))))))));
        var_21 -= ((/* implicit */_Bool) -7943612027685914677LL);
        var_22 = ((/* implicit */unsigned long long int) (~((+(arr_1 [i_0])))));
        arr_3 [6ULL] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)13845))))), (arr_1 [i_0])));
        arr_4 [10ULL] [(short)0] &= ((/* implicit */short) (+(max((((/* implicit */long long int) arr_0 [i_0])), (var_18)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) arr_6 [i_1]);
        var_24 = min((((unsigned int) arr_5 [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)13845))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [(short)6] [i_3] = ((/* implicit */unsigned short) arr_12 [i_3]);
                var_25 -= ((/* implicit */_Bool) arr_8 [(signed char)8]);
                var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_2])))))), (((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [(signed char)8] [(signed char)8] [i_3])) || ((_Bool)1)))))))));
                arr_14 [i_3] [i_3] = max((((/* implicit */unsigned int) var_15)), ((-(arr_7 [i_3]))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))));
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
}
