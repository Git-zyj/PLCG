/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37393
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) | (min((var_10), (((/* implicit */unsigned long long int) var_17))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && (arr_0 [i_0 + 2])))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
        var_20 = max((((4066471951082941005LL) + (((/* implicit */long long int) -1265322402)))), (((/* implicit */long long int) ((short) (unsigned short)54157))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (short)751)))))))), (((var_5) >> (((((/* implicit */int) var_0)) - (50033))))))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) != (2147483642)))) + (((/* implicit */int) ((((/* implicit */int) (short)3815)) >= (((/* implicit */int) ((unsigned short) var_15))))))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned int) 1265322401));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(1265322402))) : (min((((/* implicit */int) ((short) -1LL))), (-1265322402)))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (unsigned short)15419)) : (((/* implicit */int) (signed char)52))));
                var_25 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1]))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_2]))) ? (((/* implicit */int) var_0)) : (arr_6 [i_2])));
            }
        } 
    } 
    var_27 -= ((/* implicit */long long int) var_0);
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_13))));
}
