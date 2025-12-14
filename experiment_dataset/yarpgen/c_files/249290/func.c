/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249290
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-847)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [9ULL] [i_1]))))) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) ((((6U) >> (((((/* implicit */int) (unsigned char)255)) - (236))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_0))))))))));
                arr_6 [i_1] = min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (4294967289U)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_4 [i_0]))))))), (1274355580));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                arr_16 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [10LL] [i_0] [10LL]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_4)))))) ? (min(((-(((/* implicit */int) arr_1 [i_3 - 2] [i_1])))), (((/* implicit */int) (unsigned char)209)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5769))) : (var_12)))) ? (((/* implicit */int) ((short) (signed char)-115))) : (((/* implicit */int) (unsigned char)4))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) ((long long int) 2147483632)))));
                                arr_17 [i_4] [i_4] [i_2] [11U] [i_4] [i_3] [i_0] = ((/* implicit */signed char) arr_9 [i_4 + 2]);
                            }
                            /* LoopSeq 2 */
                            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_3 + 2] [i_1] [i_5])), (var_7))))));
                                var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23265)) ? ((((+(arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]))) << ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_5]))) : (arr_9 [i_0]))) - (126ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (-1) : (((((/* implicit */_Bool) 990361249U)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_2 [i_2])))))))));
                                var_19 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-84)) ? (10534550130840195423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_0))))) ? (min((((/* implicit */int) (short)-5769)), (2))) : (((((/* implicit */_Bool) (signed char)-44)) ? (((((/* implicit */int) arr_12 [i_5] [i_0] [i_2] [i_1] [i_0])) | (2147483647))) : (((/* implicit */int) var_3)))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) min((((((/* implicit */int) arr_4 [i_0])) <= (((/* implicit */int) arr_0 [i_0] [14LL])))), (((((/* implicit */int) arr_0 [i_0] [i_2])) == (((/* implicit */int) arr_11 [i_0] [i_1]))))))) : (((/* implicit */int) (signed char)0))));
                            }
                            for (short i_6 = 3; i_6 < 17; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_3 [i_3]))))) ? (((/* implicit */int) (short)25135)) : (((/* implicit */int) (signed char)-92)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)42157)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_6 - 2]))))))))));
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)73))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (8493861761362216095ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1]))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-4991)), (var_7)))) ? (max((var_8), (((/* implicit */unsigned int) -570371035)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -662912513)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned short)4753)))))))));
                            }
                            arr_24 [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3] [i_3]))) ? (((((/* implicit */_Bool) 732176976U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)32738)))) : (((/* implicit */int) ((max((((/* implicit */long long int) arr_12 [i_0] [i_3] [i_3] [i_3 - 3] [i_1])), ((-9223372036854775807LL - 1LL)))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_23 = (+(((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (unsigned short)20591)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) * (((/* implicit */int) (signed char)0))))))))));
}
