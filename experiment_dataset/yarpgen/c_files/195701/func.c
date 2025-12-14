/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195701
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)24))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_10);
                            arr_13 [i_0] [i_2] [i_4] [i_2 + 1] = ((/* implicit */unsigned short) var_8);
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_11) : ((+(arr_8 [i_0] [i_0] [i_0] [i_0]))))) << (((((/* implicit */int) arr_4 [i_0] [i_0])) - (19645)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 &= ((/* implicit */signed char) max(((-(((15612672612277749073ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))))))), (((/* implicit */unsigned long long int) max(((-(var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) -9LL))))))))));
                            var_20 = (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)10)), (var_9)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)-25192)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_19 [i_1] [i_2] [i_1] [(unsigned short)10] [i_1] [i_1] = ((((/* implicit */int) (short)-25202)) | (max((((((/* implicit */_Bool) 8693055811062258596ULL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (-5LL))), ((~(var_13)))))) ? (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((9753688262647293045ULL) << (((/* implicit */int) var_15)))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (max((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [4ULL])), (var_4)))))))));
                            var_22 = (short)-25197;
                        }
                        arr_20 [i_2] [i_2] = var_0;
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_8), ((+((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_31 [i_10] [i_10] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_24 [i_10]), (((/* implicit */long long int) (!((_Bool)1))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_9] [i_10]))) + (var_16)))), ((+(var_9)))))));
                            var_24 = ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_8)) | (arr_26 [20U]))), (((/* implicit */long long int) (short)-25194))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_10])) : (((/* implicit */int) (short)-27210)))) : (((((/* implicit */_Bool) 1553969308886750407ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_32 [i_7] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)41)), (var_13)));
                /* LoopSeq 1 */
                for (long long int i_11 = 4; i_11 < 23; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 2; i_12 < 23; i_12 += 2) 
                    {
                        var_25 *= ((/* implicit */signed char) var_9);
                        arr_38 [i_12] [i_11] [i_8] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1553969308886750407ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((1553969308886750407ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -8206346581038080264LL)))))))));
                        arr_39 [i_7] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [(signed char)14])) ? (((/* implicit */int) (unsigned short)44775)) : (((/* implicit */int) arr_25 [i_7]))))), (var_16))))));
                        arr_40 [i_12] [12ULL] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)7552)))) ? (min((((/* implicit */long long int) arr_30 [i_11] [i_12])), (-2639619665478313280LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? (((unsigned int) arr_36 [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3])) : (((((/* implicit */_Bool) ((signed char) (unsigned short)6278))) ? (((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_12] [14ULL])) ? (arr_30 [i_7] [i_11]) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_7] [i_11 + 2] [i_12])))))));
                        var_26 = min((((/* implicit */unsigned long long int) (-(min((arr_24 [i_11]), (((/* implicit */long long int) var_7))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) -2846297148248322415LL)) : (8693055811062258603ULL))));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 4) 
                    {
                        arr_43 [i_13 - 1] [5] [i_11 - 2] [5] [i_8] [i_7] = ((/* implicit */unsigned short) 8693055811062258598ULL);
                        var_27 = ((/* implicit */short) max((arr_42 [i_7] [i_7] [i_7] [i_13]), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_10)), (9753688262647293020ULL))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_7]))))))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (unsigned char)15))));
                    }
                    var_29 -= ((/* implicit */short) (-(max((((/* implicit */long long int) max((((/* implicit */short) arr_37 [i_11] [i_7] [i_7])), (var_2)))), (4611686018427387904LL)))));
                    var_30 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) != (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_34 [i_7] [i_7] [i_8] [i_7])) : (var_8))))));
                }
                arr_44 [i_7] = ((/* implicit */short) (~(((/* implicit */int) arr_25 [(unsigned short)1]))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) var_15))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_3)))) >= (((((/* implicit */_Bool) var_7)) ? (8693055811062258596ULL) : (((/* implicit */unsigned long long int) var_13))))))));
}
