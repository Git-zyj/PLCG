/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245659
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((unsigned int) arr_5 [i_0] [i_0] [i_1]));
                var_16 = ((unsigned long long int) ((int) arr_5 [i_0] [i_0] [i_0]));
                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((long long int) var_10)) : (max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (arr_0 [i_0] [i_1]))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [22ULL])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_6 [(short)19] [i_1] [i_2]) : (var_7))), (((int) arr_5 [(unsigned short)19] [i_1] [i_1]))))) * (((unsigned long long int) ((unsigned int) arr_8 [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [i_3] [i_3])) | (((arr_14 [i_0] [i_0] [7ULL] [i_3] [i_4]) ? (((/* implicit */int) arr_3 [(signed char)3] [i_1])) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)16]))))))) != (min((((/* implicit */long long int) ((short) arr_9 [i_0] [i_2]))), (((long long int) arr_4 [(unsigned short)8] [i_3])))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) : (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_3] [i_0]))))));
                                var_19 = ((/* implicit */long long int) arr_11 [i_4] [(_Bool)1] [i_0] [i_3] [i_4] [(_Bool)1]);
                                var_20 = ((/* implicit */short) arr_1 [i_3] [i_2]);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_2])) % (((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_2])))) : (((((min((((/* implicit */long long int) var_7)), (arr_5 [i_0] [i_1] [i_2]))) + (9223372036854775807LL))) << (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_14)))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)112))) ? (((unsigned int) arr_7 [i_0] [i_0])) : (((/* implicit */unsigned int) max((-441763269), (((/* implicit */int) (short)-24305)))))))) : (min((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0])))), (((long long int) arr_6 [i_0] [i_0] [(unsigned short)19]))))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) arr_4 [i_0] [i_1]))), (((((_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((int) arr_12 [i_0]))) : (arr_7 [i_0] [0])))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_11))))), (((var_1) - (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) max((((((var_14) + (2147483647))) << (((var_1) - (1636877523029334870LL))))), (var_14))))));
}
