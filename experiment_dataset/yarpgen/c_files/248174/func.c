/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248174
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
    var_14 = ((/* implicit */_Bool) max((var_6), (min((((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */unsigned long long int) var_4))))), (var_6)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)0)))) ^ (min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) <= (arr_4 [i_0] [i_1]))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((arr_3 [i_0] [13LL] [i_1]) <= ((~(arr_0 [i_1]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_2]) | (((/* implicit */unsigned int) -1361077558))))) ? (127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_2 + 1] [i_2] [i_2] [i_4]))));
                                arr_17 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) -1LL)) | (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1])))));
                                var_18 = (+((~(var_7))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29741))) <= (270215977642229760ULL)))) ^ (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (short)-27045))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_5] [(short)21] [i_0] = ((/* implicit */short) min(((((+(32767U))) % (((/* implicit */unsigned int) ((int) arr_8 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_20 [(short)0])) * (arr_0 [i_0])))) <= (((31LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_5] [i_5]))))))))));
                    var_21 = ((/* implicit */int) var_5);
                    arr_22 [i_0] [i_0] [7] [i_0] = ((/* implicit */short) ((min((((((/* implicit */int) arr_13 [i_1] [i_0] [i_1] [i_1] [i_0])) * (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned char)252)))))) * (((arr_9 [i_1] [i_5]) ? (((/* implicit */int) arr_9 [i_5] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1]))))));
                }
            }
        } 
    } 
}
