/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211324
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
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (short)(-32767 - 1));
        var_20 = ((/* implicit */int) ((signed char) ((unsigned int) 3482965994544299705ULL)));
    }
    var_21 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */unsigned char) var_4);
                                arr_19 [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((short) ((int) ((unsigned char) arr_12 [6] [i_2] [i_2]))));
                                arr_20 [19ULL] [i_2] = ((((/* implicit */unsigned long long int) var_17)) < (((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1 + 3] [i_1 - 2])) ? (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_1])) : (arr_15 [i_1] [i_1] [i_3] [i_4]))) : (max((var_4), (3482965994544299711ULL))))));
                            }
                        } 
                    } 
                    var_22 = min((((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_2] [i_1 + 3]))) : (arr_14 [i_1 - 1] [i_2] [i_3] [i_3] [i_3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_2]))) : (1661254389U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2])) ? (arr_15 [i_1] [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_1 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])))))) : (arr_16 [i_3] [i_3] [i_2] [i_1])));
                    var_24 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_3]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) arr_4 [i_6] [i_8]);
                    arr_31 [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) var_14);
                    var_26 = ((/* implicit */short) (((~(arr_3 [i_8]))) < (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_8 [i_6] [i_7])) : (arr_3 [i_8])))));
                    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_7] [i_6] [i_8])) ? (1661254389U) : (var_18)))) ? (((((/* implicit */_Bool) arr_24 [i_6] [10])) ? (var_6) : (((/* implicit */int) arr_12 [i_6] [i_7] [i_6])))) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)242)), ((unsigned short)0)))) : ((+(((/* implicit */int) arr_17 [i_6] [i_7] [i_8] [(signed char)7] [i_7] [i_6] [(short)18]))))))));
                    var_28 = ((/* implicit */unsigned long long int) ((var_18) / (var_15)));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_6])) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) var_9))))) ? ((+(1661254389U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_9] [i_7] [i_9] [i_10] [i_7] [i_7])) || (((/* implicit */_Bool) (unsigned char)98))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_43 [i_6] [i_7] [i_9] [i_6] [i_7] = ((/* implicit */short) var_13);
                            arr_44 [i_6] [(short)14] [i_7] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1832434088)) || (((/* implicit */_Bool) ((arr_22 [i_6]) / (((/* implicit */int) var_11)))))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_36 [i_6] [i_7] [i_9] [i_10] [i_6]))));
                            var_31 = ((/* implicit */unsigned char) arr_22 [i_6]);
                            arr_45 [i_6] [i_7] [i_9] [i_6] [i_6] = ((/* implicit */_Bool) var_12);
                        }
                    }
                    arr_46 [i_6] = ((((/* implicit */_Bool) ((unsigned short) 7U))) ? (((/* implicit */int) var_1)) : (arr_34 [i_9] [i_6] [i_6] [i_6]));
                }
                arr_47 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [i_6] [i_7])))) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_7] [i_7])) ? (max((((/* implicit */int) (unsigned short)8592)), (arr_3 [i_7]))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) || (((/* implicit */_Bool) (unsigned char)233))))))) : (min((((/* implicit */int) ((short) 14963778079165251911ULL))), ((~(((/* implicit */int) (unsigned char)36))))))));
            }
        } 
    } 
}
