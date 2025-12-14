/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190659
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
    var_14 *= ((/* implicit */_Bool) ((signed char) var_2));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) (unsigned short)20063);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 3])))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned char) var_9)))) : (((unsigned long long int) ((long long int) (unsigned short)45473)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 = arr_2 [i_1];
        var_18 = ((arr_2 [i_1]) << (((arr_2 [i_1]) - (9405769280992827747ULL))));
        arr_6 [(unsigned char)7] = ((/* implicit */signed char) var_12);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_9 [(signed char)11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((((((/* implicit */int) arr_8 [i_2] [i_2])) + (2147483647))) << (((var_7) - (1672155077)))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_2) != (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [15U] [(unsigned char)12]))) : (3143484235U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) arr_8 [i_2] [i_2])))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)278)) && (((/* implicit */_Bool) arr_8 [i_2] [i_2]))))) << (((((unsigned int) var_5)) - (4294963612U))))) : (var_2))))));
    }
    var_20 = ((/* implicit */unsigned char) max((2247326043U), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned short)45463))))))));
}
