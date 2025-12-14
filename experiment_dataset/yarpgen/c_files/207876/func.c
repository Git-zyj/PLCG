/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207876
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_16 -= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_5)))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)26093)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> ((((~(arr_0 [i_0]))) - (3259467386U))))))))));
        var_18 = ((/* implicit */long long int) (signed char)(-127 - 1));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((signed char) ((short) (unsigned short)39443)));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)39443)), (arr_1 [i_1 - 1])))))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_1 - 1])) : (1381963490U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))) ? (min((((/* implicit */int) ((unsigned char) var_11))), (arr_1 [i_1 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_4 [i_1 + 1] [i_1])))) || (((/* implicit */_Bool) min((1610612736), (((/* implicit */int) (short)32256)))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39432))) / (3521155929959812715LL)))) ? (2913003806U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        arr_7 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_2 [i_1] [i_1])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (((+(((/* implicit */int) var_8)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (3303713713U)))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_7);
}
