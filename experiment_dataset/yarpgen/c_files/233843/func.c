/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233843
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))))), (((((unsigned int) 16210523493118243420ULL)) - ((+(arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((((long long int) var_9)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) <= (var_6))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_15 = -1837775631;
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_4))));
                        var_17 *= max((((((/* implicit */_Bool) arr_11 [0LL] [i_2 - 2] [0LL])) ? (var_2) : (var_1))), (arr_0 [(signed char)8]));
                        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])) ? (var_12) : (arr_1 [i_0])))) ? (arr_9 [i_2 - 3] [i_2 - 3] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((min((((/* implicit */unsigned long long int) var_2)), (var_8))), (((/* implicit */unsigned long long int) arr_10 [i_3] [4])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 16210523493118243420ULL)) ? (((/* implicit */int) (unsigned short)62349)) : (((/* implicit */int) (unsigned short)62334)))), (((/* implicit */int) var_3))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        arr_15 [1U] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62341))) : (var_1)))));
                        var_18 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1201010481314865739LL))) ? (max((arr_1 [0LL]), (arr_2 [(short)6]))) : (arr_1 [4LL])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_2 - 3] [(unsigned short)12] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))), (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 0U)), (1370477549378576626LL)))) / (var_8))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_8] = ((unsigned long long int) min((arr_11 [i_0] [i_5] [i_6]), (arr_11 [i_0] [i_5] [i_0])));
                                arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [(short)12] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_5] [(unsigned char)5] [i_7] [i_7] [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_10) : (arr_14 [i_0] [i_5] [i_6] [i_7]))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_2 [0LL]))))))));
                                arr_27 [i_5] [i_0] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((arr_17 [i_0]) / (arr_17 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_0]))) : (max((arr_17 [i_0]), (((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((max((arr_18 [i_0] [i_0] [i_0] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) arr_24 [10U] [i_0] [i_5] [10U])))))));
                    var_22 -= ((/* implicit */long long int) min((var_6), (((((/* implicit */int) min((((/* implicit */short) var_4)), (var_11)))) - ((-(((/* implicit */int) (unsigned short)3199))))))));
                    var_23 = ((short) max(((+(((/* implicit */int) (short)-32761)))), (((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */long long int) arr_6 [i_0]);
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~((-(-6610911401085293163LL))))))));
    }
    for (signed char i_9 = 2; i_9 < 12; i_9 += 3) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */long long int) var_3);
        var_26 *= ((/* implicit */unsigned char) ((max((15504521010990751722ULL), (((/* implicit */unsigned long long int) arr_6 [i_9 + 1])))) * (((/* implicit */unsigned long long int) 2304717109306851328LL))));
    }
    for (short i_10 = 4; i_10 < 15; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 15; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                {
                    arr_43 [i_12] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */unsigned int) arr_38 [i_10] [i_11] [i_12])) : (var_12))), (max((((/* implicit */unsigned int) var_11)), (2615399625U)))))), (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)234)) ? (arr_34 [13LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 + 1])))))))));
                    arr_44 [10ULL] [i_11] [10ULL] |= ((/* implicit */long long int) arr_36 [i_10 - 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */int) ((signed char) arr_34 [i_10 - 2]));
                        arr_48 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10 - 1])))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_41 [i_13])) : (((/* implicit */int) arr_41 [i_13])))) << (((2808895830U) - (2808895829U))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 13; i_15 += 3) 
                        {
                            arr_55 [i_12] [i_12] [i_15 + 3] = ((((/* implicit */_Bool) (unsigned char)22)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 39368266U)) : (arr_45 [i_10] [i_10] [i_10] [i_12] [i_14] [(signed char)14]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_12]))))));
                            arr_56 [i_10] [i_10] [i_12] [i_12] [i_15] = var_9;
                        }
                        var_29 = ((/* implicit */long long int) arr_52 [i_12] [i_12] [i_11] [i_10]);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= ((~(var_12)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                {
                    var_31 -= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_47 [(unsigned char)1])) ? (((/* implicit */int) arr_51 [0LL] [i_16] [10U])) : (((/* implicit */int) arr_39 [i_10] [i_10] [i_10] [i_17]))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_10) == (arr_52 [(short)15] [i_10 - 2] [i_10 - 4] [i_10 - 4])))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_39 [i_19] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_37 [i_10 - 4] [i_10] [4LL])) : (((((/* implicit */_Bool) -657395179)) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) var_3)))))) - (((/* implicit */int) arr_50 [(unsigned char)1] [5U] [i_18] [(unsigned char)1]))));
                                var_33 += ((/* implicit */signed char) min((arr_57 [i_10 + 1] [i_10 + 1]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-8971870632481022964LL))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned char) arr_49 [i_10] [i_10] [i_10]);
                }
            } 
        } 
        var_35 ^= ((/* implicit */signed char) var_1);
    }
    var_36 -= ((/* implicit */unsigned int) max((145048082), (((/* implicit */int) var_7))));
    var_37 ^= ((/* implicit */long long int) var_1);
    var_38 += ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_0)), (((var_13) * (var_12)))))));
}
