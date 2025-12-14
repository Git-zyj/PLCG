/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245153
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), ((-(((/* implicit */int) (signed char)-118))))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) ^ (var_13)))));
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (max((((/* implicit */unsigned short) var_4)), (var_7)))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) var_8);
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (0ULL))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_3] [i_1] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0] [i_0] [(unsigned char)16] [i_0])), (arr_3 [i_0] [i_0] [i_2])))) : (((/* implicit */int) var_6))));
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))) + (((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)65535))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_7 [i_0] [i_0]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)15] [i_1] [i_1]))) | (((((/* implicit */_Bool) (short)-7)) ? (749883612U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_2]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)6)), ((unsigned short)34295)))) ^ (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_5] [i_6])) | (((/* implicit */int) arr_3 [i_6] [i_5] [i_1]))))))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (+((~(4294967279U)))));
                                arr_23 [i_1] [i_2] [i_6] [i_6] &= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), (arr_21 [i_6] [i_6] [i_2] [i_6] [i_0])))) * ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
