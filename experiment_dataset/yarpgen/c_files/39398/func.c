/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39398
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
    var_10 = ((/* implicit */unsigned int) ((short) max(((unsigned short)1), (((/* implicit */unsigned short) var_1)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((104721178U), (((/* implicit */unsigned int) ((arr_1 [i_0]) << (((arr_1 [i_0]) - (1386393909))))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (unsigned short)65535))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [(unsigned short)4]))) ? (((/* implicit */int) arr_4 [i_1] [(unsigned short)6])) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1))))), ((unsigned short)4080)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)4185)), ((-(((/* implicit */int) (unsigned char)255))))));
        var_14 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) arr_3 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) arr_3 [(short)4] [(short)4])) ? (((/* implicit */int) var_6)) : (arr_1 [i_1])))))));
        var_15 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((max(((+(((/* implicit */int) (unsigned short)4088)))), (((/* implicit */int) (unsigned short)4081)))), (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (arr_0 [i_1]))), (max((arr_0 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))))));
    }
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_9)))) ? (((unsigned int) (unsigned short)1)) : (((/* implicit */unsigned int) ((int) var_4)))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((int) var_8))));
}
