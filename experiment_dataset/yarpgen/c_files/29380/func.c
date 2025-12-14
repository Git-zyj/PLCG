/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29380
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
    var_15 = ((/* implicit */signed char) max((-2310887447600414928LL), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) ((int) var_12))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (var_6)))))))));
        var_17 += ((/* implicit */int) ((short) (short)-4));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15904)) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)8))) <= (3469447662U)))));
        var_19 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)2)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_20 = var_13;
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_12)))) - (arr_2 [i_1])));
        var_22 = ((((/* implicit */int) (unsigned char)149)) ^ (-957567185));
    }
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        var_23 = ((/* implicit */int) (+(((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 3])))))));
        var_24 &= ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) arr_2 [i_2 + 4]))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) < (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)195))))) | (((/* implicit */int) var_5))))));
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((int) ((signed char) var_1))))))));
}
