/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232021
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
    var_11 = ((/* implicit */short) var_0);
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 += ((unsigned char) min((var_6), (((/* implicit */int) arr_9 [18U] [18U] [i_2] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((2743593351U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)9] [i_1] [i_1] [10LL])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_1])), (var_1))))))));
                            arr_14 [i_1] = ((/* implicit */int) (-(var_5)));
                            arr_15 [i_1] [i_1] [i_1] [i_0] [12U] = ((/* implicit */short) max(((~(var_9))), (((/* implicit */unsigned int) ((signed char) 1039657496U)))));
                        }
                        arr_16 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3255309799U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        arr_17 [(signed char)0] [(signed char)0] = ((/* implicit */short) var_10);
        arr_18 [1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (~(arr_12 [10ULL] [10ULL] [8U] [10ULL] [8U])))), (min((((/* implicit */unsigned int) arr_8 [20U])), (var_9))))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_10 [i_0] [(unsigned short)5] [i_0] [(signed char)11] [i_0] [i_0])))), (arr_2 [i_0 + 1])))))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (-(arr_0 [23U]));
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            var_15 = ((/* implicit */long long int) arr_19 [2U] [23LL]);
            arr_25 [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_5] [22U] [(signed char)4] [i_5 - 2] [i_5] [i_6])) ? (max((((/* implicit */unsigned int) var_8)), (arr_21 [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) max((arr_3 [i_5]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_0)))));
        }
        for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned long long int) arr_23 [2]);
                        arr_33 [i_5] [i_8] [4U] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_29 [i_5] [6U] [i_5] [6U]))));
                        var_17 += ((/* implicit */unsigned int) min((max((max((((/* implicit */long long int) arr_9 [i_5] [8] [i_5] [i_9])), (arr_23 [2U]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_5] [i_7]))))))), (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) arr_8 [18ULL]))), (max((((/* implicit */int) (unsigned char)215)), (var_8))))))));
                        arr_34 [i_5] [i_7] [i_8] [i_5] = ((/* implicit */unsigned short) ((min((arr_1 [i_5 - 4]), (arr_1 [i_5 - 4]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94)))))));
                        arr_35 [i_5] [i_5] [16] [i_9] = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
            var_18 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned char) arr_30 [(short)11] [(short)11] [i_5] [i_7 - 1]))), (min((min((((/* implicit */unsigned int) (short)31432)), (arr_32 [i_5] [(short)4] [i_5] [(short)4] [i_7]))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned short) (_Bool)1)))))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_9 [18] [14] [18] [i_7])), (var_2)))), (((((/* implicit */_Bool) arr_11 [i_5] [(unsigned short)12] [(unsigned short)16] [(unsigned short)16] [i_7])) ? (((unsigned long long int) arr_12 [i_7] [(unsigned short)10] [18ULL] [(unsigned short)10] [(unsigned char)18])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_31 [4U])))))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            arr_39 [i_5] [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_10] [i_5 - 1])) : (((/* implicit */int) arr_37 [(unsigned short)15] [i_5 + 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                arr_42 [i_5] [i_5] [i_11] = ((/* implicit */_Bool) var_9);
                arr_43 [11U] [i_10] [i_5] [4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(unsigned char)23] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_10])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5764009048012466950LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_5])))))) : (arr_20 [3])));
            }
            for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                arr_47 [i_5] [i_10] = ((/* implicit */signed char) ((unsigned short) arr_45 [i_5] [(_Bool)1] [i_5 + 1] [i_5]));
                arr_48 [i_5] [i_5] [i_5] [(unsigned char)10] = ((/* implicit */unsigned short) var_8);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [20] [20])) == (((/* implicit */int) arr_27 [(unsigned char)4] [(unsigned char)3]))));
                arr_49 [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) arr_36 [i_5]));
            }
            arr_50 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) arr_36 [i_5]))));
        }
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((min((arr_19 [i_5] [i_13]), (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [6ULL] [(_Bool)1] [6ULL] [(unsigned short)6])))) << (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) arr_37 [i_5] [i_5]))))) ? (((/* implicit */int) arr_2 [i_5 - 4])) : (((/* implicit */int) min((arr_5 [i_5] [i_5]), (((/* implicit */short) arr_30 [i_5] [i_5] [(unsigned short)10] [i_13]))))))))))));
            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [16U] [i_5] [i_13] [i_5])) ? (((/* implicit */int) var_1)) : (arr_12 [i_5] [i_5] [12ULL] [18U] [i_13])));
            arr_53 [i_5] [i_5] = ((/* implicit */long long int) min((arr_51 [(unsigned char)10]), (((/* implicit */unsigned int) var_4))));
        }
        var_23 -= (+(min((((long long int) var_7)), (((/* implicit */long long int) var_7)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
        {
            var_24 = ((/* implicit */int) var_9);
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((((/* implicit */_Bool) 10107111171384031544ULL)) ? (((/* implicit */int) arr_7 [4] [(unsigned char)18])) : (((/* implicit */int) arr_36 [(short)10])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [0LL]))) >= (var_9)))))))));
        }
        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            arr_69 [i_5] [i_5] [i_16] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (arr_45 [i_5] [i_17] [17U] [i_5]) : (max((var_9), (((/* implicit */unsigned int) arr_10 [i_5] [(unsigned char)5] [3ULL] [(unsigned char)5] [i_5] [i_18]))))))));
                            arr_70 [i_5] [i_5] [i_5] [(signed char)17] = ((/* implicit */unsigned int) var_4);
                            arr_71 [i_5] [i_5] [i_5] [i_16] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_41 [i_5 - 2] [1] [(signed char)7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_5] [i_15] [i_17] [i_18])))))))), (var_9)));
                        }
                    } 
                } 
            } 
            arr_72 [i_5] = max((((((/* implicit */_Bool) (~(arr_12 [i_15] [i_5] [i_15] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)112)), (arr_5 [i_5] [i_5]))))) : (arr_4 [i_5] [i_15] [i_15]))), (((/* implicit */unsigned long long int) ((unsigned short) var_1))));
        }
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((unsigned char) arr_10 [12U] [i_5] [i_19] [i_5] [i_19] [i_5]))), (((unsigned short) arr_29 [i_5 - 4] [i_19] [i_19] [i_5])))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_5] [i_5] [i_5] [13LL])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_40 [i_5] [i_5] [i_5] [i_5])))) : (max((((/* implicit */long long int) var_4)), (arr_63 [i_5] [i_5] [i_19] [i_19]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_5] [22ULL] [i_5] [i_19])))));
            arr_75 [i_5] [i_5] = ((/* implicit */unsigned char) min((611208881), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)207)), (var_4))))));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                for (short i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned char) ((max((((/* implicit */int) min(((unsigned short)7783), (((/* implicit */unsigned short) (unsigned char)194))))), (var_6))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)128))) : (var_9)))) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_3))))))))));
                        var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) var_1))), (((((/* implicit */_Bool) arr_26 [i_5 + 3] [i_5])) ? (((((/* implicit */_Bool) arr_27 [i_19] [i_20])) ? (var_5) : (((/* implicit */long long int) arr_0 [i_20])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                    }
                } 
            } 
        }
        arr_81 [i_5] = ((/* implicit */unsigned int) ((short) arr_5 [i_5] [i_5 - 3]));
    }
    for (unsigned long long int i_22 = 4; i_22 < 21; i_22 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) var_8)) | (max((((/* implicit */long long int) min((2020627296U), (((/* implicit */unsigned int) arr_57 [17]))))), (arr_63 [i_22] [(_Bool)1] [i_22 - 2] [i_22]))))))));
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 24; i_23 += 3) 
        {
            for (unsigned int i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                {
                    arr_88 [i_22] [i_22] = ((/* implicit */unsigned short) arr_51 [i_22]);
                    /* LoopNest 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        for (short i_26 = 0; i_26 < 24; i_26 += 1) 
                        {
                            {
                                arr_93 [(unsigned short)4] [(short)2] [i_22] [i_22] [i_23] [i_22] = ((/* implicit */int) ((((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_4)), (2261709588U))), (((/* implicit */unsigned int) var_7))))) / (max((((/* implicit */long long int) ((unsigned short) arr_63 [i_22] [i_22] [i_22] [i_22]))), (min((((/* implicit */long long int) arr_85 [(_Bool)1] [(_Bool)1] [i_26])), (arr_63 [(short)2] [i_22] [i_22] [i_26])))))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((var_2), (((short) arr_83 [2U] [i_23])))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_22] [20LL] [i_24])), (var_9)))), (((unsigned long long int) 2276669337U)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (max((arr_19 [i_22] [i_22]), (((/* implicit */unsigned long long int) var_7))))))) ? (max((min((arr_21 [(unsigned char)22]), (arr_51 [i_22]))), (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_56 [i_22])), (var_10)))))))))));
        arr_94 [i_22] = ((/* implicit */int) max((max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [(unsigned char)13]))))), (var_0))), (((/* implicit */unsigned int) min((((unsigned char) var_10)), (max((((/* implicit */unsigned char) arr_65 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])), ((unsigned char)205))))))));
    }
    var_34 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_7), (max((((/* implicit */short) (_Bool)1)), (var_2))))))));
}
