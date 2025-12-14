/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231232
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_4 [(unsigned char)1] [i_1] = ((((unsigned int) 2270089605U)) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))));
            var_20 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_21 = (signed char)-53;
                    arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)5631))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-68)), (var_5))))))) ? (((/* implicit */unsigned long long int) min((((unsigned int) 6888743583879066631LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)16)))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)13))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_0] [i_0]))) % (var_6)))))));
                }
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (arr_17 [i_4 + 1] [i_4])))) * (((/* implicit */int) min((arr_0 [i_4] [i_4 - 2]), ((signed char)-14)))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4] [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4]))))) ^ (arr_5 [i_4] [(unsigned short)15])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_0 [i_4] [i_4])) - (((/* implicit */int) var_14)))), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 0U)))))))) : (min((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_4 + 2] [i_4]))), (((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 - 1] [i_4]))))));
        arr_18 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30529)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59904))) : (arr_3 [i_4 - 1] [i_4 + 1])))) ? (max((((/* implicit */unsigned int) (signed char)12)), (3399969856U))) : (max((arr_3 [i_4 - 2] [i_4 - 1]), (arr_3 [i_4 - 1] [i_4 + 1])))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) arr_19 [i_7]);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        arr_29 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_8] [i_8 + 3] [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_8 + 2])) : (((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_32 [i_7] [i_9] = arr_20 [i_8 + 3];
                            var_25 += ((/* implicit */unsigned long long int) arr_15 [i_8 - 1]);
                        }
                        arr_33 [i_8] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6)) | (((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_8])) ? (arr_14 [i_5]) : (((/* implicit */int) (unsigned char)255))))));
                    }
                    for (long long int i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((arr_5 [i_5] [i_6]) << ((-(((/* implicit */int) arr_10 [(unsigned char)12] [i_6] [i_7]))))));
                        arr_36 [i_10 - 2] [i_7] = ((/* implicit */short) (!(arr_11 [i_5] [i_6] [i_7] [i_10 - 1])));
                        arr_37 [i_5] [i_6] [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 268435455)) & (((unsigned int) arr_21 [i_5] [i_7] [i_10]))));
                    }
                    var_27 = ((/* implicit */unsigned int) arr_14 [i_7]);
                }
            } 
        } 
        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((2634590597357021140ULL) & (arr_5 [i_5] [i_5]))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */long long int) max((min((((2) & (((/* implicit */int) (short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), (min((2), (((/* implicit */int) arr_38 [i_11]))))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5631)) & (((/* implicit */int) min((arr_38 [i_11]), (arr_39 [i_11] [i_11]))))));
        arr_41 [i_11] [i_11] = ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_11]))) & (894997440U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_11])))))) < (((((/* implicit */_Bool) min((arr_39 [i_11] [i_11]), (arr_38 [i_11])))) ? (((((/* implicit */int) arr_39 [i_11] [i_11])) & (((/* implicit */int) arr_38 [i_11])))) : (((/* implicit */int) max((arr_38 [i_11]), (arr_38 [i_11])))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        var_30 &= ((/* implicit */unsigned short) ((unsigned char) ((short) (!(((/* implicit */_Bool) 0ULL))))));
        arr_44 [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_12] [i_12])) ? (((/* implicit */int) arr_0 [i_12] [i_12])) : (((/* implicit */int) arr_0 [i_12] [i_12]))))), (((unsigned int) arr_0 [i_12] [i_12]))));
        /* LoopSeq 3 */
        for (signed char i_13 = 4; i_13 < 12; i_13 += 3) 
        {
            arr_47 [i_12] [i_13 + 3] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12] [i_13] [i_13]))) - (2118672975765072460ULL))));
            var_31 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_1 [i_12])))) ? (((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4194303ULL))) : (min((((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_13])), (5917908821060406234ULL))))))));
        }
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_50 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) min((min(((-(((/* implicit */int) arr_11 [i_12] [i_12] [6LL] [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [(_Bool)1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)14479)), (arr_49 [i_12])))))))));
            var_32 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_12])) & (((/* implicit */int) arr_12 [i_12] [i_12] [i_12] [i_12])))))))), ((-(((/* implicit */int) var_13))))));
            arr_51 [i_14] = ((/* implicit */unsigned short) arr_1 [i_12]);
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            var_33 += ((/* implicit */unsigned short) ((min((2746458839032446679ULL), (((/* implicit */unsigned long long int) var_0)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15211592126623705394ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)5))))) : (((((/* implicit */_Bool) 2648517773542778577LL)) ? (arr_48 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_15])))))))));
            arr_54 [i_12] = ((/* implicit */_Bool) ((max((arr_48 [i_15]), (arr_48 [i_12]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) arr_11 [i_12] [i_12] [i_15] [i_16]);
                arr_58 [i_16] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_16] [i_16] [i_16]))))) ^ (((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_14))))));
                var_35 = ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_12] [i_12] [i_12] [i_12]))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_12] [i_12]))) : ((~(((/* implicit */int) (unsigned short)33566)))));
                var_36 += ((/* implicit */signed char) (~(((/* implicit */int) arr_46 [i_16] [i_15] [i_16]))));
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) 18446744073709551615ULL))));
            }
            for (unsigned short i_17 = 3; i_17 < 14; i_17 += 2) 
            {
                arr_61 [i_17] = ((/* implicit */signed char) arr_55 [i_12] [i_17] [i_17] [i_17 - 1]);
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_17])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12])) ? (arr_5 [i_15] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((2803354978U) == (arr_3 [i_15] [i_17 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_12] [i_17 - 2]))))))));
                arr_62 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_12] [i_12])), (((((/* implicit */_Bool) 5190251634432422883ULL)) ? (((/* implicit */int) arr_57 [i_17] [i_15])) : (((/* implicit */int) arr_59 [i_12] [i_15] [i_17]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_17] [i_17] [i_17]))) : (var_2)));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_39 += min((((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_59 [i_12] [i_15] [i_12]))))) < (max((var_17), (((/* implicit */long long int) arr_55 [i_18] [i_12] [i_12] [i_12]))))))), ((signed char)-5));
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_69 [i_12] [i_12] [i_12] [i_15] [i_12] [i_18] = ((/* implicit */unsigned int) 7847455185790924598LL);
                    var_40 = ((/* implicit */unsigned short) min((var_40), ((unsigned short)47607)));
                    arr_70 [i_19] = ((/* implicit */signed char) ((max((arr_10 [i_12] [i_12] [i_12]), (arr_10 [i_12] [i_15] [i_18]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12] [i_18] [i_19]))) : (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */long long int) 0U)) : (2648517773542778584LL)))));
                    var_41 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_12] [i_12] [i_15] [i_18] [i_19])) ? (((/* implicit */int) arr_10 [i_18] [i_15] [i_12])) : (((/* implicit */int) arr_52 [i_12] [i_15]))))) ? (arr_43 [i_15]) : (((/* implicit */long long int) var_3))))));
                }
                arr_71 [i_12] [i_15] [i_18] [i_18] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_12] [i_12])) ? (((/* implicit */int) arr_39 [i_15] [i_18])) : (((/* implicit */int) arr_39 [i_12] [i_18])))), (((/* implicit */int) min((arr_39 [i_12] [(signed char)20]), (arr_39 [i_18] [i_15]))))));
                var_42 = ((/* implicit */unsigned char) arr_57 [i_12] [i_18]);
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_21 = 3; i_21 < 12; i_21 += 2) 
                {
                    var_43 = arr_56 [i_20];
                    /* LoopSeq 2 */
                    for (long long int i_22 = 3; i_22 < 11; i_22 += 3) 
                    {
                        arr_79 [i_22] [i_20] [i_21] [i_20] [i_15] [i_20] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_22 + 4])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [(unsigned char)8])))))) || (((/* implicit */_Bool) arr_66 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (((/* implicit */int) (unsigned short)2)) : (max((((/* implicit */int) ((unsigned short) arr_42 [i_21 + 2]))), (((((/* implicit */int) arr_68 [i_12] [i_12] [i_21 + 1] [i_22])) | (((/* implicit */int) var_12))))))));
                        var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_15] [i_20] [i_21 + 3] [i_21]))));
                    }
                    for (long long int i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        arr_82 [i_23] [i_23] [i_20] [i_20] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((_Bool) var_9)) ? (arr_3 [i_23] [i_15]) : (((((/* implicit */_Bool) arr_65 [i_12] [i_21 + 2] [i_21 + 2])) ? (arr_65 [i_12] [i_15] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12] [i_15] [i_21 + 3])))))));
                        arr_83 [i_12] [i_20] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_49 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_21] [i_23])))))) ? (min((arr_5 [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_1 [i_21])))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 524287)), (-928566070572248487LL)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33274)) ? (((/* implicit */int) (unsigned short)17929)) : (((/* implicit */int) (signed char)102)))))))))));
                        arr_84 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) arr_67 [i_12] [i_15] [i_15] [i_21 - 2] [i_23])) : (((/* implicit */int) (signed char)(-127 - 1)))))))) && (((/* implicit */_Bool) max((((unsigned int) arr_55 [i_12] [i_20] [i_21] [i_23])), (((((/* implicit */_Bool) arr_78 [i_12] [i_15] [i_20] [i_21 + 1] [i_23])) ? (arr_1 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_12] [i_21 - 1]))))))))));
                    }
                    arr_85 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_12] [i_21])) ? (min((3878432440U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))) : (((unsigned int) arr_12 [i_20] [i_21 + 1] [i_21] [i_21 + 1]))));
                }
                var_45 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 1ULL))))), (min((((/* implicit */unsigned short) (short)-1)), (arr_8 [i_12] [i_12] [i_12])))))), (((((((/* implicit */_Bool) 3358502817U)) ? (990972081864771879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_12] [i_12] [i_15] [i_20] [i_20]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17935)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12] [i_12] [i_15] [i_20]))))))))));
                arr_86 [i_15] [i_20] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_77 [i_12] [i_12] [i_12] [i_20] [i_12] [i_12])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_52 [i_15] [i_20]), (arr_57 [i_20] [i_15])))) && (((/* implicit */_Bool) arr_12 [i_12] [i_15] [i_12] [i_20]))))) : (((/* implicit */int) ((signed char) 13982251059590773791ULL)))));
            }
        }
    }
    for (signed char i_24 = 0; i_24 < 17; i_24 += 2) 
    {
        var_46 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)29383)) ? (((/* implicit */unsigned long long int) arr_3 [i_24] [i_24])) : (13982251059590773791ULL)))))) ? (min((arr_1 [i_24]), (((/* implicit */unsigned int) ((377644246788641609ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_24] [i_24])))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_87 [i_24])))))));
        arr_89 [i_24] = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_24] [i_24] [i_24]))))))) >= (min((arr_1 [i_24]), (((/* implicit */unsigned int) 0))))));
    }
}
