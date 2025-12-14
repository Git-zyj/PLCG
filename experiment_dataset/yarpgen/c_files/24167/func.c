/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24167
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
    var_18 = ((/* implicit */long long int) 2147483647);
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (min((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1 - 3] [i_0]);
            arr_7 [i_0] [i_0] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((12546948569708861186ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))))));
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)178)) <= (((/* implicit */int) (short)-23577))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)108)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_13 [i_4 - 1]))) > (((/* implicit */int) arr_17 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_2 - 1]))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_3] [i_5]))))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) : ((~(((/* implicit */int) var_9))))));
                            arr_19 [i_2] [2ULL] = ((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 - 1] [i_3] [i_4 - 2] [i_4 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_17 [i_0] [i_2] [i_0] [i_0] [i_4 - 1] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] [i_4 - 1] [i_2 - 1])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
                            var_24 = arr_15 [i_2];
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 2) 
                        {
                            var_25 = ((((/* implicit */int) arr_20 [i_0])) < (((/* implicit */int) arr_20 [i_2])));
                            arr_24 [i_0] [(_Bool)1] [i_3] [(unsigned short)0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0]);
                            arr_25 [i_7] [i_3] [i_2] [i_2] [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (arr_23 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned char)0]) : (arr_23 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4 - 2] [i_7 - 3])));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4])))))) <= (arr_9 [i_2] [i_2] [i_3])));
                            arr_26 [i_0] [i_0] [i_7 + 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_3] [i_4 - 2] [i_2] [i_3]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) (_Bool)1);
                            arr_29 [i_2] [i_8] [i_3] [8U] [i_2] = ((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_2] [i_2] [i_3] [i_4] [i_8]));
                            arr_30 [i_0] [i_2 - 1] [i_3] [i_4 - 1] [i_3] &= ((/* implicit */long long int) ((_Bool) arr_23 [i_2] [i_4 + 1] [i_8] [i_8] [i_8] [i_8] [i_4 + 1]));
                        }
                        var_28 = ((/* implicit */short) ((_Bool) arr_16 [i_0] [i_2] [i_3] [i_4 - 1] [i_2 - 1]));
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)1)) + (-2028898379))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9])))))) ? (((/* implicit */int) ((signed char) arr_31 [i_9]))) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)255))))))) : (min((arr_34 [i_9]), (arr_34 [i_9])))));
        var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 351269493)), (max((((/* implicit */unsigned int) 2147483647)), ((+(2418369344U)))))));
        arr_36 [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [i_9])) || (((/* implicit */_Bool) arr_33 [i_9])))) ? (((/* implicit */int) min((arr_31 [i_9]), (arr_31 [i_9])))) : (min((((/* implicit */int) arr_31 [i_9])), (arr_33 [i_9])))));
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        arr_40 [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) arr_38 [i_10] [i_10])), ((-(((/* implicit */int) arr_32 [i_10])))))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_10] [i_10]))))) ? (arr_34 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_38 [i_10] [i_10]), (arr_38 [i_10] [i_10])))))));
        arr_41 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) ((unsigned short) arr_37 [i_10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        arr_45 [i_11] = ((/* implicit */long long int) (unsigned short)0);
        var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((int) arr_17 [i_11] [i_11] [i_11] [i_11] [(_Bool)0] [i_11])), (((/* implicit */int) ((arr_10 [(short)8] [i_11] [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))), (((((arr_34 [i_11]) + (((/* implicit */long long int) var_12)))) + (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11] [i_11])))))));
    }
}
