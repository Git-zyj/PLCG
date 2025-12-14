/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4938
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
    var_15 = ((/* implicit */signed char) ((((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) ^ (3576948607U)))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_3))))))));
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 |= ((/* implicit */int) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] [i_1] = ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) 3683959008U)) : (arr_6 [i_1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_13 [i_3] [i_0]))) >> (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) * (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])) : (2526397514968295215ULL)))))));
                        var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_2]))) != (arr_6 [i_3]))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 611008287U)), (max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (9274500828149680437ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1])) % (((/* implicit */int) arr_13 [i_2] [i_2])))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        arr_18 [i_1] [i_2] [i_1] [i_1] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4] [i_1])) >> (((((/* implicit */int) arr_11 [i_0])) - (42365)))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_4] [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1]))) : (arr_6 [i_1]))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))))));
                        arr_19 [i_1] [i_1] [i_1] [i_2] [i_4] = max((((/* implicit */long long int) max((((/* implicit */int) (signed char)127)), (((((/* implicit */_Bool) -7916787508323533108LL)) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) arr_13 [i_2] [i_4]))))))), (arr_7 [i_1] [i_1]));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) min((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_8)) != (arr_4 [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])))) ? (max((arr_1 [i_5] [i_5]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_5]), (arr_13 [i_5] [i_5]))))))), (min((((((/* implicit */unsigned long long int) var_9)) + (17951337325602579275ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 366228147U)), (arr_7 [i_5] [i_5]))))))));
        var_21 -= ((/* implicit */unsigned long long int) min((max((arr_2 [i_5] [i_5] [i_5]), (arr_2 [i_5] [i_5] [i_5]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])))))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 4; i_6 < 22; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_7] [i_5])) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_0 [i_5] [i_6 - 2])))) <= (((/* implicit */int) min((((/* implicit */short) arr_0 [i_5] [i_6 + 1])), (var_4)))))))));
                var_23 += ((/* implicit */unsigned short) var_4);
            }
            var_24 -= ((/* implicit */unsigned short) (unsigned char)251);
        }
        for (unsigned short i_8 = 4; i_8 < 22; i_8 += 4) /* same iter space */
        {
            arr_31 [i_5] [i_5] = ((/* implicit */long long int) 14186224405578026557ULL);
            arr_32 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24051))) * (495406748106972340ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 611008287U)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_5]))))) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_20 [i_5])), (arr_5 [i_5] [i_5] [i_5]))))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (long long int i_10 = 3; i_10 < 23; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((arr_36 [i_8] [i_8] [i_8]) | (((/* implicit */long long int) var_5)))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_11 [i_5])) - (42355)))))) < (min((((14186224405578026558ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_8] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_5] [i_8] [i_5] [i_10])) * (((/* implicit */int) arr_24 [i_5] [i_5])))))))));
                        var_26 *= ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned char) (((-(var_12))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9] [i_9])))))))))));
                        var_27 = ((/* implicit */unsigned long long int) (((((-(arr_40 [i_10] [i_5] [i_9] [i_5] [i_5]))) % (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_5]))))))) >= ((-((~(((/* implicit */int) arr_12 [i_5] [i_8] [i_9] [i_10]))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 4; i_11 < 22; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_12 = 3; i_12 < 22; i_12 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((short) arr_11 [i_5]));
                arr_48 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_11 - 1] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_5] [i_12]))) : (((unsigned int) (-(((/* implicit */int) arr_44 [i_12])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                var_29 = ((/* implicit */long long int) (unsigned char)11);
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) ((arr_1 [i_11] [i_13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_11])))))) && (((/* implicit */_Bool) arr_26 [i_11 + 1])));
                    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_14] [i_5]))));
                    arr_54 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_13] [i_11] [i_5]))) | (arr_50 [i_5] [i_11] [i_5] [i_14]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5])))));
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                arr_57 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (max((arr_53 [i_5] [i_5] [i_15] [i_15]), (arr_20 [i_15])))));
                arr_58 [i_5] [i_5] [i_15] = ((/* implicit */short) ((((((/* implicit */int) arr_21 [i_11 - 4] [i_11 + 1])) - (((/* implicit */int) arr_21 [i_11 - 4] [i_11 + 1])))) <= ((-(((/* implicit */int) arr_21 [i_11 - 4] [i_11 + 1]))))));
                arr_59 [i_5] [i_11] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_20 [i_5])))))) & (((/* implicit */int) arr_0 [i_15] [i_5]))));
            }
            arr_60 [i_5] = ((/* implicit */unsigned int) min((min((arr_45 [i_5] [i_5] [i_5]), (((/* implicit */long long int) arr_13 [i_11 - 1] [i_11 + 1])))), (((/* implicit */long long int) max((((arr_26 [i_11]) == (((/* implicit */int) var_10)))), ((!(((/* implicit */_Bool) arr_24 [i_5] [i_11])))))))));
        }
        /* LoopNest 2 */
        for (signed char i_16 = 1; i_16 < 23; i_16 += 2) 
        {
            for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                {
                    arr_65 [i_5] [i_5] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_49 [i_16])) | (((/* implicit */int) (short)32749)))), (((/* implicit */int) ((arr_28 [i_5] [i_5] [i_17]) <= (((/* implicit */unsigned long long int) arr_50 [i_5] [i_16] [i_16] [i_17])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_47 [i_5] [i_5] [i_17]) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5])))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)243)) >> (((arr_8 [i_5] [i_5] [i_5]) - (6728487242181150966ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5] [i_16])) | (((/* implicit */int) arr_33 [i_17] [i_16] [i_16]))))) : (arr_37 [i_16] [i_16] [i_16 - 1] [i_16 + 1])))));
                    /* LoopSeq 2 */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)101)), (arr_41 [i_16] [i_18])))) & ((-(((/* implicit */int) arr_63 [i_17] [i_17]))))))) / (((((/* implicit */unsigned int) ((var_5) & (((/* implicit */int) arr_62 [i_18] [i_17]))))) % (((((/* implicit */_Bool) arr_56 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_5] [i_5]))) : (arr_37 [i_18] [i_17] [i_5] [i_5]))))))))));
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) -13)) : (var_13)))), (max((((/* implicit */unsigned long long int) arr_51 [i_18] [i_17] [i_5] [i_5])), (arr_6 [i_16])))))) ? (((((((/* implicit */int) arr_13 [i_5] [i_5])) % (((/* implicit */int) (signed char)-37)))) - (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_61 [i_5] [i_5])) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((arr_4 [i_5] [i_18] [i_5]) ^ (((/* implicit */int) arr_23 [i_5] [i_16])))) <= (((arr_67 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) >> (((((/* implicit */int) var_11)) - (122))))))))));
                    }
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_66 [i_5] [i_16] [i_16] [i_19] [i_16])) : (((/* implicit */int) arr_23 [i_5] [i_5])))) - (((/* implicit */int) arr_62 [i_16] [i_19]))))) ? ((-(((/* implicit */int) arr_27 [i_5] [i_5] [i_16 - 1] [i_19])))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_64 [i_5] [i_16] [i_17])))), (((_Bool) arr_35 [i_5] [i_5] [i_5])))))));
                        var_35 = ((/* implicit */unsigned long long int) arr_66 [i_5] [i_5] [i_5] [i_19] [i_19]);
                    }
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned long long int) min((arr_12 [i_5] [i_16 + 1] [i_17] [i_5]), (arr_12 [i_5] [i_16] [i_16 + 1] [i_17])))))));
                }
            } 
        } 
    }
    for (unsigned short i_20 = 3; i_20 < 21; i_20 += 4) 
    {
        var_37 = ((/* implicit */int) (-(((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_20] [i_20 - 2])))))));
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            for (unsigned short i_22 = 1; i_22 < 22; i_22 += 1) 
            {
                {
                    var_38 = ((/* implicit */long long int) arr_21 [i_21] [i_22]);
                    /* LoopNest 2 */
                    for (int i_23 = 3; i_23 < 21; i_23 += 4) 
                    {
                        for (short i_24 = 0; i_24 < 23; i_24 += 3) 
                        {
                            {
                                arr_87 [i_20] [i_20] [i_20] [i_23] [i_20] [i_20] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_1))) == (min((arr_67 [i_24] [i_21] [i_23] [i_22] [i_21] [i_20]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_20] [i_20])))))))));
                                var_39 = min((min((arr_39 [i_22] [i_20] [i_22] [i_22]), (arr_39 [i_22] [i_20] [i_22] [i_22]))), (max((arr_39 [i_22] [i_20] [i_22] [i_22]), (arr_39 [i_22] [i_20] [i_22] [i_22]))));
                                var_40 = ((/* implicit */int) ((unsigned short) (((!(((/* implicit */_Bool) arr_36 [i_20] [i_20] [i_20])))) ? (max((((/* implicit */long long int) arr_75 [i_20] [i_21])), (arr_36 [i_22] [i_21] [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_84 [i_20] [i_21] [i_22] [i_21] [i_24] [i_24]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_20] [i_20]))))))))));
                                arr_88 [i_20] [i_20] [i_22] [i_24] [i_24] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) arr_50 [i_21] [i_22] [i_23] [i_24])) | (max((((/* implicit */long long int) (unsigned short)13336)), (var_3))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_43 [i_20] [i_20] [i_20])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_20] [i_20] [i_22] [i_23] [i_24]))) : (var_12))))))));
                                var_41 = ((/* implicit */unsigned short) 1462102685040730145LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_42 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_55 [(unsigned char)4] [i_20]))));
    }
    var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) - (var_14))) >> (((((/* implicit */int) max((var_10), (((/* implicit */short) var_2))))) - (7748)))))), (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_9)) ? (2822628243U) : (var_12)))))));
}
