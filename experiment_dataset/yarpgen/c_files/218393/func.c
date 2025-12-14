/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218393
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))));
        arr_2 [i_0] = ((/* implicit */unsigned short) min((var_1), (arr_1 [i_0])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        }
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (23)));
    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((var_10), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5)) ? (3917930546U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (max((var_0), (((/* implicit */unsigned int) var_3)))) : (var_7)))));
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_10), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (31) : (((/* implicit */int) var_11))))) ? (var_2) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_12))))))));
    var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)7))))))));
}
