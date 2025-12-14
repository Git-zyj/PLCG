/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2523
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
    var_19 = ((/* implicit */int) var_10);
    var_20 *= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))), (max((10543731700794839022ULL), (((/* implicit */unsigned long long int) -1920872703)))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) -1272679087)), (var_18))) > (min((var_18), (((/* implicit */unsigned long long int) var_7)))))))));
    var_21 = ((/* implicit */_Bool) 3030002065U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_22 *= ((/* implicit */short) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 2])) : (14U)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 8; i_3 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (var_17)))) ? (((((/* implicit */_Bool) (unsigned short)31078)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) : (-1313152282))))));
                        arr_10 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) ? (((/* implicit */int) (!(arr_1 [i_2])))) : (arr_4 [i_0 - 2] [i_3 - 2])));
                    }
                    for (unsigned int i_4 = 4; i_4 < 8; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) ((var_9) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_1 [7LL])))));
                        var_24 = ((/* implicit */short) var_10);
                        var_25 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_5)));
                        var_26 = ((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_1] [i_2] [i_4 - 3]);
                        arr_14 [(_Bool)0] [i_2] [i_4 - 3] = ((/* implicit */short) arr_4 [i_2] [i_4 - 1]);
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((arr_11 [i_0 + 1] [i_2] [i_2] [i_2] [i_0 - 1]) - (((/* implicit */unsigned int) arr_3 [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_1] [i_2] [i_5 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (18056154659286789555ULL) : (((/* implicit */unsigned long long int) arr_4 [i_2] [(unsigned short)4])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5])))));
                        var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5]))) <= (0U)));
                    }
                    for (unsigned short i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 + 3] [i_6 + 3] [i_6] [i_6]))) < (1163418093U))))));
                            arr_23 [i_0] [i_2] [i_2] [i_6 + 2] [i_7] = var_3;
                        }
                        for (short i_8 = 2; i_8 < 6; i_8 += 4) 
                        {
                            var_29 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_27 [i_0] [i_8 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9))))) : (arr_26 [(_Bool)1] [i_6] [i_2] [i_1] [i_1] [(short)1] [i_0])));
                            arr_28 [i_0] [i_2] [i_0] [i_2] [i_2] [i_6] [i_8] = ((/* implicit */int) arr_27 [i_0] [i_0]);
                        }
                        arr_29 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (var_6))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((_Bool) var_9));
                                var_31 = ((/* implicit */long long int) max((var_31), (((long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (9ULL))))));
                                arr_37 [i_9] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3566082577U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (2221019689358557952ULL)))) ? (((/* implicit */int) var_3)) : (((var_13) % (((/* implicit */int) (short)21490)))));
                                var_32 &= ((/* implicit */int) ((_Bool) arr_33 [i_9] [i_9] [i_0 + 2]));
                                arr_38 [8U] [8U] [i_9] [i_9] [i_10] &= ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)65529)))) / (((arr_7 [i_10] [2ULL] [i_0] [i_10]) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32777))) - (9)))))));
                            }
                        } 
                    } 
                    var_33 *= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 2])) | (((/* implicit */int) arr_2 [i_0 - 2]))));
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) 11136865435164591997ULL))));
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_39 [i_11] [i_11])) / (((/* implicit */int) arr_39 [i_11] [i_11])))));
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)41028)) : (arr_41 [i_11])))) ? (((var_9) ? (((/* implicit */int) (unsigned char)126)) : (arr_40 [i_11] [i_11]))) : (((/* implicit */int) var_0))))));
    }
    var_35 = ((/* implicit */unsigned short) ((unsigned int) ((var_10) >> (((max((var_6), (((/* implicit */unsigned long long int) var_2)))) - (12140882705060876517ULL))))));
}
