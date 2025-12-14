/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217115
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
    var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) min((((int) (unsigned char)112)), (((/* implicit */int) var_4))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_1] [(_Bool)1] [i_1 + 4] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)105)) * ((-((-(((/* implicit */int) arr_5 [i_0]))))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_16))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_10 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)143)))) | (var_3)));
                    arr_11 [(_Bool)1] [21ULL] [i_2] [i_1] = ((/* implicit */int) ((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-106)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((~(arr_0 [i_2] [i_1 + 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) max((((arr_9 [i_0] [i_0] [i_2]) ? (((/* implicit */int) min(((unsigned char)112), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) arr_5 [i_1 + 1]))))))), (((/* implicit */int) (signed char)127))));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) max((var_15), (((/* implicit */short) (unsigned char)0))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_8)))))), (min((((((/* implicit */int) arr_5 [i_0])) | (arr_1 [i_1]))), (((/* implicit */int) (signed char)-106))))));
                }
                arr_14 [i_1] [i_1 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) -10528632)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)105)))), (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-11744))))))))), (((arr_2 [i_1 + 3] [i_1 + 3]) ^ (1708819846U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((min((2586147449U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
}
