/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44030
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
    var_17 = ((/* implicit */short) var_14);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 4]))))) ? ((~(arr_1 [i_0 - 4]))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) | (var_16))), (((/* implicit */int) ((signed char) var_0)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4 - 3] [i_4] [11LL] [i_0] [i_4] [i_4 - 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_16))) ? (var_12) : (arr_1 [i_4 - 2])))) ? (min((((/* implicit */int) max(((signed char)-125), (arr_3 [11U] [i_2] [i_4])))), (max((arr_11 [i_0] [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_0] [i_0]), (((/* implicit */int) var_1)))))) : (((((((/* implicit */int) (short)-21669)) | (((/* implicit */int) (signed char)127)))) & (((/* implicit */int) (signed char)124))))));
                                var_19 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [8] [i_1])))))));
                                var_20 = ((/* implicit */short) 4294967295U);
                                var_21 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_4 - 1] [i_4 + 1])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0 - 1] [i_3] [i_0] [i_0] [i_0 + 3])) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2355807891U)) ? (((((/* implicit */_Bool) -173472792)) ? (var_13) : (((/* implicit */unsigned int) 433125548)))) : (((/* implicit */unsigned int) -433125549)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 2355807891U))) ? (((((/* implicit */int) var_5)) | (var_16))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]))))) ? ((-(1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((arr_1 [i_1]) + (((/* implicit */unsigned int) var_9))))) == (var_10))))))))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))) : (0LL)))) ? (arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0 + 1]) : (((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))))))));
                    var_23 &= min((max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), (((unsigned int) arr_1 [i_0 - 3])));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) max((((long long int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2])), (((/* implicit */long long int) arr_8 [14U] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) 2147483647);
                    var_25 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) var_3)) ? (9) : (((/* implicit */int) arr_4 [8LL] [i_6] [11U])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_6 [i_5]))))))), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5]))) - (var_12)))) + (-2LL)))));
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_21 [i_5] [i_5]), (((/* implicit */unsigned int) arr_6 [i_5]))))) || (((/* implicit */_Bool) arr_2 [i_5] [i_5]))));
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */int) arr_26 [3] [i_8]);
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) arr_2 [8] [i_8]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                {
                    var_27 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-254578497) : (((/* implicit */int) arr_6 [(_Bool)1]))))) ? (((2406619282432340715LL) - (((/* implicit */long long int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9] [i_8])))) : (((/* implicit */long long int) ((arr_12 [i_8] [i_8] [i_10 + 2] [i_8]) + (arr_5 [i_9])))))) >> (((max((arr_13 [i_9] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]), (((/* implicit */unsigned int) arr_4 [i_8] [i_10 + 1] [i_10 + 1])))) - (3805813302U))));
                    var_28 = ((/* implicit */unsigned short) arr_25 [2U]);
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                arr_41 [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_5);
                                var_29 = ((/* implicit */short) max((var_13), (((((/* implicit */_Bool) arr_25 [i_10 - 1])) ? ((+(arr_12 [i_8] [i_9] [i_10 + 4] [i_12]))) : (((/* implicit */unsigned int) (+(-254578497))))))));
                                var_30 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(-2008905453)))) ? ((+(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))));
                                arr_42 [2] [i_11] [i_10 + 2] [i_10 - 1] [i_9] [i_9] [i_8] = ((((/* implicit */long long int) arr_12 [i_8] [i_9] [i_10 - 1] [(_Bool)1])) + (arr_9 [i_9] [i_12]));
                                var_31 += ((((((/* implicit */_Bool) arr_32 [i_9] [i_10 + 4] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [14LL] [i_10] [i_9]))) <= (arr_5 [i_8]))))) : (var_7))) << (((((/* implicit */int) (signed char)-125)) + (142))));
                            }
                        } 
                    } 
                    arr_43 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((-((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) >> (((var_10) + (7417801260236467744LL)))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) var_2);
                                var_33 = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(-1LL)))) ? (arr_9 [(unsigned short)0] [3LL]) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)92))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_16] [i_16] [i_15])) ? (arr_53 [i_18] [i_17] [i_16]) : (arr_53 [i_17] [i_17] [i_17])));
                        var_35 = ((/* implicit */long long int) (signed char)(-127 - 1));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_51 [i_15])) || (((/* implicit */_Bool) arr_53 [(signed char)6] [10LL] [i_16])))) && (((/* implicit */_Bool) arr_56 [i_15]))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_52 [i_15] [i_16] [i_16]))) ? (arr_57 [i_15] [i_15] [i_15]) : (((/* implicit */unsigned int) arr_60 [i_15] [i_15] [i_15]))));
        }
        for (unsigned int i_19 = 1; i_19 < 18; i_19 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_20 = 4; i_20 < 20; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        {
                            arr_73 [20LL] [i_19] [i_19] [i_21] [i_21] [i_20] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_20 - 4] [(signed char)14] [i_20] [i_21]))))), (((((/* implicit */_Bool) arr_72 [i_19 + 4] [i_19 + 3] [i_19 + 1])) ? (arr_72 [i_19 + 4] [i_19 - 1] [i_19 + 4]) : (arr_72 [i_19 - 1] [i_19 + 1] [i_19 + 2])))));
                            var_38 &= (~((+(arr_70 [i_19 + 2] [i_19] [i_19 - 1] [i_20 - 2] [21ULL] [i_20 + 2]))));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_50 [i_15] [i_15])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_19 - 1] [i_19] [i_19 - 1])) ? (((/* implicit */int) arr_58 [i_19 - 1] [i_19] [i_19 - 1])) : (((/* implicit */int) arr_58 [i_19 - 1] [i_19 + 3] [i_19 - 1]))))) : (min((arr_55 [i_19 + 2] [i_19 - 1] [i_19 + 3]), (var_15))))))));
                            arr_74 [i_20] [i_20] [i_20] [i_22] [i_22] = arr_64 [i_19];
                        }
                    } 
                } 
            } 
            var_40 = -669448156;
        }
        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_15] [15] [i_15]))));
    }
}
