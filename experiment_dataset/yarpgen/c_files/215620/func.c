/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215620
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
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_4) & (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-5813)), (var_12))))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) var_9))));
    var_18 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) var_3);
        arr_2 [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((long long int) (!(((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (signed char)50)), (arr_1 [i_0] [i_0]))))) & (((int) (-(((/* implicit */int) (short)5818)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_22 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (short)-5813)), (var_0)))))));
            var_23 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (var_0)))));
        }
    }
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (short)5818))));
        var_25 = ((/* implicit */signed char) ((unsigned char) (short)21819));
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_8), (var_5)))), ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_0))) : (((/* implicit */unsigned long long int) var_6))))));
    var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(var_15)))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (var_11))) & (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
}
