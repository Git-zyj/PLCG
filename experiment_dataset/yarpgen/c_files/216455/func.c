/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216455
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (-((~((-(18446744073709551607ULL)))))));
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) var_10)) != (((/* implicit */int) arr_4 [i_0] [i_0 - 1])))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (-((+(18014398509481983LL)))));
                            arr_11 [(signed char)14] [i_1 + 2] [i_1] [i_3 - 1] = ((/* implicit */short) (+((~((+(((/* implicit */int) (unsigned short)57440))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_17 &= (+(((int) (unsigned short)26332)));
                        arr_18 [i_0 - 1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)39204)) % (((/* implicit */int) (unsigned short)39203))))));
                    }
                    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 2147483647)) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1])))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_8 [i_0] [i_0] [3] [i_1])))) ? (((/* implicit */int) ((short) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [(unsigned short)10] [i_1]))))))) % (((/* implicit */int) ((((6114771287049095560ULL) * (((/* implicit */unsigned long long int) arr_13 [i_4])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_1]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_1] [i_1 + 1] [i_1]))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) var_10))))));
                    var_20 ^= ((/* implicit */unsigned char) 1475568122);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_1 - 1] [(unsigned short)13] [i_7] [i_8] [(unsigned short)13] [i_7] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_7 [i_1]))))));
                                arr_29 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((-156375260) + (156375287)))))) : (12331972786660456062ULL)));
                                arr_30 [i_8] [i_7] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (_Bool)1));
                            }
                        } 
                    } 
                    var_21 |= ((unsigned int) ((((/* implicit */int) var_11)) & (arr_3 [i_6] [i_6] [i_6])));
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))) && (((/* implicit */_Bool) var_3))));
                        var_23 -= ((/* implicit */int) (unsigned short)65528);
                    }
                    var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)39203)) && (((/* implicit */_Bool) 664074764U))))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((((/* implicit */_Bool) 28639424077060216LL)) && (((/* implicit */_Bool) arr_36 [i_1 - 1])))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                {
                    arr_39 [i_1] [i_1] [i_1] [i_11] = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_1] [(unsigned short)0]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)247)))));
                    arr_40 [i_1] [i_1] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1] [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_1] [16]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39204)) || (((/* implicit */_Bool) (unsigned short)38443))))));
                }
                arr_41 [i_1] [i_1] [16U] = ((int) max((((((/* implicit */_Bool) arr_27 [i_0] [i_1 + 2])) ? (131470738795973781ULL) : (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)52913)))));
            }
        } 
    } 
    var_26 = (((!(((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */unsigned long long int) 17714554)) | ((~(13739989910173347047ULL))))));
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) var_10)))), (var_12)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)39213), (((/* implicit */unsigned short) var_13))))) | (((/* implicit */int) (unsigned char)248)))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                            {
                                arr_56 [i_12] [i_12] = ((/* implicit */_Bool) (~(min((arr_37 [i_12] [i_12] [i_12]), (arr_37 [i_13] [i_13] [i_12])))));
                                arr_57 [i_15] [(unsigned short)9] [i_15] [i_15] [9U] = ((/* implicit */unsigned int) (~(((((var_7) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_14] [i_14]))) + (12331972786660456056ULL))) : (((/* implicit */unsigned long long int) var_6))))));
                                arr_58 [i_12] [(unsigned short)11] [i_13] [i_14] [i_13] [i_12] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) -236059276)) : (arr_37 [i_12] [i_12] [i_12])))) ? (min((((/* implicit */unsigned int) arr_34 [(unsigned char)19] [i_13] [i_16] [(signed char)2] [i_16] [i_14])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_36 [i_13])))))))) >> (((((((/* implicit */_Bool) ((arr_23 [i_12] [i_12] [i_12] [i_12] [i_12]) ? (arr_6 [i_12] [i_14] [i_14] [i_15]) : (316525385)))) ? (((((/* implicit */_Bool) -316525387)) ? (((/* implicit */int) (unsigned short)26322)) : (((/* implicit */int) (signed char)14)))) : (((/* implicit */int) arr_17 [i_16] [i_12] [i_12] [i_12])))) - (26303)))));
                            }
                            for (short i_17 = 0; i_17 < 17; i_17 += 1) 
                            {
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12] [i_13] [i_13] [i_13] [i_13]))))))) : (((/* implicit */int) var_10)));
                                var_29 = ((/* implicit */unsigned char) ((_Bool) min((17670320425620286040ULL), (((/* implicit */unsigned long long int) arr_61 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))));
                            }
                            var_30 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_15] [i_13] [i_15])) || (((/* implicit */_Bool) arr_14 [i_14] [i_13] [i_14]))))), (max((arr_14 [i_12] [i_13] [i_12]), (arr_14 [i_12] [i_14] [i_15]))));
                            var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_19 [i_12] [i_13] [i_14] [i_14])) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_36 [i_13]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
