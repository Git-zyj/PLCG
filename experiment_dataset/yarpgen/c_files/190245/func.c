/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190245
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (16964044390721691614ULL)));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((165955336U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))) : (18446744073709551615ULL)));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((var_8), (((/* implicit */long long int) var_7))))))) : (var_9))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [11ULL] [i_1] [i_2] = ((/* implicit */unsigned char) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) arr_7 [(short)23] [i_0] [10LL] [i_0])) ? (arr_6 [(unsigned short)11] [i_3] [i_4]) : (arr_6 [i_0] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))))))));
                                var_15 = ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (signed char)-71)));
                                var_16 = ((/* implicit */short) (signed char)70);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */int) ((2941237656U) ^ (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)4002)))))))));
                        var_18 = ((/* implicit */short) (!(((((/* implicit */int) arr_5 [i_0 - 2])) < (((/* implicit */int) arr_5 [i_1]))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_19 = min((((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) (signed char)70)), (arr_21 [22] [i_2] [i_1]))))), (min((((var_8) ^ (((/* implicit */long long int) 1353729633U)))), (((/* implicit */long long int) arr_1 [i_1] [i_2])))));
                            arr_22 [i_0] [i_2] [i_5] [i_6] = (~(min((3128779527513776746ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                            var_20 = ((/* implicit */signed char) 2628034336740500036ULL);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_2] [22] [i_2] [i_2] [i_2] [i_0] [i_2])) ^ (((/* implicit */int) ((unsigned short) var_1))))))));
                            var_22 = ((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_2]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (11292756488232892036ULL))), (((/* implicit */unsigned long long int) arr_17 [i_7]))))) ? (((((/* implicit */_Bool) (-(var_9)))) ? ((+(arr_0 [i_7]))) : (((/* implicit */unsigned long long int) (-(0LL)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_7])) : (((/* implicit */int) arr_5 [i_0])))))))));
                            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0 - 2] [17LL] [i_0 - 3] [i_0 - 3] [13U] [i_5 + 3]))) * (((/* implicit */int) var_6))));
                        }
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        arr_28 [i_8] [i_1] [i_2] [i_8] = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) * (((/* implicit */int) arr_4 [i_0 - 3] [i_1] [i_2]))))) * (min((0U), (((/* implicit */unsigned int) (unsigned short)57520)))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_2] [i_8])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_15 [(signed char)22] [i_2] [i_1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)17314)))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_6)))) == (arr_13 [i_8 + 2])))) : ((-(min((arr_23 [i_0 - 2] [14U] [i_8] [i_8 - 1] [i_8]), (((/* implicit */int) (unsigned short)52926))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18078929630040428514ULL)) ? (1519195908) : (((/* implicit */int) (signed char)-71))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        for (short i_10 = 2; i_10 < 16; i_10 += 2) 
        {
            for (unsigned char i_11 = 4; i_11 < 16; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        for (int i_13 = 3; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_11 - 2] [i_11] [i_11] [i_13] [i_13])) ? (((/* implicit */int) arr_4 [i_10 - 1] [i_11 - 4] [i_13 + 1])) : (((/* implicit */int) arr_36 [i_9] [i_11 - 3] [i_11] [i_12] [i_13] [i_9]))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_10 - 1]))) | (var_10)))));
                                var_28 = ((/* implicit */unsigned long long int) ((arr_14 [i_9] [i_10 - 1] [i_11] [i_10 - 1] [i_9]) ? (((((/* implicit */_Bool) arr_4 [i_13 + 1] [i_12 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : ((+(arr_1 [i_9] [i_11]))))) : (((/* implicit */int) (unsigned char)5))));
                                var_29 = -1282725161;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max(((+((+(arr_42 [i_9] [i_9] [i_11] [i_14] [i_15]))))), ((-(max((((/* implicit */long long int) arr_12 [i_14] [i_15] [i_11] [i_14] [i_11])), (var_9))))))))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_11])) ? (arr_19 [i_9] [i_9] [i_11] [i_14] [i_15]) : (((/* implicit */int) arr_25 [i_9] [0] [i_9] [i_10] [i_10] [20]))))) / (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [i_10 - 2] [i_11] [(short)9]))))))), ((+(((arr_6 [i_15] [i_10] [i_11]) / (var_8))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
