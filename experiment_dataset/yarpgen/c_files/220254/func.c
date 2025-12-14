/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220254
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_4 [9] [i_0] = ((/* implicit */long long int) (signed char)-7);
        var_14 = ((/* implicit */int) var_2);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((arr_6 [i_0 + 1] [i_1 + 1] [(unsigned short)8]) < (arr_6 [i_0 + 1] [i_1 - 1] [i_1 - 3])));
            arr_10 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((var_10) >> (((((/* implicit */int) (signed char)-1)) + (33)))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((min((var_10), (((/* implicit */unsigned long long int) arr_11 [i_2])))) < (var_11)))), (arr_11 [i_2])));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */short) max((((/* implicit */int) max((arr_16 [i_2] [i_3]), (arr_16 [i_2] [i_3])))), (((((/* implicit */int) arr_16 [i_2] [i_3])) | (((/* implicit */int) arr_16 [i_3] [i_2]))))));
            arr_17 [i_2] [i_3] [10U] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_16 [i_2] [i_3])) < (((/* implicit */int) arr_16 [i_2] [i_3])))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_2)))));
            arr_20 [i_4] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)126)) << (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_9)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                var_17 *= ((/* implicit */unsigned long long int) arr_22 [i_5 - 1] [i_4] [i_4] [i_4]);
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        arr_30 [(unsigned char)14] [(unsigned char)14] [i_5] [i_7] [i_7 - 1] = ((/* implicit */unsigned long long int) arr_22 [i_4] [(_Bool)1] [7] [i_7]);
                        arr_31 [i_7] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_9);
                    }
                    var_18 = ((/* implicit */signed char) 10190427305466104094ULL);
                    arr_32 [i_2] [i_4] [3ULL] [(_Bool)1] = ((arr_12 [i_5 + 1] [i_6 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 - 1] [i_6 - 2]))) : (18446744073709551597ULL));
                }
            }
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                arr_35 [i_2] [i_2] [i_2] [i_8] = ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [(unsigned short)10] [14ULL]))) : (((((/* implicit */_Bool) var_10)) ? (8256316768243447522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [(signed char)15] [i_4] [15ULL] [i_8])))))));
            }
        }
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_13);
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))) / ((+(arr_27 [i_9])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [15ULL] [i_10])) ? (arr_25 [i_2] [i_2] [i_2] [i_9] [i_9] [i_10]) : (var_13)))), (((10190427305466104094ULL) * (arr_33 [(_Bool)1] [i_10] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_10]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_9] [i_2]))))) ? (((((/* implicit */_Bool) arr_36 [i_9] [i_10])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) >= (arr_27 [i_10])))) : (var_5))) : (((/* implicit */int) (unsigned short)35667))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */signed char) var_4);
                            var_24 = ((/* implicit */_Bool) (signed char)3);
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) var_0)) : (((arr_28 [i_10] [13U]) ? (((/* implicit */int) arr_21 [i_12] [i_11] [i_10] [i_2])) : (-1333963545)))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned short) 4294967270U);
                var_27 *= ((/* implicit */unsigned long long int) arr_39 [i_2] [(signed char)14]);
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 15; i_13 += 2) 
            {
                var_28 = ((/* implicit */_Bool) arr_29 [i_2] [i_9]);
                var_29 = arr_24 [i_2] [i_2] [i_2] [i_2];
                arr_48 [i_13] [i_9] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_23 [i_2] [i_9] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_2] [i_9] [(_Bool)1] [i_13]))))) < (((/* implicit */unsigned long long int) var_2))));
            }
            for (signed char i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                arr_51 [i_2] [i_2] [(signed char)0] = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_30 ^= var_4;
            }
            /* vectorizable */
            for (unsigned char i_15 = 3; i_15 < 13; i_15 += 2) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 3] [i_15 - 3] [i_15 + 4])) || (((/* implicit */_Bool) arr_41 [i_15 + 3] [i_15 + 3] [i_15 + 2] [i_15 + 3] [i_15 - 3] [i_15 - 3]))));
                var_32 *= ((/* implicit */short) ((unsigned long long int) arr_19 [i_15 + 2] [i_9] [i_15]));
            }
        }
    }
    for (int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_22 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) (_Bool)1))))))) < (((((/* implicit */_Bool) ((arr_12 [i_16] [i_16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_27 [i_16])))) ? (((unsigned long long int) arr_53 [i_16] [i_16] [i_16])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_16] [i_16]))))))))));
        var_34 = ((/* implicit */signed char) (-(var_3)));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_45 [(short)16] [i_16] [i_16] [i_16]))));
    }
    var_36 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (short i_17 = 2; i_17 < 16; i_17 += 1) 
    {
        var_37 ^= ((/* implicit */_Bool) ((unsigned long long int) min((var_6), (var_8))));
        arr_62 [13ULL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_58 [i_17])), (((unsigned long long int) ((arr_58 [i_17 - 1]) ? (((/* implicit */int) arr_58 [i_17])) : (((/* implicit */int) (unsigned short)29869)))))));
    }
    for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 1) 
    {
        var_38 = ((((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((arr_63 [(_Bool)1]), (((/* implicit */unsigned long long int) var_1)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-7)) + (((/* implicit */int) ((signed char) (_Bool)1)))))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -848076541)) ? (arr_63 [i_18 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_18] [i_18 - 2])))))) && (((/* implicit */_Bool) (-(8256316768243447521ULL))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10190427305466104115ULL)) ? (((/* implicit */int) arr_64 [i_18] [i_18])) : (((/* implicit */int) arr_64 [i_18] [14ULL]))))) ? (((/* implicit */int) ((signed char) arr_64 [i_18] [i_18]))) : ((-(((/* implicit */int) arr_64 [i_18 + 2] [i_18 + 2]))))))));
        /* LoopNest 3 */
        for (short i_19 = 1; i_19 < 24; i_19 += 4) 
        {
            for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 2; i_21 < 23; i_21 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 2; i_22 < 21; i_22 += 4) 
                        {
                            var_40 = ((/* implicit */signed char) (-(arr_74 [i_22] [i_19] [i_22 + 4] [i_22 + 3] [i_22 - 2] [i_22])));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) | (arr_74 [i_21 - 2] [i_19] [i_21 + 1] [(signed char)22] [i_19] [(signed char)22])));
                        }
                        /* vectorizable */
                        for (unsigned short i_23 = 0; i_23 < 25; i_23 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_76 [i_18] [i_18 + 2] [i_18])) ? (((/* implicit */int) arr_68 [i_18] [i_18] [i_18] [i_21])) : (((/* implicit */int) var_6))))));
                            var_43 = ((/* implicit */unsigned char) var_12);
                        }
                        /* LoopSeq 4 */
                        for (short i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            var_44 = arr_67 [i_19] [i_19];
                            arr_81 [i_18] [i_19] [i_20] [i_21] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))) >> (((/* implicit */int) arr_79 [(signed char)21] [i_19] [i_18] [i_21 + 2] [i_24]))));
                            var_45 ^= ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-26))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_66 [i_19]), (arr_71 [i_18 - 2] [i_19 + 1] [i_24] [i_19 + 1]))))) : (((((/* implicit */unsigned long long int) var_2)) & (arr_77 [i_18] [i_19] [i_19] [i_19]))))) : (((/* implicit */unsigned long long int) (~(4294967270U)))));
                        }
                        for (unsigned char i_25 = 4; i_25 < 23; i_25 += 1) 
                        {
                            var_46 &= ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) arr_64 [i_19] [(signed char)4])), (8256316768243447536ULL))), (((/* implicit */unsigned long long int) arr_82 [i_18 + 1] [i_19 - 1] [i_20] [i_21])))), (((/* implicit */unsigned long long int) var_12))));
                            arr_84 [i_18] [(_Bool)1] [i_20] [10ULL] [10ULL] [(_Bool)0] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_68 [(_Bool)1] [i_21] [i_20] [i_21 + 2])), (var_13)));
                            arr_85 [i_19] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3256445312U)) ? (arr_73 [(signed char)3] [i_19] [i_20] [i_21 + 1] [i_19] [i_25 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) | ((~(arr_74 [i_18 - 2] [i_19] [i_19 + 1] [i_21 - 1] [i_25 - 4] [i_25 + 2])))));
                        }
                        for (int i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            var_47 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_66 [i_19 + 1]))))));
                            var_48 = ((/* implicit */unsigned long long int) ((((((10190427305466104095ULL) >= (((/* implicit */unsigned long long int) var_13)))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) max((arr_66 [i_18 - 2]), (arr_66 [i_18 + 2])))) : (((int) ((((/* implicit */int) arr_86 [i_18] [i_21] [(signed char)16] [i_21 + 2] [i_19] [i_18])) << (((((/* implicit */int) arr_66 [i_21])) + (11))))))));
                        }
                        for (int i_27 = 0; i_27 < 25; i_27 += 1) 
                        {
                            var_49 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_69 [i_19 - 1] [i_19 - 1] [i_27])) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_74 [i_19 - 1] [i_19] [i_18] [i_18 + 3] [i_19] [i_18])))))));
                            var_50 ^= ((/* implicit */_Bool) var_2);
                            var_51 += ((/* implicit */int) max((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_82 [i_21 + 1] [i_19 - 1] [i_19 + 1] [i_18 - 1])))))));
                        }
                        var_52 += ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
    }
}
