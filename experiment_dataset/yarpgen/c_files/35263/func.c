/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35263
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
    var_20 = ((/* implicit */unsigned char) ((((min((((((/* implicit */int) (unsigned short)61177)) / (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_2))))))) + (2147483647))) << (((((min((((/* implicit */int) (_Bool)1)), (var_4))) + (805085695))) - (12)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) 614936997);
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1424020279)) ? (((/* implicit */unsigned int) min((-1073741824), (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) 0)), (2659470034U))))), (((/* implicit */unsigned int) (unsigned short)3))));
                    arr_7 [i_0] [i_0] [4LL] [i_2] = ((/* implicit */long long int) -614936997);
                    var_22 = ((/* implicit */short) min((((1429233525) / (((/* implicit */int) ((-1409563745) != (((/* implicit */int) arr_2 [i_1]))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483627)), (9223372036854775807LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(unsigned short)3] [i_0])) ? (arr_5 [i_1] [i_2]) : (((/* implicit */long long int) -614937004))))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((((arr_5 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) - (((/* implicit */long long int) 614937004))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) 1898426652)) != (arr_5 [i_0] [i_0])));
                    arr_10 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) / (arr_5 [i_1] [i_3]))) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned long long int) (unsigned char)255);
                    arr_13 [i_1] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (5294054514821682939LL)));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-21959)) | (8)));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((8U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4])))))) + (((arr_1 [i_4]) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)48))))));
                    arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_12 [i_0] [1LL] [i_4])))) ? (((6695813947258571260LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))) : (-8116693291842289514LL)));
                }
                var_28 = ((/* implicit */long long int) (short)32767);
                arr_15 [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775799LL)) && (((/* implicit */_Bool) 1429233525)))) ? (((((/* implicit */int) (unsigned short)61177)) * (((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) min(((unsigned char)243), (arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1])) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_27 [i_5] [i_6] [i_7] [4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) arr_25 [i_5] [i_5] [i_7] [i_8] [i_5] [i_5])) % (((/* implicit */int) arr_20 [i_5]))))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2130887518U)))), (arr_19 [3U] [3U] [3U])))));
                        var_29 ^= ((/* implicit */unsigned short) min((9223372036854775800LL), (min((arr_24 [i_5] [i_6] [(signed char)10] [i_5]), (((/* implicit */long long int) (unsigned char)20))))));
                        arr_28 [i_8] [1] [i_7] [i_6] [i_5] = ((/* implicit */short) ((-21148317) / (((((/* implicit */int) arr_18 [i_7] [i_8])) * (((/* implicit */int) arr_18 [i_5] [i_5]))))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)29218), (((/* implicit */short) (unsigned char)0)))))) + (min((((/* implicit */unsigned int) (unsigned short)61160)), (arr_16 [i_8]))))) - (((((/* implicit */_Bool) ((arr_24 [i_5] [i_6] [i_7] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67)))))) ? (((arr_16 [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7]))))) : (((/* implicit */unsigned int) ((-854935205) - (((/* implicit */int) arr_23 [i_8] [i_6] [i_7] [i_8]))))))))))));
                        var_31 *= ((/* implicit */unsigned int) arr_17 [i_6]);
                    }
                    arr_29 [(unsigned char)13] [i_5] [i_6] [i_7] = ((/* implicit */int) min(((unsigned short)46105), (((/* implicit */unsigned short) arr_21 [i_7] [i_6] [i_6] [i_6]))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_24 [i_5] [i_5] [8LL] [i_5]))));
                        var_33 = ((/* implicit */unsigned char) arr_18 [i_5] [i_5]);
                    }
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_36 [(unsigned short)10] [i_5] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)228)))), (arr_22 [i_5] [i_7] [i_10])));
                        var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((_Bool)1), (arr_17 [i_5])))), (((((/* implicit */int) arr_31 [i_10] [i_6])) % (((/* implicit */int) arr_31 [i_6] [i_7]))))));
                        arr_37 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((((min((7143985140086442436LL), (0LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) (unsigned char)224))));
                    }
                    var_35 = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)19531)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (arr_38 [i_11 + 1]))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)3061))) + (arr_38 [i_11 + 1])))));
        arr_40 [i_11 - 2] [i_11] = ((/* implicit */_Bool) -4271972650574184155LL);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 21148318)) / (arr_41 [i_12])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6770))) / (3007620990U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))));
        var_38 = ((/* implicit */unsigned char) min((var_38), ((unsigned char)74)));
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((195508400) % (((/* implicit */int) ((((/* implicit */_Bool) 21148317)) && (((/* implicit */_Bool) (short)-24647))))))))));
    }
    for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        var_40 = ((/* implicit */unsigned int) (signed char)127);
        arr_45 [(short)0] [(short)0] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)38)), (min((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_13])) + (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */long long int) (unsigned char)70)), (-4418814553215834967LL)))))));
    }
}
