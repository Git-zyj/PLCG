/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/364
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)0);
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) max(((~(((arr_1 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (short)-1))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((arr_0 [i_1] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_2]), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2015040013U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1476854395))))))) : (((((/* implicit */_Bool) ((int) 25769803776LL))) ? (((/* implicit */long long int) (+(1813332888)))) : (((((/* implicit */_Bool) (unsigned char)16)) ? (arr_4 [(unsigned char)0] [15U]) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]))))))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) var_4);
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) | (((/* implicit */int) (unsigned char)232))))) ? (((/* implicit */unsigned long long int) -1813332888)) : (var_1)));
                        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_2 [i_4] [i_3 - 1])) ? (arr_2 [(_Bool)0] [i_1]) : (arr_2 [i_3 - 1] [i_0])))));
                        var_17 = ((/* implicit */int) 3ULL);
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                        var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)48)), (36568951)));
                        var_20 -= max(((~(((unsigned int) (unsigned char)29)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_0)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_20 [i_6] [i_3] [i_1] [i_0] = max((((/* implicit */unsigned char) ((min((arr_17 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_0])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3 - 1] [i_3 - 1] [i_1])))))), (max((((/* implicit */unsigned char) var_12)), ((unsigned char)7))));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 3683498750U)) : (arr_18 [i_7] [i_7] [(unsigned char)5] [i_3] [2ULL] [3LL]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) -5186323619343355617LL)) ? (((/* implicit */int) (unsigned char)45)) : (arr_10 [i_0] [i_1] [i_3])))))));
                            arr_24 [i_0] [i_1] [i_3] [i_6] [i_7] [i_7] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)25094))));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((~(arr_16 [i_8] [i_6] [i_1] [i_0]))), (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)57344)))), (arr_10 [i_3 - 1] [i_3 - 1] [i_3])))))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 16382)) + (arr_1 [i_0]))))))), (max((((/* implicit */unsigned long long int) max((arr_3 [i_8] [i_0]), (((/* implicit */unsigned int) arr_19 [i_0] [i_3] [i_6]))))), (max((((/* implicit */unsigned long long int) arr_7 [i_6] [i_6] [i_6])), (17582093832707015376ULL)))))))));
                            var_23 = ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                            var_24 += ((((/* implicit */_Bool) var_0)) ? (arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))));
                        }
                    }
                }
                arr_27 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_0] [i_0] [2LL] [i_0] [i_0]))))));
                arr_28 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_0] [(_Bool)1]))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [22]))))) ? (((unsigned long long int) arr_16 [i_1] [i_0] [13ULL] [i_0])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (1919082056650535586ULL) : (5ULL)));
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(6665719198224532436LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_4)))))))) ? (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((long long int) min((var_9), (var_9))))))))));
    var_27 = var_11;
}
