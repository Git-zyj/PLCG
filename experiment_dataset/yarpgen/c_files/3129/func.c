/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3129
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
    var_18 = ((/* implicit */int) var_15);
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (4611686018427387903ULL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 6; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1 + 1] [i_1] [i_2 - 1]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_2 + 4])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2 + 1])))) : (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2 - 3] [i_2 - 3])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_2 + 4])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_2 + 2]))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)22)) ? (arr_0 [i_1]) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_3])))), (max((var_10), (((/* implicit */int) var_2))))))) ? (((((/* implicit */int) arr_7 [i_1] [i_1] [i_3])) + (((/* implicit */int) arr_5 [i_1 + 1] [i_3])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))))));
                    var_24 = ((/* implicit */int) var_3);
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) != (arr_8 [(unsigned short)2] [i_1 + 1] [i_1 + 1] [i_1 - 1])));
    }
}
