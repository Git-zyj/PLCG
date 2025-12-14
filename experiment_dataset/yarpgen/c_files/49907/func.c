/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49907
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
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((((/* implicit */int) arr_0 [i_0])), (1702490753))) : (((/* implicit */int) var_5)))) % ((-(((/* implicit */int) var_0)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -698558631)))))));
        var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_14))));
        var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 1])) : (((/* implicit */int) var_1)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_25 = ((/* implicit */_Bool) ((int) ((short) (_Bool)1)));
        var_26 = ((/* implicit */long long int) max((((unsigned int) ((unsigned int) arr_5 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) (unsigned char)0)))))));
        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1]))));
        var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))))));
    }
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_15))));
}
