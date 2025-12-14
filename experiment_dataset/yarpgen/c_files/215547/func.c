/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215547
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((int) ((((/* implicit */int) var_6)) > ((+(((/* implicit */int) (short)25900))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = max((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) / (arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */short) (unsigned char)112))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7ULL] [i_0]))) : (((4294967295U) | (arr_2 [i_0])))))) % (14233143447006523279ULL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (min((((/* implicit */unsigned int) var_9)), (arr_2 [i_0]))) : (min((arr_2 [i_0]), (((/* implicit */unsigned int) (unsigned char)206))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2062189808U)) ? (((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [6U])) && (((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) arr_0 [(unsigned char)10] [i_0])) + (12543))))))));
    }
}
