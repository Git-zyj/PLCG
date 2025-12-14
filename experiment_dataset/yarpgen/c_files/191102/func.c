/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191102
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
    var_10 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_5 [i_1 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_12 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)59901), (((/* implicit */unsigned short) (_Bool)1)))))) | (min((arr_1 [i_1 - 2] [i_1 + 4]), ((~(arr_1 [i_0] [(unsigned char)8]))))));
                        arr_8 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 + 2])) ? (6846453149318534154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [6ULL]))))))));
                        var_14 -= ((/* implicit */short) min(((((+(11600290924391017462ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33175)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_4]))) : (arr_6 [i_4] [i_4] [i_4] [i_4])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_4])))))));
                        var_15 = ((max((((/* implicit */unsigned int) (unsigned short)29782)), (514497856U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_4]))));
                    }
                    for (long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((arr_11 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_5])))), (arr_5 [0])))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) 1330550406U);
                            arr_15 [i_0] [i_1] [i_0] [i_5] [i_6 + 1] = ((/* implicit */long long int) (signed char)-25);
                        }
                        for (int i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            arr_18 [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [7ULL] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_5] [i_5] [i_7]))))) ? (((((/* implicit */_Bool) arr_11 [i_0])) ? (6846453149318534157ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))), (((((/* implicit */_Bool) var_6)) ? (6846453149318534154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7])) || (((/* implicit */_Bool) arr_5 [i_0]))))))))));
                            var_18 = ((/* implicit */unsigned short) min(((unsigned char)75), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_5 + 1] [i_5 + 1] [i_7 - 1] [i_1 + 4] [i_1])) && ((!(((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_7] [i_2] [i_5 - 1] [i_7])))))))));
                        }
                        for (int i_8 = 3; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((var_9), (((/* implicit */short) arr_0 [i_0] [i_5 - 3])))))));
                            arr_22 [i_1] [2ULL] [i_2] [i_2] [i_8] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_5 - 3] [i_5 - 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_7 [i_1] [i_1]) : (var_0)))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(829806764)))) ? (((/* implicit */int) (short)27653)) : (((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (int i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_29 [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-33)), ((short)10304)))), (0ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                                arr_30 [i_10] [(unsigned char)0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3056)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_9] [i_9] [i_10 - 1])) : (min((11600290924391017482ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                var_21 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned short)65535)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        for (signed char i_12 = 1; i_12 < 16; i_12 += 4) 
        {
            {
                arr_35 [16] [i_11] [i_11] = ((/* implicit */unsigned char) ((((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1])))))))) ? (max((((/* implicit */int) arr_20 [i_11] [i_11] [i_12 - 1])), (((((/* implicit */_Bool) (short)-32751)) ? (-1572836161) : (((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_11] [i_12 + 1] [i_12] [8])))))) : (min((((/* implicit */int) (unsigned short)45365)), (((arr_28 [i_11] [i_11] [i_11] [i_12] [i_12] [i_12 - 1] [i_12]) ? (((/* implicit */int) (short)6186)) : (((/* implicit */int) arr_0 [i_11] [i_11]))))))));
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_12 + 1] [i_12]))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) * (var_3)));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)24395), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (((8905560694273727626ULL) << (((((/* implicit */int) var_2)) - (120)))))))));
}
