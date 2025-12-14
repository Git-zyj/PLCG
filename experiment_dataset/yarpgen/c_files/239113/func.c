/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239113
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
    var_19 = ((/* implicit */signed char) ((((_Bool) var_0)) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = (~(((unsigned long long int) ((((/* implicit */_Bool) 13971854948402528900ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (14802049013489129339ULL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((4075763725495765074ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)11084), (((/* implicit */unsigned short) (_Bool)1))))))))) <= ((~(((((/* implicit */_Bool) 13971854948402528900ULL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)-123))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_3 [i_1]);
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((8023542583928278842ULL) % (arr_6 [13ULL] [i_0 + 1]))));
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_10)) ? ((+(arr_10 [i_1] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned short)54439)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_5] |= ((/* implicit */unsigned char) ((signed char) min((arr_17 [i_0] [i_4] [i_0]), (arr_17 [i_0] [i_1] [i_5]))));
                                arr_22 [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)56070);
                                var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)54437))))) ? (((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))))) : (arr_9 [i_0 + 2] [i_0 + 4] [i_0 - 1] [i_0 + 2] [i_0 - 1])))));
                                arr_23 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_0 [(unsigned char)6]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        var_23 *= ((/* implicit */signed char) (~((((((_Bool)1) ? (6329368203448695788ULL) : (10309395657551742711ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11113)))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */long long int) min(((unsigned short)54436), (((/* implicit */unsigned short) arr_5 [i_4]))))), (min((arr_20 [i_0 - 2] [i_1] [i_0 - 2] [i_4] [i_7]), (((/* implicit */long long int) arr_5 [i_1])))))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                {
                    arr_32 [i_10] [i_10] [i_10 + 1] = 9223372036854775805LL;
                    var_25 *= ((/* implicit */unsigned long long int) ((long long int) var_4));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            arr_36 [i_11] [i_8] [i_11] = ((/* implicit */_Bool) ((((-9223372036854775806LL) + (9223372036854775807LL))) >> (((arr_16 [i_8] [i_11] [(_Bool)0] [i_8]) + (694456993382952861LL)))));
            arr_37 [i_8] [i_11] = ((/* implicit */unsigned long long int) arr_5 [3ULL]);
        }
        /* LoopNest 3 */
        for (signed char i_12 = 4; i_12 < 10; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_8))));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_49 [i_13] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_13] [i_14 - 1] [i_12 - 2] [i_14] [i_13 + 1] [i_12] [i_15 + 1]))));
                            arr_50 [i_8] [i_12] [i_8] [i_8] [i_15] [i_13 + 2] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_8] [i_12 + 1] [i_13 + 1] [i_14 + 2] [(unsigned short)4] [i_14] [i_15]))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != ((~(arr_1 [i_14]))))))));
                        }
                        for (signed char i_16 = 2; i_16 < 10; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) (signed char)-1);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_44 [i_8] [i_16] [i_13] [i_14 - 1] [(signed char)7] [i_12]) : (12117375870260855845ULL))) >= (arr_9 [i_8] [i_13] [i_13] [14LL] [i_13 + 2]))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_11))) + (((((/* implicit */int) arr_48 [i_8] [i_12] [i_13] [i_14] [i_16])) - (((/* implicit */int) (unsigned short)27436))))));
                        }
                        for (long long int i_17 = 3; i_17 < 7; i_17 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_13] [i_13 + 2] [i_13] [i_13] [i_13 + 1] [i_13 + 1])))))));
                            arr_56 [i_8] [i_17] [i_13 + 3] [i_14] [i_17] = ((/* implicit */unsigned char) ((12117375870260855816ULL) > (18446744073709551601ULL)));
                            arr_57 [i_17] [i_17] = ((/* implicit */long long int) ((arr_6 [i_12 - 2] [i_17 + 2]) > (arr_6 [i_12 + 1] [i_17 - 1])));
                        }
                        arr_58 [i_8] [(unsigned short)3] [i_13] = ((/* implicit */_Bool) (signed char)-111);
                        var_32 = arr_16 [i_14] [i_14] [i_14] [(signed char)2];
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) var_0);
    }
}
