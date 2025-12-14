/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237882
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
    var_10 = ((/* implicit */signed char) ((unsigned short) var_6));
    var_11 = ((/* implicit */long long int) ((short) ((((int) var_9)) ^ (((/* implicit */int) ((short) var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_3 [i_1])), ((unsigned short)25836))))), (((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) arr_4 [i_0]))))) * (((/* implicit */int) ((short) arr_4 [i_0 + 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [i_1 + 2] [i_1] = arr_8 [(unsigned short)9] [i_2];
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 1) 
                            {
                                arr_15 [i_0 - 2] [i_1] [i_2] [i_3 + 1] [(_Bool)1] [i_0 + 1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))));
                                var_12 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min(((signed char)-1), ((signed char)-1)))), (arr_11 [i_1 + 1] [(_Bool)1] [i_3])));
                                var_13 = ((long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [i_3] [(unsigned char)18])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] [i_4] [i_4]))))), (arr_9 [i_0] [i_1 + 1] [11ULL] [i_1 + 1] [i_4] [i_0])));
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) arr_3 [10ULL])) + (((/* implicit */int) arr_11 [i_3] [i_2] [i_0 - 1])))))) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(unsigned short)4] [(unsigned short)4]))));
                                arr_16 [2] [12ULL] [7] [i_3] [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_10 [7U] [i_1] [i_2] [i_3] [(unsigned short)4]));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_19 [i_5] [6] [i_2] [i_1] [i_0]))));
                                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) >> (((arr_20 [i_0] [i_0] [(unsigned char)10] [i_0] [(_Bool)1] [(_Bool)1] [i_0]) + (8307444166726309682LL))))), (((/* implicit */int) ((unsigned char) ((_Bool) arr_7 [i_0] [i_1] [i_1] [i_0]))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((long long int) max((((/* implicit */long long int) ((unsigned short) arr_10 [10U] [10U] [i_2] [(signed char)4] [i_0]))), (min((arr_20 [i_0] [i_1] [i_1] [(unsigned char)11] [i_2] [i_3 - 1] [i_5]), (((/* implicit */long long int) arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [(unsigned char)6] [i_0]))))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)3)))) | (((/* implicit */int) min((((signed char) arr_5 [i_2] [i_0])), (((/* implicit */signed char) arr_4 [i_0])))))));
                            }
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) ((unsigned short) min((((/* implicit */long long int) arr_13 [i_6] [i_6] [i_2] [i_6] [(unsigned short)18])), (arr_20 [i_6] [i_3] [i_3 + 1] [i_0] [i_1] [i_0] [i_0 - 1]))))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_2] [i_1] [i_6])) >= (((/* implicit */int) arr_3 [i_1]))))), (((unsigned char) arr_9 [i_0] [i_0] [5] [i_2] [i_3 - 1] [i_6]))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_6]))));
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */long long int) ((unsigned int) (signed char)15))) % (((long long int) (_Bool)1)))), (((/* implicit */long long int) arr_7 [i_7] [18LL] [18LL] [(unsigned char)10])))))));
                                arr_26 [i_0] [i_1] [i_1] = ((long long int) ((signed char) max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_2] [i_1] [i_7 + 1])), (arr_9 [(signed char)8] [i_3 + 2] [i_2] [i_1 + 2] [2U] [i_0]))));
                                var_22 -= arr_19 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [(unsigned char)5];
                            }
                            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                            {
                                var_23 = min((((/* implicit */unsigned int) ((signed char) arr_5 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_0] [i_1] [5LL] [i_1] [i_2] [(unsigned char)6] [i_8]), (arr_2 [15U] [i_1 + 2]))))) + (min((arr_14 [i_0] [13LL] [3] [(_Bool)1] [i_3] [i_3] [i_8]), (((/* implicit */unsigned int) arr_29 [i_8] [i_0])))))));
                                var_24 = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_8] [i_8]);
                            }
                        }
                    } 
                } 
                arr_31 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) arr_18 [i_0] [i_0] [i_0] [6] [i_0] [i_0] [i_0])), (((/* implicit */unsigned short) min((arr_10 [i_0] [i_1 + 2] [i_1] [(unsigned char)7] [1LL]), (((/* implicit */unsigned char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)10] [i_1]))))))))) - (((unsigned int) arr_20 [i_0 - 2] [i_0] [i_0] [i_1 + 1] [i_0] [i_1] [i_0]))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)16)) ^ (((/* implicit */int) (_Bool)1))))) | (((unsigned int) arr_10 [i_0] [i_0 - 3] [(signed char)4] [i_1] [i_1])))), (max((((/* implicit */unsigned int) ((short) arr_30 [i_1 + 2] [(short)6] [i_1] [i_0] [i_0]))), (min((arr_7 [i_0] [i_1] [14U] [i_1]), (arr_7 [i_1 - 1] [(short)16] [(short)16] [i_0]))))))))));
            }
        } 
    } 
}
