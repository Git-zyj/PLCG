/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29588
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) ((18446744073709551611ULL) % (((/* implicit */unsigned long long int) 2U))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [(signed char)7])))) : (((unsigned long long int) 6602126574146283291ULL))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)18])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) + (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_10 [i_4] [i_2] [(unsigned char)17] [(unsigned short)18] = ((/* implicit */long long int) ((arr_1 [i_2]) | (arr_2 [i_4])));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_7 [i_3] [i_4])) : (((/* implicit */int) ((short) arr_8 [13U] [(short)13] [(unsigned short)18] [(unsigned short)3]))))))));
                    }
                    var_18 = ((/* implicit */short) ((arr_6 [i_1] [i_2]) * (arr_6 [i_3] [i_2])));
                }
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_3 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [(short)2] [(short)2] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_16 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [i_5]))) : (arr_6 [i_1] [i_1])));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_7 [16ULL] [i_7])))))))));
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_5] [i_7])) : (((/* implicit */int) arr_17 [i_6]))));
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_6] [i_5] [i_1]))) & (arr_6 [i_1] [i_8])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_5] [(unsigned char)18])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_1] [i_5] [11U] [i_8])) - (839)))))) : (((unsigned long long int) arr_20 [i_1] [i_1] [i_1] [i_1]))));
                        arr_22 [i_1] [16U] [i_6] [i_5] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_8] [i_6] [i_1]))))) ? (((((/* implicit */_Bool) arr_16 [16U] [i_1])) ? (arr_19 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_5] [i_6] [i_8])))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_5] [i_6])) : (((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)19] [(unsigned short)14])))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_25 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9]))) * (arr_23 [i_9]))), (((/* implicit */unsigned long long int) ((arr_2 [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [6ULL] [i_9]))))))))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_9] [i_9] [(unsigned short)3]) << (((arr_13 [i_9] [i_9] [i_9]) - (6259285357175541052LL)))))) : (arr_23 [i_9])));
        var_24 = ((/* implicit */_Bool) ((long long int) 4166030454U));
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) var_0);
        /* LoopSeq 3 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10]))) : (arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))), (min((((/* implicit */unsigned long long int) arr_29 [i_10] [i_11])), (arr_37 [i_10] [i_10] [i_12] [i_13] [12U])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_28 [i_14]), (arr_27 [i_13])))) | (((int) arr_37 [i_10] [i_10] [i_12] [i_13] [i_14]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(unsigned char)10] [i_11] [(short)14])) ? (arr_0 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [10U] [i_11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_35 [i_14] [i_12] [i_12] [i_11] [i_14])))) : (((unsigned int) arr_26 [i_10] [i_10])))))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14])) ? (arr_1 [i_10]) : (arr_1 [i_11])))) ? (((((/* implicit */_Bool) arr_1 [i_11])) ? (arr_1 [i_10]) : (arr_1 [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_13]) >= (arr_1 [i_13]))))))))));
                            var_28 = ((/* implicit */signed char) max((max((min((((/* implicit */long long int) arr_33 [i_10] [i_10] [i_10])), (arr_0 [i_14]))), (var_7))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_10])) || (((/* implicit */_Bool) arr_28 [i_13]))))), ((~(arr_26 [i_12] [(short)12]))))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_10] [i_10] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_34 [i_10] [i_10] [5ULL] [5ULL] [i_11] [i_11]), (arr_32 [i_10] [i_10] [i_11])))) ? (min((arr_33 [i_10] [i_10] [i_10]), (arr_34 [2ULL] [i_11] [i_11] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (arr_34 [i_10] [i_10] [i_11] [i_11] [i_11] [i_11])));
        }
        for (unsigned short i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            var_29 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((short) arr_26 [18ULL] [i_15 + 2])), (((/* implicit */short) ((signed char) arr_29 [i_15 + 2] [10U])))))), (((long long int) var_4))));
            var_30 |= ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_29 [(signed char)12] [(signed char)12])))) ? (arr_30 [(signed char)0] [i_10] [i_10]) : ((-(arr_37 [i_10] [i_10] [i_15] [i_15] [i_15 - 1]))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_10] [i_16]))))), (arr_35 [i_16] [i_16] [i_10] [i_10] [i_16]))), (((/* implicit */long long int) min((((arr_36 [i_10] [i_16]) <= (arr_0 [i_16]))), (((arr_32 [i_10] [19] [19]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_16])))))))))))));
            arr_43 [i_10] [i_10] = ((/* implicit */unsigned char) arr_35 [3U] [(signed char)7] [i_10] [i_16] [i_10]);
            var_32 = ((/* implicit */unsigned int) arr_30 [i_10] [i_16] [i_10]);
        }
        var_33 = ((/* implicit */unsigned int) min((var_33), (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [4ULL]))) >= (arr_33 [i_10] [i_10] [(signed char)20])))), (arr_33 [i_10] [i_10] [(_Bool)0])))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            {
                                arr_53 [i_10] [i_10] [i_18] [i_19] [i_19] [i_20] [i_17] |= ((/* implicit */unsigned char) arr_42 [i_20] [i_17] [i_10]);
                                var_34 = ((/* implicit */unsigned long long int) arr_46 [i_10]);
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_19]))) | (((unsigned int) var_0)))) << (((((((/* implicit */_Bool) arr_45 [i_20])) ? (min((arr_32 [i_10] [i_18] [i_20]), (arr_51 [i_20] [i_19] [i_19] [i_18] [i_18] [(short)3] [i_10]))) : (max((arr_47 [i_10] [i_10] [i_10]), (arr_32 [i_10] [i_10] [i_10]))))) - (948488009U))))))));
                                arr_54 [i_10] [i_17] [i_18] [i_18] [i_17] [i_20] |= ((/* implicit */unsigned char) arr_36 [i_17] [i_20]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 2; i_21 < 21; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            {
                                var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_10] [i_17] [i_18] [i_10] [i_21 - 2] [i_17]))) : (7447042013106966956LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_50 [i_10] [i_17] [i_17] [(signed char)2] [i_21 - 1] [18LL])) < (((/* implicit */int) arr_50 [i_10] [i_17] [8ULL] [i_21 + 1] [i_21 + 1] [i_22]))))) : (((((/* implicit */_Bool) arr_50 [i_21] [i_17] [i_22] [i_21] [i_21 - 1] [(signed char)0])) ? (((/* implicit */int) arr_50 [i_10] [i_17] [i_17] [i_17] [i_21 - 1] [i_17])) : (((/* implicit */int) arr_50 [i_10] [i_17] [i_18] [i_21 - 1] [i_21 - 1] [i_17]))))));
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_36 [i_18] [(signed char)2]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_45 [i_10])), (arr_31 [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */unsigned long long int) arr_33 [i_10] [i_18] [i_10])) : (arr_55 [i_10] [i_21] [i_10] [i_10])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) arr_39 [i_10])), (var_11)))), (((((/* implicit */_Bool) arr_37 [i_10] [i_17] [i_18] [i_22] [i_22])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_44 [i_10]))))))) : (min((((/* implicit */unsigned int) var_11)), (arr_34 [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21 - 1] [i_21 - 1] [i_21])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
    {
        var_38 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) min((arr_60 [i_23]), (((/* implicit */unsigned int) (signed char)-32)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_23])) ? (arr_60 [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_23])))))) / (arr_0 [i_23])))));
        /* LoopSeq 1 */
        for (long long int i_24 = 3; i_24 < 22; i_24 += 1) 
        {
            var_39 = arr_64 [i_23] [i_23] [i_24 - 1];
            var_40 = ((/* implicit */unsigned short) arr_60 [i_23]);
        }
        var_41 = ((/* implicit */short) min((var_41), (arr_63 [i_23])));
    }
    /* LoopNest 2 */
    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 2) 
    {
        for (unsigned int i_26 = 2; i_26 < 24; i_26 += 1) 
        {
            {
                arr_72 [i_25] |= ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) arr_69 [17U])) ? (arr_68 [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_25])))))), (((/* implicit */long long int) (~(arr_66 [i_26 - 1] [i_26 + 1]))))));
                var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_6)))) + (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_71 [i_25] [i_26 - 1])) ? (arr_71 [i_25] [i_26 - 2]) : (arr_71 [i_25] [i_26 - 1]))) : (((/* implicit */long long int) (+(((arr_66 [i_25] [i_25]) / (arr_66 [17U] [(signed char)1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        for (long long int i_28 = 0; i_28 < 13; i_28 += 4) 
        {
            for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                arr_84 [i_27] [i_28] [i_29] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_65 [i_27])) ? (((/* implicit */unsigned long long int) arr_49 [7LL] [i_28] [i_28] [i_29] [i_28] [(_Bool)0])) : (arr_9 [15LL] [i_29] [12] [i_31]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_27] [(short)1] [i_29] [i_30] [i_30] [i_31] [i_31]))) > (arr_23 [i_31])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned short)7))) << ((((+(((/* implicit */int) arr_40 [i_30] [i_30])))) + (103)))))) : (max((arr_0 [i_30]), (((/* implicit */long long int) min((arr_24 [i_30]), (arr_47 [i_27] [i_28] [i_29]))))))));
                                var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_62 [i_28] [i_27]), (arr_62 [i_27] [i_27])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_51 [i_27] [(short)14] [i_28] [i_28] [i_27] [i_30] [i_31]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_28])))))), (min((((/* implicit */unsigned int) arr_3 [i_27] [i_27])), (arr_2 [i_29])))))) : (((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */_Bool) 633972050U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_28]))) : (21ULL))) : (((/* implicit */unsigned long long int) ((arr_51 [i_27] [i_27] [i_28] [i_28] [i_29] [i_30] [i_31]) % (arr_2 [i_30]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_32 = 2; i_32 < 11; i_32 += 4) 
                    {
                        for (unsigned char i_33 = 0; i_33 < 13; i_33 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_62 [i_32] [i_32])), (arr_13 [i_28] [10U] [20U])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_27] [i_28]))) >= (arr_6 [(signed char)10] [i_33])))) : (((/* implicit */int) ((signed char) arr_78 [i_28] [i_29] [(unsigned short)3] [i_33])))))));
                                arr_91 [i_27] [i_28] [i_29] [i_32 - 2] [i_33] |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (arr_5 [i_33] [i_32]))))) ^ (var_4))) < (arr_82 [i_32 - 1])));
                                var_45 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((signed char) arr_67 [i_32]))) - (((/* implicit */int) arr_3 [(signed char)9] [i_33])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
