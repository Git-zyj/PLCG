/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35783
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1])) | ((~(((/* implicit */int) arr_2 [i_2])))))) & ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-1))));
                            arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1] [i_0 + 1])) ? ((-(((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) || (((_Bool) arr_6 [i_0])))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))))) || (((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0 + 1])))))) < (max((((/* implicit */unsigned long long int) ((unsigned char) (signed char)120))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5018))) : (arr_0 [(short)11] [i_1])))))));
                        }
                        var_16 = ((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) (_Bool)1))));
                        var_17 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)13] [i_0 - 2] [i_0] [i_0])))))));
                        var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_3))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) max((-3125798858346583670LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)14)) < (((/* implicit */int) (unsigned char)171)))))));
            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_0] [i_6] [i_0])), (var_11)))) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) && (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_0 - 2] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_6]))))))) : ((+(((/* implicit */int) ((short) (unsigned char)255)))))));
        }
        for (short i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1]))));
            var_22 = ((/* implicit */_Bool) min((var_22), (max((min((arr_19 [i_0] [i_0 + 2]), (arr_19 [i_0 - 1] [i_0 + 2]))), (((((/* implicit */int) var_11)) < (arr_4 [i_0 - 3])))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_23 = (!(((/* implicit */_Bool) var_1)));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((~(-6697566641728551548LL)))));
                var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_0] [i_0 - 3] [i_0 + 2] [i_7] [i_8]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_8])) || (arr_1 [i_8])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_7 - 2] [i_8] [i_8] [i_0])) + (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_8 - 1]))) : (max((280375465082880LL), (((/* implicit */long long int) 0))))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_6 [i_0 + 2]))))));
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 - 2] [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_15 [i_9] [i_0])), (var_3))))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_10] [i_10 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_29 += ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_12]))));
                            var_30 ^= ((/* implicit */unsigned short) arr_32 [i_0] [(short)8] [i_11] [i_12] [i_13]);
                            arr_36 [i_11] [i_10] [i_11] = ((/* implicit */signed char) arr_25 [i_0] [i_0] [(unsigned char)3]);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_29 [i_10 + 2] [(unsigned char)5] [i_0 - 2] [i_12])) : (((/* implicit */int) arr_29 [i_10 + 1] [i_10] [i_0 + 1] [8U]))));
                        }
                        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) -1);
                            var_33 = ((/* implicit */unsigned short) arr_32 [(unsigned short)7] [i_10 - 2] [(unsigned short)7] [i_12] [i_14 + 3]);
                        }
                        for (unsigned short i_15 = 2; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3125798858346583688LL)) ? (((/* implicit */int) (unsigned char)172)) : (2101662859)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (2681895659U) : (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172))))))));
                            var_35 = ((/* implicit */_Bool) ((arr_2 [i_0 - 3]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0 - 3]))));
                        }
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(signed char)4] [i_0 - 1] [(unsigned char)10] [i_10 - 1])) ? (((/* implicit */unsigned long long int) arr_28 [i_12] [i_10])) : ((~(var_10)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 11; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */int) var_4);
                        var_38 = ((/* implicit */unsigned short) 2047U);
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            arr_47 [i_16] [i_11] [i_11] [i_16] [i_17] [i_10] = ((/* implicit */unsigned short) ((short) (short)-14067));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 3])) && (((/* implicit */_Bool) var_7)))))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)244)) ? (((((/* implicit */_Bool) arr_45 [i_0] [i_0])) ? (arr_45 [i_0] [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))))) : (((/* implicit */unsigned long long int) (+(var_1))))));
                        }
                        var_41 = ((/* implicit */int) arr_14 [i_11] [i_10] [i_11] [8U] [i_16] [i_0 + 1]);
                        var_42 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [(signed char)6] [i_10] [2] [i_11])) ? (((/* implicit */int) (short)5952)) : (((/* implicit */int) var_9))))) - (var_10)));
                    }
                    arr_48 [i_11] [i_11] [i_10 + 2] [i_11] = ((/* implicit */unsigned char) (((!(((((/* implicit */int) arr_33 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) 1385618765))) : (((/* implicit */int) ((((/* implicit */int) ((short) var_0))) < ((-(((/* implicit */int) var_4)))))))));
                    var_43 ^= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11] [i_10]))) < (arr_16 [i_11] [i_10 + 3] [i_0 - 3]))) ? (((((/* implicit */_Bool) arr_6 [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_2))))) : (arr_0 [i_0] [i_11]))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_18 = 3; i_18 < 12; i_18 += 4) /* same iter space */
    {
        var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_18] [i_18] [i_18] [i_18 + 2])) ? (arr_46 [i_18 - 1] [i_18 - 1] [i_18 - 3] [i_18 - 1] [i_18 - 1]) : (((/* implicit */unsigned int) -1914231732)))))))) : (-7)));
        var_45 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) arr_29 [i_18] [i_18] [i_18 + 2] [i_18]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_18] [i_18] [(short)1])) : (((/* implicit */int) arr_30 [i_18] [i_18] [i_18] [i_18])))) : (((/* implicit */int) ((((/* implicit */int) arr_33 [2U] [2U] [i_18] [i_18 + 2] [i_18] [i_18] [i_18 + 2])) < (var_0)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_44 [i_18 + 1] [i_18] [(short)4] [i_18] [i_18 - 1] [(unsigned short)1])) : (((((/* implicit */_Bool) arr_38 [i_18] [i_18] [i_18 - 2] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_34 [i_18 - 2] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_26 [i_18] [i_18 - 1] [i_18 - 1]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_46 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)83)) || (((/* implicit */_Bool) arr_37 [i_18 - 1] [i_19] [i_19] [i_19]))))), (((((/* implicit */_Bool) arr_37 [i_18 + 2] [i_19] [i_19] [i_19])) ? (arr_18 [i_18 + 2] [i_18 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_18 - 3] [i_19] [i_19] [i_19])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
            {
                var_47 = ((/* implicit */short) ((arr_46 [i_18] [9U] [i_18 + 1] [i_18 + 1] [(_Bool)1]) < (arr_46 [i_18] [i_19] [i_18 + 2] [i_18] [(unsigned char)1])));
                arr_58 [i_18] [i_20] [i_19] [i_18] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) ((_Bool) var_0)))));
                var_48 = ((/* implicit */unsigned long long int) arr_19 [i_18] [i_20]);
                var_49 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_11)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_50 &= ((/* implicit */short) 1762188993U);
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                var_51 = ((/* implicit */unsigned short) ((_Bool) arr_61 [i_18]));
                var_52 = ((/* implicit */int) (~(arr_22 [i_18] [i_18 + 2] [i_18 - 2])));
                arr_64 [i_18 - 3] [i_21] [i_18] = ((/* implicit */short) ((int) (~(((/* implicit */int) arr_9 [i_18] [i_18] [i_22] [i_22] [i_22])))));
            }
            arr_65 [i_18] [i_18 - 1] [i_18] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (unsigned long long int i_23 = 0; i_23 < 14; i_23 += 3) 
            {
                var_53 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                /* LoopSeq 1 */
                for (unsigned char i_24 = 1; i_24 < 13; i_24 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */int) var_6);
                        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) 1809722440)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (63U)));
                        var_56 = ((/* implicit */unsigned char) -7);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned char) arr_26 [i_24] [i_23] [i_21]);
                        var_58 = ((/* implicit */unsigned long long int) arr_40 [i_18] [i_18] [i_18] [i_18 + 2] [i_18] [(short)2] [i_18]);
                    }
                    var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) arr_14 [i_24 - 1] [i_24 + 1] [3U] [i_24] [i_24 - 1] [i_24 - 1]))));
                    var_60 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [(short)12])) ? (((/* implicit */int) arr_61 [(unsigned short)10])) : (((/* implicit */int) arr_61 [(unsigned short)12]))));
                    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_72 [4U] [i_21] [4U] [i_21] [i_18] [i_21] [i_23])))) : (((/* implicit */int) arr_72 [i_18] [i_18] [(_Bool)1] [i_18] [i_18] [i_23] [i_24 - 1]))));
                }
            }
            for (unsigned short i_27 = 0; i_27 < 14; i_27 += 4) 
            {
                var_62 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_60 [i_18 - 3] [i_27] [i_18 - 3])) : (((((/* implicit */_Bool) arr_4 [(short)12])) ? (((/* implicit */int) arr_9 [i_18 - 3] [(_Bool)1] [(_Bool)1] [(unsigned short)7] [i_27])) : (((/* implicit */int) arr_63 [i_18] [i_18] [i_27]))))));
                var_63 = ((/* implicit */short) var_5);
                var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1914231722)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
            }
        }
        var_65 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_4), (arr_40 [i_18 + 1] [9U] [i_18 + 1] [(short)5] [i_18] [i_18 - 1] [i_18])))) ? (arr_38 [i_18] [i_18] [i_18] [i_18 - 3] [i_18] [(short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (arr_24 [i_18] [i_18 - 1] [i_18 - 2] [i_18 + 2]))))))), (((/* implicit */unsigned int) arr_44 [i_18] [i_18 - 3] [4] [0ULL] [i_18 + 1] [i_18]))));
    }
    var_66 = ((/* implicit */int) var_4);
}
