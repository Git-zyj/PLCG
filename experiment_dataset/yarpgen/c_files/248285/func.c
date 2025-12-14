/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248285
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 - 1])) / (((/* implicit */int) arr_0 [i_1 - 2]))))) * (min((arr_3 [i_0] [i_0 + 3]), (((arr_2 [20] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                    arr_6 [i_2] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (+(4611686017890516992LL)));
                        arr_9 [(unsigned short)5] = ((/* implicit */unsigned short) (+(arr_4 [i_0] [i_0] [i_1] [i_0])));
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)0)), ((~(max((arr_4 [i_3] [i_3] [i_2] [i_3]), (((/* implicit */int) arr_1 [i_0]))))))));
                        var_18 += ((/* implicit */unsigned long long int) ((((((arr_5 [i_0] [i_1] [i_3] [i_1]) / (arr_5 [i_3] [i_2] [(_Bool)1] [i_0]))) - (((/* implicit */int) arr_0 [i_0 + 3])))) < (((/* implicit */int) ((max((arr_2 [16] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4611686017890516993LL)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_3] [i_1 - 2] [i_1 - 2] [i_0])))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1] [i_1]);
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-((-(arr_12 [i_0] [(unsigned char)5] [i_0 - 1] [i_0 + 3]))))))));
                        arr_16 [i_4] |= ((((/* implicit */long long int) ((((arr_5 [(unsigned short)9] [i_1] [i_1] [i_0]) - (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (_Bool)1))))) == (max((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (arr_11 [i_4] [(signed char)20] [i_1] [(_Bool)1])))), (((arr_8 [i_0 + 1] [i_1] [i_2] [i_4] [i_1]) / (((/* implicit */long long int) arr_4 [i_0] [i_0 + 2] [i_0] [i_0])))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((arr_7 [11] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)226)) - (226))))) / (((/* implicit */long long int) max((arr_13 [i_0] [i_1 - 1] [i_2] [i_5]), (arr_13 [i_0] [i_1] [i_2] [i_5]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) * (arr_2 [i_0] [i_1 - 2])))) ? (arr_3 [i_0] [i_0]) : ((~(arr_3 [i_0 + 1] [i_1])))))));
                        var_20 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) | (max((max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_0])), (arr_14 [i_0] [i_0 - 1] [i_0 - 1]))), (arr_14 [i_0] [i_1 - 2] [i_2])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((var_14), (var_14)))))) - (((/* implicit */int) var_1))));
}
