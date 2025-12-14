/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44826
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
    var_16 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */signed char) arr_5 [i_2] [9LL] [i_2]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])))))) + (-2922140514695348598LL)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((unsigned short)65529), (((/* implicit */unsigned short) (signed char)-14)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) arr_14 [i_5 - 1] [i_4] [i_3] [i_0 + 1]);
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) arr_9 [i_4] [i_3] [(unsigned char)4] [(unsigned char)4])) : (((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [(_Bool)1]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (2922140514695348587LL)))) ? (((14983093601341934874ULL) / (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3])))) : (((/* implicit */unsigned long long int) var_2)))) : (min((((/* implicit */unsigned long long int) 307085992139984750LL)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_12 [i_0 - 4] [i_3] [i_4] [i_5 + 2]))))));
                                arr_20 [i_5] [i_5] [i_3] [i_1] [i_5] [(unsigned char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-2922140514695348587LL))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)30419))) == (-2922140514695348587LL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-7))))) : (((((/* implicit */_Bool) var_8)) ? (11593718628040785168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(short)10] [i_0 + 1] [(unsigned short)21])))))))));
                                arr_21 [i_5 - 1] [i_5] [i_3] [i_5] [i_0] = ((/* implicit */unsigned short) (~((~(arr_19 [(unsigned char)3] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))));
                                var_20 = ((/* implicit */int) var_14);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31052))) | (((((/* implicit */_Bool) 2922140514695348587LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6581712759081773761LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) var_15);
                                arr_26 [i_7] [i_7] [(short)21] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 2] [i_0]))));
                                var_24 = arr_14 [i_0] [i_0] [i_0] [i_7];
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_34 [i_10] [i_9] [(signed char)0] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) 2922140514695348614LL);
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_10] [i_9]))))) ? (((/* implicit */unsigned long long int) ((min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)-13268)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_9] [i_8] [i_9]))))), (var_5)))));
                            }
                        } 
                    } 
                    var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13186))) > (((((/* implicit */_Bool) arr_33 [i_0] [i_0 - 1] [i_0 - 1] [(signed char)11] [i_0] [(_Bool)1])) ? (arr_33 [i_8] [i_8] [i_0 - 3] [i_0] [i_0] [i_0 - 1]) : (arr_33 [i_8] [0U] [i_0 - 2] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_39 [i_1] [i_12] = ((/* implicit */signed char) (((~(17575006175232ULL))) << (min((max((arr_12 [i_0] [i_1] [i_8] [i_11]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned char)7))))));
                                var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 15763599944905592211ULL)) ? (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_24 [i_0 + 1])) ? (var_2) : (var_8)))))));
                                arr_40 [(_Bool)1] [(_Bool)1] [i_12] [i_1] [i_1] [i_1] [6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(-2922140514695348614LL))) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [i_0 - 3] [(signed char)8] [i_11] [i_12 - 1] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_0] [i_12 - 1] [i_8] [i_0 - 1])))) : (((((/* implicit */int) (short)13186)) >> (((((/* implicit */int) (signed char)-16)) + (33)))))));
                            }
                        } 
                    } 
                }
                for (short i_13 = 2; i_13 < 21; i_13 += 3) 
                {
                    arr_43 [i_0] [i_13] [7U] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)1023)) ? (arr_5 [i_1] [i_13 + 2] [i_13]) : (((/* implicit */long long int) var_2))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [8LL] [i_1] [i_13] [i_1])) ? (10148915115609713769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_0 - 4] [i_0 - 4] [(signed char)4] [i_13 + 2])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_14 [i_1] [(short)5] [(_Bool)1] [i_13 + 1])) | (((/* implicit */int) arr_11 [i_0] [(signed char)18] [i_13 - 2] [i_13]))))));
                    arr_44 [i_0] [i_0] [i_13] &= ((/* implicit */long long int) arr_9 [i_13 + 1] [12] [i_13 + 1] [i_13 + 1]);
                }
                /* LoopNest 3 */
                for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) max((((/* implicit */int) arr_49 [i_1] [i_0 + 1] [i_0 - 4] [i_15] [i_0 - 4])), ((-(((/* implicit */int) arr_49 [i_14] [i_0 - 1] [i_16] [i_15] [(short)10]))))));
                                arr_53 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
