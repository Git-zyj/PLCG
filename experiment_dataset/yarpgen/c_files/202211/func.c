/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202211
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)107)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (0ULL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_0)))))))) : (max((min((var_12), (var_12))), (((/* implicit */unsigned long long int) ((signed char) (signed char)0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((signed char) 1514277961262583658ULL))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_3 - 2]))))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)108), ((signed char)125)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)9077))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (3295185014U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) + (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        }
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (arr_3 [i_1 + 2] [(signed char)17])))), (((((/* implicit */_Bool) arr_15 [i_1 + 2] [9U] [9U] [i_1 + 2] [(unsigned short)24] [9U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (var_9)))));
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_2 [i_1 + 2] [i_3 - 2]), (var_1))))));
                        arr_16 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) 3295185004U);
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned long long int) 999782286U)), (var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9088))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (999782289U)))) ? (((((/* implicit */_Bool) 8195759653141389865ULL)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))) : (min((8195759653141389865ULL), (((/* implicit */unsigned long long int) var_10))))))));
                        arr_19 [i_0] = arr_2 [i_0] [i_1 + 2];
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9053)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (arr_3 [(unsigned char)14] [i_1 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned char)13] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(signed char)23])) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11)))))))));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((max((var_17), (((/* implicit */unsigned short) arr_22 [i_0] [i_0])))), (((/* implicit */unsigned short) arr_20 [(signed char)6] [(signed char)6] [(signed char)13] [i_6] [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_0] [(unsigned short)18] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1 + 1] [i_1 + 2]) : (arr_3 [i_1 + 1] [i_1 + 2])));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_0] [i_1] [1ULL] [i_7] [i_0] [19U]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2]))) : (10250984420568161750ULL)))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(unsigned char)11] [i_1] [i_1] [i_7] [i_0] [i_2] [i_7])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_0] [i_1 - 1])))) : (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_30 [(unsigned short)18] [i_7] [(unsigned short)18] [(signed char)6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)118)) | (((/* implicit */int) (unsigned short)3))));
                            var_28 = ((/* implicit */unsigned char) arr_10 [i_8] [i_7] [i_7] [i_2] [i_1] [i_0]);
                            arr_31 [i_0] [i_0] [21U] [23U] = ((/* implicit */unsigned char) var_17);
                            var_29 = 999782307U;
                        }
                    }
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) 999782289U);
                }
            } 
        } 
    } 
}
