/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20100
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
    var_14 += ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((-((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((max((var_11), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_0 [i_0])))))) : (arr_1 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) -3103624722843582423LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)34203)))))))));
        arr_5 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34183))) : (min((63U), (((/* implicit */unsigned int) (_Bool)1)))))) >> (((/* implicit */int) ((((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-19)))))));
        var_16 += ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_17 ^= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_13)) : ((-(var_3))));
}
