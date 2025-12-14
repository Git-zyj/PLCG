/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189625
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
    var_17 = ((/* implicit */signed char) ((unsigned int) ((signed char) (~(((/* implicit */int) var_13))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0])));
        arr_4 [(signed char)2] = min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_10) : (-1594622678))))), (((((((/* implicit */_Bool) arr_0 [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((arr_7 [i_1 - 2]) == (((((/* implicit */_Bool) (short)-11528)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) (+(arr_3 [(signed char)4])))) : (arr_1 [i_3 + 4] [i_2])));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))) * (((4294967283U) * (arr_0 [6])))));
                    var_21 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16))) % (arr_5 [i_3 + 1] [i_1 - 1]));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_10);
}
