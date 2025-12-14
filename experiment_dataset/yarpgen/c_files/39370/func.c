/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39370
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) ((unsigned char) var_2))), (max((((/* implicit */unsigned short) var_10)), ((unsigned short)46816))))), (arr_14 [(short)7] [5U] [(short)7] [i_3] [i_3] [i_3])));
                                arr_15 [i_1] [i_3] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((((/* implicit */int) (unsigned short)24576)) + (((/* implicit */int) (unsigned short)63657)))) : ((~(((/* implicit */int) (unsigned short)18719))))))) ? (((/* implicit */int) ((max((var_9), (((/* implicit */long long int) arr_11 [i_3] [i_3] [15LL] [i_3])))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)46816))))))) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) (unsigned short)46816)))))) >= (min((arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_12 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 - 1] [i_1] [i_5])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_5] [i_0 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned short)22] [i_1] [i_0] [i_0]))) : (var_9))))));
                    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_1] [i_0 + 1])) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((var_4), (((/* implicit */short) arr_16 [i_1] [i_0 - 1])))))));
                }
                for (short i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    var_16 += ((/* implicit */_Bool) min((((((var_7) << (((((/* implicit */int) arr_0 [i_6])) - (31544))))) / (((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_1])) + (17395))))))), (min((((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [(unsigned char)23])), (((((/* implicit */int) (unsigned short)18700)) >> (((((/* implicit */int) (unsigned short)46816)) - (46796)))))))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)46833))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_1))))))) || (((/* implicit */_Bool) arr_10 [i_0] [i_6] [i_6] [i_6 + 3] [i_6 + 3]))));
                    arr_20 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)254)), (arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))));
                    arr_21 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46816))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) <= (8338294092667660526ULL)))) : (((/* implicit */int) ((_Bool) var_3)))));
                }
            }
        } 
    } 
}
