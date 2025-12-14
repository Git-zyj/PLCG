/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198054
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(max((var_5), (((/* implicit */unsigned int) var_2)))))) : (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [11U] [i_1] [i_2 - 1])), (max((arr_9 [i_2] [i_1] [i_2] [i_3] [1LL] [i_1]), (((/* implicit */long long int) var_8))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967291U)) | (arr_9 [i_2] [i_1] [(unsigned short)3] [i_3] [i_4] [i_4])))), (18446744073709551604ULL)))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)19971)))))));
                                arr_13 [i_2] [i_3] [(_Bool)1] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_4])), (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [8LL]))))))), (min((arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), (arr_7 [i_2 - 1] [i_2] [i_3] [2U])))));
                            }
                        } 
                    } 
                    var_17 = arr_8 [1U] [i_1] [1U] [1U] [i_1];
                    var_18 = ((/* implicit */int) ((arr_10 [(signed char)8] [i_1] [i_2]) < (((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)41318))))) ? ((~(var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) (_Bool)1)))))))));
                }
                arr_14 [(unsigned short)1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(6ULL)))) ? ((-(((((/* implicit */_Bool) arr_10 [1U] [i_1] [i_1])) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)4] [(short)5] [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
