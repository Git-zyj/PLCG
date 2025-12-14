/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248646
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = arr_1 [i_0];
        var_12 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31523)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-2305843009213693952LL) : (arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_1] [(unsigned short)0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [9ULL])))))))));
            var_13 = ((/* implicit */long long int) var_6);
            arr_6 [8] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1])) - (arr_0 [i_1 - 1] [i_1 + 1]))))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_14 = ((unsigned long long int) ((((/* implicit */_Bool) (-(1977950446204287397ULL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [8U]))) == (arr_7 [i_0] [i_2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_2] [2U])) <= (1977950446204287422ULL))))));
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_2])) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))) % (min((arr_7 [(short)4] [3LL]), (((/* implicit */long long int) arr_2 [(short)1] [i_0])))))))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (short i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            var_16 &= ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) var_0)), (67108863U))))) ? (min((arr_15 [i_6 + 2] [i_6] [i_6 - 3] [i_6 - 3]), (arr_15 [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)255)))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 + 1] [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (arr_7 [i_6 + 2] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 + 2] [i_5])) ? (arr_7 [i_6 - 2] [i_5]) : (arr_7 [i_6 - 2] [i_3])))))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_10 [i_6 - 3] [(short)7] [(short)3]);
                            arr_19 [i_6] [3LL] [i_4] [10U] [10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_4]), (arr_1 [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) (unsigned short)19938)) : (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_4])))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)184))) ? (arr_11 [i_3]) : (((/* implicit */long long int) min((151262320U), (((/* implicit */unsigned int) (unsigned char)177)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_0] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [10LL])) ? (((/* implicit */unsigned int) 0)) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_4]))))));
                            var_19 = ((/* implicit */unsigned int) ((int) arr_17 [i_0] [i_3] [0U] [i_4] [(unsigned short)1] [(short)3] [i_7]));
                            var_20 ^= ((/* implicit */unsigned int) ((int) ((int) arr_20 [i_0] [i_7] [7ULL] [(short)5] [10LL])));
                            arr_25 [(unsigned char)0] [i_3] [3ULL] [i_3] [i_4] [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_5 - 3] [i_4])) ? (((/* implicit */int) arr_3 [i_5] [i_5 - 3] [i_4])) : (((/* implicit */int) arr_3 [2] [i_5 - 4] [i_4]))));
                        }
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_28 [i_0] [(unsigned short)9] [i_4] = ((/* implicit */long long int) ((int) (short)32767));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [8LL] [(short)9] [i_4] [i_5] [i_5] [i_3] [i_8]))))) : (-7374318981181643664LL))) % ((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_1 [i_0])))))));
                            arr_29 [i_5] [(unsigned char)6] [8ULL] [i_4] = ((/* implicit */unsigned short) (~(min((arr_12 [i_5 + 1] [i_5 - 2] [i_8] [i_4]), (arr_12 [i_5 + 1] [i_5 + 1] [i_8] [i_4])))));
                            var_22 = ((/* implicit */long long int) (((+(arr_22 [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 - 2] [i_5 - 2]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (unsigned char)255)) : (-15))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            arr_33 [i_4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min((arr_8 [i_0] [i_3] [i_4]), (((/* implicit */long long int) ((((/* implicit */int) ((var_6) != (137438429184ULL)))) >= (((/* implicit */int) ((arr_12 [i_4] [i_5] [i_4] [i_4]) > (arr_11 [i_5])))))))));
                            arr_34 [i_4] = ((/* implicit */short) ((int) ((unsigned short) arr_16 [i_4] [i_5 - 3] [i_3] [i_4])));
                        }
                        /* vectorizable */
                        for (short i_10 = 1; i_10 < 7; i_10 += 2) 
                        {
                            var_23 -= ((/* implicit */long long int) ((int) (~(1977950446204287422ULL))));
                            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [(unsigned short)6] [i_3]))) / (arr_11 [i_0])))) && (((/* implicit */_Bool) arr_17 [1] [i_5 - 1] [i_10 + 4] [9] [i_10] [i_10 + 2] [i_10]))));
                        }
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_39 [i_3] [3U] [i_4] [4LL] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) -1138757240)), (1977950446204287397ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_27 [i_3] [i_3] [6] [7] [i_3] [1U])) : (((/* implicit */int) arr_9 [i_5]))))))))));
                            var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_5 + 1]) << (((arr_31 [i_0] [i_5 - 2] [(short)8] [i_5] [i_11] [i_3]) - (53883850)))))) ? (((((/* implicit */_Bool) arr_31 [i_3] [i_5 + 1] [(short)6] [i_0] [i_3] [i_11])) ? (1977950446204287422ULL) : (((/* implicit */unsigned long long int) 4227858425U)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_4] [i_5 + 1])))));
                            arr_40 [i_11] [i_5] [i_4] [i_4] [(short)4] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) 4227858437U)), (min((1977950446204287422ULL), (((/* implicit */unsigned long long int) (short)-12830)))))), (min((min((arr_23 [i_0] [(short)0] [i_3] [2] [i_4] [i_11]), (((/* implicit */unsigned long long int) arr_17 [i_0] [(short)0] [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_3] [(short)10] [i_4])) ? (1977950446204287422ULL) : (((/* implicit */unsigned long long int) arr_37 [i_4] [i_3] [i_4] [2U] [i_11]))))))));
                            var_26 = ((/* implicit */short) ((long long int) (short)9932));
                            arr_41 [i_11] [i_5] [i_4] [4] [i_0] = ((/* implicit */unsigned int) (-((+(1308026265762311612LL)))));
                        }
                        for (int i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_5 - 4])) ? (arr_0 [i_5 - 2] [i_5 - 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5 - 3] [i_5 - 4])))))));
                            var_28 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_4] [i_4])) && (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))), (((((/* implicit */_Bool) arr_18 [i_4])) && (((((/* implicit */_Bool) 8388103982621307581ULL)) && (((/* implicit */_Bool) arr_30 [i_0] [i_3] [i_4] [i_12] [i_12]))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_29 = min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_5] [i_3]))) == (min((arr_13 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_37 [i_4] [i_3] [i_4] [i_5] [3U]))))))), (((short) arr_26 [i_13] [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 4] [i_5])));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_43 [i_5 - 4] [i_5] [i_5] [i_5] [i_5] [6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_5 - 2] [0] [i_5] [i_5] [i_5] [i_4])))))) : (min((arr_43 [i_5 - 4] [i_5] [i_5] [(unsigned short)5] [i_5] [i_3]), (arr_43 [i_5 + 1] [i_5] [i_5] [8ULL] [i_5] [i_0])))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_5]))) * (((arr_50 [9] [i_3] [i_3] [i_3] [i_3] [i_3] [2U]) ^ (16468793627505264193ULL))))) % ((~((+(arr_22 [i_0] [(short)10] [i_0] [i_0] [i_0] [(short)5])))))));
                            var_32 = ((/* implicit */unsigned long long int) 67108882U);
                        }
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) var_3);
}
