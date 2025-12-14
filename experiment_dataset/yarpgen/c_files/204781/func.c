/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204781
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) 987364351);
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_7)))) ? (arr_3 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [17ULL] [(signed char)2])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17855))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)17855)))))))))))));
        arr_4 [1] = ((/* implicit */unsigned char) (short)-13713);
    }
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) arr_5 [i_1]);
        var_16 = ((/* implicit */long long int) (unsigned short)6);
    }
    var_17 += ((/* implicit */unsigned int) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65)))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (unsigned char)190))));
}
