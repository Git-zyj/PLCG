/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54202
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_9) ? (arr_0 [i_1]) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_6)))))) : (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [(short)5] [i_1] [(unsigned char)17])))))) < (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (signed char)-111)), (937896861U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (arr_1 [15ULL] [i_1])))))))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)110)) == (((/* implicit */int) (signed char)111))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (4503599627354112LL)))))) ? (((/* implicit */unsigned long long int) max((((var_12) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))), (((((/* implicit */int) arr_6 [i_1])) | (var_2)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) * (min((arr_3 [i_0] [18ULL] [i_0]), (((/* implicit */unsigned long long int) var_11))))))));
                    arr_7 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */int) arr_2 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) 1048448LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20759))) : (3494652109U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((arr_3 [i_0] [3U] [i_2]) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4503599627354113LL)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_2] [i_2]))))) : (((arr_3 [i_0] [i_0] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) - (62ULL)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_0])) % (arr_4 [i_1]))) ^ (((/* implicit */int) arr_5 [12] [i_1] [i_0] [12])))))));
                    var_17 = ((/* implicit */unsigned long long int) arr_9 [i_3 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        var_18 += ((/* implicit */short) arr_1 [i_0] [i_0]);
                        arr_16 [i_0] [i_1] [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-109)) ? (11924582046496157312ULL) : (((/* implicit */unsigned long long int) 3357070435U))));
                    }
                    for (signed char i_5 = 4; i_5 < 22; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20759)) - (((/* implicit */int) (unsigned short)65535))))) ? (((unsigned long long int) arr_2 [i_3 + 2] [(unsigned short)1] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                        arr_20 [i_0] [(unsigned char)3] [i_0] [i_1] [i_5 - 4] = arr_3 [i_0] [i_1] [i_5];
                    }
                    var_19 = ((unsigned char) var_5);
                }
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9007199254740991LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (12853507728157554779ULL)));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_6] [i_0] [i_1])) - (arr_18 [i_6] [i_1] [i_6 + 1] [i_1] [i_6]))) / (((/* implicit */int) arr_11 [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0]))) | (((long long int) arr_3 [i_0] [i_1] [i_6]))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-24)) ? (12853507728157554779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17)))));
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 22; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_30 [i_8] [i_1] [i_8 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((var_9) ? (937896861U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))));
                        var_22 = ((unsigned char) ((unsigned long long int) var_7));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((long long int) (unsigned short)65535)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned short) arr_17 [i_0] [i_1] [i_0])))));
                                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_9 + 1] [i_9 - 3])) ? (((/* implicit */int) ((8894454246280284195ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)9])) : (arr_4 [i_0])))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)20758)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (36028797018439680LL))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) var_13)))) >> (((/* implicit */int) ((((/* implicit */int) ((signed char) var_1))) > (((/* implicit */int) var_12))))))))));
}
