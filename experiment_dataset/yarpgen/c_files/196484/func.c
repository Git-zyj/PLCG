/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196484
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */_Bool) ((signed char) min((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))));
        var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((((1680399842) <= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_13)) - (4637))))), ((~(((/* implicit */int) var_12))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (962424234U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768)))));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((var_8), (((/* implicit */unsigned short) var_5))))))));
}
