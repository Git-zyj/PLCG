/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44451
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
    var_20 |= ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) + (((/* implicit */int) (signed char)-105)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (5348464470481583103ULL)))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23899))) / (13098279603227968499ULL)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((((/* implicit */int) var_13)) - (65)))))) ? (((((/* implicit */int) (unsigned short)8192)) + (((/* implicit */int) arr_2 [i_1])))) : ((+(((/* implicit */int) arr_2 [i_1]))))));
        var_23 = ((/* implicit */unsigned char) ((long long int) var_7));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_6 [i_2])));
        var_25 = ((/* implicit */unsigned long long int) ((max((1105185511U), (((/* implicit */unsigned int) (unsigned short)65528)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)57343)))))));
    }
    var_26 = ((/* implicit */long long int) var_9);
    var_27 = ((/* implicit */unsigned short) (+(2356989972U)));
}
