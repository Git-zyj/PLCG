/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213092
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (14202296364820601759ULL) : (((/* implicit */unsigned long long int) arr_1 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5377)) ? (((/* implicit */int) var_1)) : (var_17)))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_0] [i_0]))));
                        var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)237)), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)14336)) && (((/* implicit */_Bool) (short)-5377)))))) : (arr_2 [i_1 + 1] [i_2])))));
                        var_20 += ((/* implicit */short) arr_1 [(unsigned short)14]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [i_0] [i_1] [i_4] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((signed char) arr_0 [i_2] [i_4]))), (arr_5 [i_4] [(signed char)13]))), (((/* implicit */unsigned int) (signed char)102))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)39)), ((short)-5356)))) & (((/* implicit */int) (short)-24321))))) ? ((~(arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2]))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5 - 3])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [6ULL] [i_4])) : (((/* implicit */int) (short)11692))))))))));
                            arr_17 [i_5] [i_4] [i_0] [13ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5388)) >> (((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_1 - 1])))) : (var_17)))) ? (((((/* implicit */_Bool) ((unsigned short) arr_14 [10U] [i_0] [i_1 - 1] [i_1 + 2] [i_2] [(unsigned char)4] [i_1 - 1]))) ? (((/* implicit */int) max(((short)-5358), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) var_18)))) : (((/* implicit */int) min((arr_14 [i_0] [9U] [i_0] [i_0] [i_0 - 2] [i_1 - 1] [i_5]), (((/* implicit */unsigned short) var_6)))))));
                            arr_18 [i_0 - 2] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1]))) : (495156097U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_22 [i_0 + 2] [i_0] [i_0 + 2] [(unsigned short)8] = ((/* implicit */signed char) arr_16 [i_0 + 1] [i_6]);
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-5377)) ? (((((/* implicit */_Bool) (signed char)-83)) ? (arr_12 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)181)))))));
                        }
                        for (unsigned int i_7 = 4; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)84)) && (((/* implicit */_Bool) (~(((arr_3 [7ULL] [i_1] [i_7]) | (((/* implicit */unsigned long long int) 0U)))))))));
                            var_24 = ((/* implicit */int) ((arr_0 [0U] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (short)-20017)) ? (((/* implicit */int) arr_15 [(short)1] [i_2] [i_1 - 1] [i_0])) : (((/* implicit */int) (signed char)-23)))) & (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0])))))));
                        }
                        for (unsigned int i_8 = 4; i_8 < 14; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_0 + 1] [i_0] [i_2] [i_4] [i_0 + 1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_5 [i_0 + 2] [i_0 - 3]))), ((+(arr_5 [i_0 + 2] [i_0 + 2])))));
                            var_25 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5920)) + (((/* implicit */int) (short)-32754))))))))));
                            var_26 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-5362)) : (((/* implicit */int) arr_15 [i_0] [(short)14] [i_4] [i_8]))))))));
                            arr_30 [i_0] [i_0] [i_0] [i_4] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 1])), (((unsigned short) arr_14 [i_0 - 3] [i_0 - 3] [i_1 + 1] [i_4] [i_8] [i_8 - 3] [i_0 + 2]))));
                        }
                        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((((((/* implicit */unsigned long long int) arr_25 [i_2] [i_2])) * (arr_3 [i_1] [2U] [i_4]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)12770)), (arr_16 [i_4] [i_1])))))))));
                    }
                    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-100))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 14; i_9 += 2) 
    {
        for (unsigned int i_10 = 4; i_10 < 14; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
                    {
                        var_30 ^= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11] [i_11])) ? (((/* implicit */int) arr_34 [i_9])) : (((/* implicit */int) arr_35 [i_10 + 1] [i_11 - 1]))))))));
                        arr_40 [2ULL] = ((/* implicit */_Bool) arr_32 [i_9] [i_10 - 1]);
                        arr_41 [i_9 + 1] [i_10 + 1] [i_11] [i_12] |= ((/* implicit */unsigned short) arr_37 [i_11 + 1] [i_11 + 1]);
                        arr_42 [i_12] [(short)7] [i_11] [i_10] [i_9 + 1] [i_9] = ((/* implicit */unsigned int) (signed char)22);
                    }
                    var_31 ^= ((/* implicit */_Bool) ((unsigned short) arr_34 [i_10]));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) 0ULL)) ? (4811058609709830874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
    var_33 = ((/* implicit */short) var_3);
}
