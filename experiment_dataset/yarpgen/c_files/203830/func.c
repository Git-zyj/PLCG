/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203830
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [6U]))) <= (arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_2 [(signed char)4] [(signed char)4])))))));
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)139)) * ((((-(((/* implicit */int) arr_3 [0LL] [2U])))) / (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_13 = ((/* implicit */long long int) (~(max((max((arr_2 [i_0] [i_0]), (((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned char)32)) - (arr_2 [3] [3])))))));
        var_14 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (127U)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1183668337U)))))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 2846016694U))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_3))));
}
