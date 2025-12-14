/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231588
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
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_3] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_3)))));
                        var_17 = ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */_Bool) 13453575374889908682ULL)) ? (18446744073709551615ULL) : (4476463102193538667ULL))), (((/* implicit */unsigned long long int) var_12)))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) & (((arr_1 [i_3 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [(signed char)0]) >= (arr_6 [6U] [i_2])))))))))));
                        var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((1552481908U), (((/* implicit */unsigned int) (short)-18562))))), ((+(((((/* implicit */_Bool) 3)) ? (3245893071928462306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10450)))))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-29731)), (max((((((/* implicit */_Bool) (unsigned short)13044)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */short) var_13)), ((short)-8402))))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 4; i_5 < 9; i_5 += 3) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1593057491)) ? (((/* implicit */unsigned long long int) 6811327609967140526LL)) : (18446744073709551615ULL)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [4LL] [(short)0]))))) | (((/* implicit */int) var_0)))) : (((/* implicit */int) ((signed char) (unsigned short)13044)))));
                            var_22 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_16 [i_0 + 3])))), (((/* implicit */int) min((arr_13 [i_0] [i_0 + 1] [(signed char)0] [i_0 + 2]), (arr_13 [i_0] [i_0 + 3] [i_0 + 3] [i_0]))))));
                            var_23 = ((/* implicit */short) arr_2 [i_1] [i_4] [i_5 - 2]);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 4; i_6 < 9; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((arr_10 [5U] [i_1] [i_2 - 3]) >= (((/* implicit */unsigned long long int) var_7)))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) (unsigned short)859)))))));
                            arr_19 [(unsigned short)7] [i_0] [(unsigned short)9] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 - 2] [i_6 - 1] [i_6 - 3] [i_6])) ? (arr_18 [i_2 - 3] [i_2] [i_6 + 1] [(short)8] [i_6]) : (arr_18 [i_2 - 1] [i_2 - 1] [i_6 - 4] [i_6] [i_6])));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (short)13795);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [5ULL] [i_7] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_4]);
                            var_26 = ((/* implicit */short) (((((!(((/* implicit */_Bool) 17685024171097917787ULL)))) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_2] [i_1])) : (max((var_12), (var_1))))) % (((/* implicit */int) ((unsigned short) var_16)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1564209349)) || (((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_4] [i_2] [i_1] [i_0] [4ULL]))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) 1045690126346530183ULL))))));
                            var_28 = ((/* implicit */signed char) arr_4 [i_4] [(signed char)0]);
                        }
                    }
                    for (short i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_9 + 1]);
                        var_30 = ((/* implicit */_Bool) var_9);
                        arr_28 [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9 - 1])) ? (((((/* implicit */unsigned int) var_12)) | (var_11))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)13048)), (arr_5 [i_0] [i_0] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)4] [2ULL] [i_9]))) : ((+(761719902611633828ULL)))));
                    }
                    var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)-27550))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2601501839U)));
                    arr_29 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) 0U);
                    arr_30 [i_0] [(short)0] [i_0] = ((/* implicit */unsigned long long int) max((max((2044), (((/* implicit */int) (short)-14825)))), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
}
