/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218862
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) || (((/* implicit */_Bool) 3968385042438453941ULL))))) % (((/* implicit */int) arr_1 [13]))))) & (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned int) var_5)), (arr_7 [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)221)) / (((/* implicit */int) (unsigned short)63224)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_12 [i_4] [i_1] = ((/* implicit */signed char) arr_8 [(unsigned char)14] [8ULL] [i_2] [i_4]);
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_3 - 2] [i_3])) * (((/* implicit */int) var_9)))))));
                            arr_13 [i_0] [i_2] [3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3 - 2]))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_4)))) + (83)))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            arr_18 [2] [i_5] [i_5] = max((((/* implicit */unsigned long long int) (short)10116)), (11876815355468018526ULL));
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_4))))) - ((+(var_8)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_1);
                            var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_5)), (((var_1) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (arr_14 [i_0] [i_1])))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_0] [i_1 - 1] [(unsigned short)6] [(unsigned short)6] [i_6])), (min((542388674U), (((/* implicit */unsigned int) (unsigned short)42059))))))) ? (((/* implicit */int) arr_1 [i_1])) : (max((min((((/* implicit */int) (unsigned short)42048)), (-953556615))), (((/* implicit */int) var_9)))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_2] [i_0] [i_6]) : (arr_17 [i_0] [i_0])))))));
                        }
                        for (int i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            var_18 = arr_23 [i_0] [i_0] [i_0] [10] [2] [i_0];
                            var_19 &= ((/* implicit */unsigned char) max((arr_7 [i_0]), (((/* implicit */unsigned int) var_1))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (max((((/* implicit */unsigned short) arr_16 [i_0] [i_1 - 1] [i_3 - 1] [i_3] [i_7] [i_7 + 1] [i_7])), (arr_23 [i_0] [(signed char)5] [i_1] [i_0] [i_3] [i_7 + 1])))));
                        }
                    }
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42062))) : (11876815355468018531ULL)))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5332)) * (((/* implicit */int) var_1))))) < (max((11876815355468018526ULL), (1952877656407988641ULL)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3072)) * (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) ((int) var_1))) ? (((((/* implicit */int) (short)32763)) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0)))))));
    var_24 ^= ((/* implicit */unsigned short) (short)3062);
    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)65523)) ? (-1621167146) : (-782282543))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (4530686519251074882ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
