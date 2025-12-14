/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30767
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) (unsigned short)34016);
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_13 &= ((/* implicit */signed char) (_Bool)1);
                        arr_10 [i_1] |= ((/* implicit */unsigned char) (!(max((((_Bool) arr_0 [i_0] [i_2])), (((((/* implicit */int) (signed char)61)) == (((/* implicit */int) (unsigned short)32907))))))));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((~(((/* implicit */int) arr_5 [i_0] [i_5]))))))), (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_5 + 1] [i_5 + 1])) / (((/* implicit */int) arr_12 [i_4] [i_5] [(signed char)20] [i_5 - 1] [i_5 - 1])))))))));
                            var_15 = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) arr_15 [i_0])))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1])))))) * (((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */short) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))));
                        }
                        arr_16 [i_0] [(unsigned char)18] [13U] [i_0] = (((_Bool)1) && (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)15] [i_0])) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_2 [i_0]))))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-13454)) > (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)20] [(short)18] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)4] [i_1] [i_1]))) | (arr_7 [i_0] [i_0]))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8)) + (((/* implicit */int) (unsigned char)8))));
                            var_19 |= ((/* implicit */signed char) max((1496408962015023787ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_20 += ((((((/* implicit */_Bool) (unsigned short)4)) ? (18076586773327493179ULL) : (((/* implicit */unsigned long long int) 904957918U)))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_10)))))));
                            arr_21 [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)9)) == (((/* implicit */int) (unsigned short)0))));
                            arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-46))))))) ? (((((/* implicit */int) ((_Bool) (_Bool)1))) << (((/* implicit */int) arr_15 [i_4])))) : (((/* implicit */int) (!(arr_15 [i_0]))))));
                            arr_23 [i_4] = ((/* implicit */unsigned short) arr_8 [4U] [4U] [4U] [i_4] [i_4] [(short)7]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (-((+(arr_14 [i_4] [i_4] [i_2] [i_4] [i_8])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 14119583226583052820ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_22 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1]))))), (((((((/* implicit */int) (unsigned char)8)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (5540917222651773891ULL)))));
                            arr_26 [i_0] [i_0] [i_2] [i_4] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? ((+(max((((/* implicit */unsigned long long int) (signed char)8)), (12905826851057777730ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_8] [i_1] [i_1] [i_1] [i_8])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2] [i_0])) >= (((/* implicit */int) (signed char)69)))))))))));
                            arr_27 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (!(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_23 *= ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) 13419751460044090622ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0]))))))));
                        var_24 = ((/* implicit */unsigned short) 4207395870U);
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_1] [i_9] = ((4207395857U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (short)-18611)) >= (((/* implicit */int) arr_5 [i_2] [(unsigned char)18])))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) -909394808)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (18207945616397332066ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)241))))))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) var_9);
    var_27 = ((/* implicit */unsigned char) var_8);
}
