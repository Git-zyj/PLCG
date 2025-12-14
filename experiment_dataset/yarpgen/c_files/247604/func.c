/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247604
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */signed char) (((+(7243777469974561219ULL))) * (((/* implicit */unsigned long long int) (~(arr_3 [i_0 - 1]))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((11202966603734990420ULL) - (11202966603734990407ULL)))))) ? (arr_0 [i_1 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-27283)) / (arr_2 [i_1 + 2] [(unsigned short)15] [i_0 + 1]))))));
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_15 |= var_1;
                        var_16 = ((/* implicit */int) arr_1 [4LL]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 7525112173172638727ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)878))) : (8068143306172595618LL))), ((+(arr_7 [i_1 + 1] [i_1 + 1]))))))));
                        arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(min((arr_7 [i_2] [i_1 - 1]), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) (short)-1))));
                    }
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((1903911268837255991ULL), (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7243777469974561219ULL)))))) ? (7243777469974561219ULL) : (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */int) arr_1 [i_0 - 1])))))));
                    var_19 |= ((((/* implicit */_Bool) -4862295437335096337LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) : (7243777469974561219ULL));
                }
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((max((((/* implicit */long long int) (short)27954)), (-81026941514558414LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6163208390289217429ULL))))))))));
                    var_21 |= (signed char)126;
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((unsigned int) ((unsigned char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_1 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (long long int i_6 = 4; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [7] [i_4] [i_4] [i_5] [16] = ((/* implicit */unsigned int) max((max((var_8), (((/* implicit */short) min((var_6), ((signed char)37)))))), (((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_5] [i_4] [(signed char)16] [(signed char)16]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                                arr_22 [i_0] [i_5] [i_4] |= ((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_6] [i_5] [i_4] [2LL] [i_1 + 1] [i_1] [(short)1])) : (arr_2 [i_6] [i_5] [3LL]))))));
                                arr_23 [i_4] = arr_2 [(signed char)13] [i_1] [i_1];
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                    arr_26 [i_7] [i_1] = ((/* implicit */short) ((unsigned long long int) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) (short)-27303))))));
                    var_24 = ((/* implicit */short) (~(var_7)));
                    var_25 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_1] [(unsigned char)6] [i_7] [i_7] [(unsigned char)6])) ? (var_0) : (arr_17 [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_1] [i_0 + 1]))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(unsigned char)1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_1])))));
                }
            }
        } 
    } 
    var_26 |= ((/* implicit */_Bool) var_13);
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) var_5)) > (var_3))))));
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    var_28 |= min(((-(((/* implicit */int) var_11)))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10]))))) & (((/* implicit */int) ((_Bool) arr_29 [i_10] [i_10]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (unsigned short)65532);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((arr_32 [i_10] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)13))) : (-1LL))), (((/* implicit */long long int) min(((short)7), (((/* implicit */short) (_Bool)0)))))))) / (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) / (6849198781596154622ULL))))));
                        arr_38 [i_8] [i_10] [(unsigned char)10] [i_9] [i_8] = ((/* implicit */unsigned int) arr_35 [i_9 - 1] [i_9 - 1] [i_11]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */int) min((((((/* implicit */_Bool) 7525112173172638725ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (142015825088004741ULL))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) arr_31 [i_9] [i_9 - 1])))))));
                        arr_42 [i_8] [i_12] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) ((unsigned char) -8818997526459556871LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3)) ^ (((/* implicit */int) (short)-32749))))) : ((-(arr_33 [i_8] [i_9] [i_10] [i_10])))))));
                        var_32 = ((/* implicit */int) (~(arr_35 [i_9] [i_10] [i_12])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 4; i_14 < 20; i_14 += 4) 
                        {
                            arr_51 [i_14] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) min(((!(var_12))), ((_Bool)1)));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775793LL), (((/* implicit */long long int) var_2))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((arr_36 [i_14 + 2] [i_14] [i_14]) && (arr_36 [i_14 - 2] [8LL] [8LL])))) : ((+(((/* implicit */int) arr_50 [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 2]))))));
                        }
                        arr_52 [(short)11] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_33 [i_8] [i_8 + 2] [i_8 - 1] [i_8 + 1]))))));
                    }
                }
            } 
        } 
    } 
}
