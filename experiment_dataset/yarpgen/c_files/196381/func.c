/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196381
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((arr_1 [i_0]) / (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((((/* implicit */int) ((((134217728) > (((/* implicit */int) (unsigned short)65535)))) && (((/* implicit */_Bool) var_10))))) & (((((/* implicit */_Bool) 3861425308U)) ? (((((/* implicit */_Bool) (short)-3192)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */int) (short)30504)) | (((/* implicit */int) (signed char)-103)))))));
                    var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((var_7) << (((((/* implicit */int) var_1)) - (54250))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_0] [(signed char)2] [(_Bool)1] [i_1]) < (arr_6 [18] [i_1] [i_1] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (max((max((((/* implicit */long long int) arr_5 [i_2] [i_1] [i_1] [i_0])), (arr_2 [i_1] [i_1]))), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [(signed char)13] [i_1])), (var_8))))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45145))) : (var_3)))) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (unsigned char)25))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))))))))));
}
