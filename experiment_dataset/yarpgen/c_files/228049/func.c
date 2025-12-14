/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228049
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1])) - (((((/* implicit */_Bool) (short)19336)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (short)-23426))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((var_1) ? (((arr_2 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 1] [i_2 - 2]))) : (((1338283543560812165ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)11])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (~((-(((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((unsigned long long int) (short)23426)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) max(((short)1), (((/* implicit */short) (_Bool)0))))) : (((((/* implicit */_Bool) 9033584467759833021ULL)) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) arr_10 [(short)11]))))))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) / (((/* implicit */int) (short)15912))))) ? (((/* implicit */int) ((unsigned char) (short)8609))) : (((((/* implicit */int) (unsigned char)170)) + (((/* implicit */int) arr_1 [(unsigned char)5])))))) & (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3]))))))));
                                var_24 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)216)))), ((-(((/* implicit */int) arr_21 [i_3] [i_7] [i_7 - 1] [i_3] [i_5] [i_4] [i_3]))))));
                                arr_23 [i_5] [i_4] [i_3] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_6] [i_5] [i_4] [i_3])) >> (((/* implicit */int) arr_18 [i_4] [i_4] [i_5] [i_6]))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)115)) <= (((/* implicit */int) arr_1 [i_5]))))))) : ((+(((/* implicit */int) max((((/* implicit */short) arr_5 [i_3] [i_3] [i_3])), ((short)23409))))))));
                            }
                        } 
                    } 
                    var_25 -= var_5;
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) < (((/* implicit */int) ((var_15) || (((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_0 [i_5]))))))))));
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) ((short) max((arr_12 [i_3]), (arr_20 [(_Bool)1])))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [(_Bool)1] [i_4] [(_Bool)1] [i_3] = ((/* implicit */_Bool) var_13);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned char)197))));
                        var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-23427))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_16 [i_3])) : (((/* implicit */int) min((arr_16 [i_3]), (arr_16 [i_3]))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [(short)4])))), (((/* implicit */int) (short)15912)))))));
                        var_32 &= ((/* implicit */short) ((max((arr_18 [i_3] [i_4] [i_8] [i_10]), (arr_18 [i_3] [(_Bool)1] [i_3] [i_3]))) ? (((((/* implicit */int) arr_18 [i_8] [i_8] [(unsigned char)5] [i_3])) | (((/* implicit */int) arr_18 [i_3] [i_4] [i_8] [i_10])))) : (((/* implicit */int) max((((/* implicit */short) arr_18 [i_3] [i_4] [i_8] [i_10])), ((short)-23426))))));
                        var_33 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-24686)))) : (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-4964))))))) < (((((((/* implicit */_Bool) (short)0)) ? (arr_31 [i_3] [i_3] [i_4] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))));
                    }
                    for (short i_11 = 2; i_11 < 11; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)115)))))));
                        arr_34 [(_Bool)1] [i_4] [(short)4] [i_11] |= ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_21 [i_4] [(unsigned char)10] [i_8] [i_4] [i_4] [i_3] [i_4])) : ((+(((/* implicit */int) (unsigned char)255))))));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                        arr_35 [(short)8] [i_3] [i_4] [i_3] [i_8] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_11 - 2])) | (((/* implicit */int) arr_18 [i_3] [i_4] [i_8] [i_11 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3]))) : (max((((((/* implicit */_Bool) arr_8 [i_8])) ? (arr_29 [i_3] [(_Bool)1] [i_3] [i_3] [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16876))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3])))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_40 [i_3] [i_4] [i_8] [i_12] = ((/* implicit */_Bool) arr_19 [i_3]);
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (17589732170818258453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4])))))) ? (((((/* implicit */int) arr_22 [i_3])) + (((/* implicit */int) arr_14 [i_13] [i_8] [i_4] [i_3])))) : (((/* implicit */int) arr_14 [i_13] [i_8] [i_4] [i_3])))))));
                        }
                        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) arr_39 [i_3] [i_3] [(_Bool)1] [i_12] [i_4])) : (((((/* implicit */int) arr_6 [i_12] [i_4])) + (((/* implicit */int) (short)-23426))))))) ? (((/* implicit */int) ((unsigned char) var_18))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_28 [i_3] [i_3] [i_12] [i_4])) : (((/* implicit */int) arr_39 [i_4] [i_12] [i_8] [(_Bool)1] [i_4]))))));
                            var_38 = ((/* implicit */_Bool) var_11);
                            arr_43 [i_3] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3]))))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_47 [i_3] [i_3] [(short)4] [i_12] [(short)2] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_32 [i_4] [i_3] [i_12] [i_3])))))) - (((((/* implicit */int) var_0)) + ((-(((/* implicit */int) arr_41 [i_3]))))))));
                            arr_48 [i_3] [i_4] [i_3] [(short)4] [i_15] = ((/* implicit */_Bool) max((((((/* implicit */int) (!(((/* implicit */_Bool) 18099267901454300741ULL))))) * (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                        }
                        arr_49 [i_3] [i_4] [i_3] [i_3] = var_16;
                    }
                }
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))))));
            }
        } 
    } 
}
