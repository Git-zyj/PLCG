/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192587
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_10 *= ((/* implicit */_Bool) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) min((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0 - 1])))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                            {
                                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (-4356182886233086869LL))))));
                                arr_13 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (((-(arr_9 [i_0 + 1] [i_0] [i_0 - 1]))) ^ ((~((~(-24LL)))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 9936546825587324219ULL)) ? (536608768U) : (3758358528U))))))));
                                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))));
                                arr_18 [i_2] [i_0] = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) % (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
                            }
                            for (unsigned int i_6 = 3; i_6 < 7; i_6 += 3) 
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 959743450U)) ? (((/* implicit */unsigned long long int) 3758358528U)) : (11157009429852171714ULL))))));
                                var_15 = ((/* implicit */long long int) 11157009429852171701ULL);
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_6] [i_6 + 2] [i_6 + 1] [i_6] [3ULL] [i_6 - 3] [7]))));
                            }
                            for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((11LL) - (((/* implicit */long long int) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_3]))))) ? (max((((/* implicit */long long int) (_Bool)0)), (140737488355327LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_18 = ((/* implicit */unsigned long long int) (-(536608768U)));
                                arr_25 [i_7] [3LL] [5LL] [i_3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30)))))));
                            }
                            var_19 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7289734643857379887ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1609291742))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)12))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_26 [i_8])))) ? (((/* implicit */int) ((-641737151) <= (((/* implicit */int) (unsigned char)97))))) : ((~(1609291742)))))) ? (((((/* implicit */unsigned long long int) arr_26 [i_8])) | ((-(345138345946492112ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((((arr_26 [i_8]) + (2147483647))) >> (((-830692343) + (830692351)))))))))));
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_24 *= ((/* implicit */unsigned long long int) var_3);
            arr_30 [i_9] [i_9] [i_9] = ((/* implicit */int) var_7);
        }
        for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) 2146435072)) ? (3758358528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100)))))));
            arr_35 [i_8] |= ((/* implicit */unsigned char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 36LL))))), (-515300579)))));
            arr_36 [i_8] [i_10 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [3LL])) ? (((/* implicit */long long int) 67108800)) : (-41LL)));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_26 [i_10 + 2])))) ? (max((((/* implicit */unsigned long long int) var_5)), (11157009429852171728ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_34 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_32 [i_10]), (((/* implicit */unsigned char) (signed char)66)))))) : (max((24LL), (24LL)))))))))));
        }
    }
    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3335223835U), (((/* implicit */unsigned int) arr_32 [i_11]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */unsigned long long int) -67108801)) : (63ULL)))));
        var_28 = ((/* implicit */unsigned char) max((var_28), ((unsigned char)1)));
    }
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14; i_13 += 4) 
        {
            for (unsigned short i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                {
                    arr_47 [10ULL] [10ULL] [i_14 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)121))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) 2147483647U))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 4; i_15 < 15; i_15 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40127)) < (-1)));
            var_31 = max((((/* implicit */unsigned long long int) 515300578)), (11157009429852171728ULL));
            var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [1]))))) ? (arr_44 [i_15] [i_12] [i_12]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)113)))))))) ? (min((((/* implicit */long long int) arr_49 [i_15 - 3] [i_15 - 2])), (arr_45 [i_15 - 4] [i_15 - 3] [5]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [(unsigned short)2] [(unsigned short)2]))))))));
        }
        for (unsigned long long int i_16 = 4; i_16 < 15; i_16 += 4) /* same iter space */
        {
            arr_54 [(signed char)8] [0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)120), (arr_50 [(signed char)11] [i_16 - 3]))))))) << (((2897501026U) - (2897501006U)))));
            arr_55 [i_12] [i_16] [i_16] = ((/* implicit */signed char) 515300578);
        }
        for (unsigned long long int i_17 = 4; i_17 < 15; i_17 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 16; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        {
                            arr_66 [5ULL] [i_19] [i_18] [i_12] [i_12] = ((/* implicit */long long int) (+(min(((~(((/* implicit */int) (unsigned char)147)))), (((/* implicit */int) max(((unsigned short)42305), (((/* implicit */unsigned short) (unsigned char)120)))))))));
                            arr_67 [i_20] [i_19] [i_17 - 4] [i_17 - 4] [i_12] = ((/* implicit */unsigned char) (~(((11157009429852171714ULL) << (((114628183) - (114628147)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_21 = 1; i_21 < 12; i_21 += 3) 
            {
                arr_70 [i_21] [i_21] [i_21] [i_12] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)161)), (((((/* implicit */_Bool) 20700188U)) ? (-515300583) : (((/* implicit */int) (short)-24071))))));
                arr_71 [i_12] [i_12] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)137))));
            }
            for (long long int i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                var_33 = ((/* implicit */long long int) 12020821895300018264ULL);
                arr_76 [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_56 [i_17 - 3] [i_17 - 4]) ? (max((-515300579), (-1))) : ((+(((/* implicit */int) (signed char)-66)))))))));
                var_34 = ((/* implicit */long long int) (-(0)));
            }
            for (int i_23 = 0; i_23 < 16; i_23 += 3) 
            {
                arr_79 [i_23] = ((/* implicit */signed char) min((((8735188580856000373ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))), ((!(((/* implicit */_Bool) 520093696U))))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-21) : (((/* implicit */int) (unsigned short)48329))))) ? (((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) : ((((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)45)))) ? (((((/* implicit */int) arr_72 [i_12] [i_17] [i_23])) / (((/* implicit */int) (unsigned short)50827)))) : (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                arr_80 [i_12] [i_12] [i_17 - 2] [i_23] = ((/* implicit */unsigned char) -515300579);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_24 = 4; i_24 < 15; i_24 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_25 = 3; i_25 < 13; i_25 += 2) 
            {
                for (unsigned char i_26 = 0; i_26 < 16; i_26 += 4) 
                {
                    {
                        arr_88 [i_26] [(unsigned short)1] [(unsigned short)1] [(signed char)13] [(signed char)13] [i_12] = ((int) arr_58 [i_12] [i_24 - 4] [i_25] [i_26]);
                        var_36 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)0))));
                        /* LoopSeq 2 */
                        for (unsigned short i_27 = 0; i_27 < 16; i_27 += 2) 
                        {
                            arr_91 [11LL] [i_26] [i_25] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-66)) : (-13)))) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-66)) && (((/* implicit */_Bool) arr_78 [i_25 + 1] [i_26])))))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_83 [i_24] [i_24])))))))));
                        }
                        for (unsigned char i_28 = 1; i_28 < 15; i_28 += 1) 
                        {
                            arr_94 [i_12] [i_28] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((arr_84 [i_12] [i_24 - 4] [i_26] [i_28 - 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_25 - 3])))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) : (arr_89 [i_24 - 3] [i_24] [i_25] [i_26] [i_26] [i_25 + 3])));
                            var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_53 [i_25]))));
                        }
                        var_40 = ((/* implicit */_Bool) min((var_40), ((!(((/* implicit */_Bool) 3739744330784407043ULL))))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)80)))))));
            /* LoopSeq 2 */
            for (signed char i_29 = 0; i_29 < 16; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (int i_30 = 3; i_30 < 13; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 3; i_31 < 13; i_31 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_100 [(_Bool)1] [i_29] [i_29] [i_29] [i_29] [i_24 - 3] [i_12]))))));
                            var_43 *= ((/* implicit */unsigned short) arr_45 [i_12] [10LL] [i_31]);
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_24 - 1] [i_24 - 4] [i_24 - 4] [i_24 - 1])) == (((/* implicit */int) arr_60 [i_24 - 3] [i_24 - 2] [i_24 - 1] [i_24 - 1]))));
            }
            for (unsigned char i_32 = 1; i_32 < 14; i_32 += 1) 
            {
                var_45 = ((/* implicit */unsigned int) (unsigned char)36);
                var_46 *= ((524224) > (((/* implicit */int) (_Bool)1)));
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_101 [i_12] [i_32 + 2] [i_32 + 2] [i_32] [i_24] [i_12] [i_32])))) ? (arr_81 [i_32 + 2] [i_24 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_12] [i_12] [i_32])))));
                /* LoopNest 2 */
                for (unsigned char i_33 = 0; i_33 < 16; i_33 += 4) 
                {
                    for (unsigned char i_34 = 1; i_34 < 15; i_34 += 1) 
                    {
                        {
                            var_48 += ((/* implicit */unsigned short) arr_100 [i_34] [i_34 - 1] [i_32] [i_32 + 1] [i_24 - 3] [i_24 - 2] [i_24 - 2]);
                            var_49 = ((/* implicit */long long int) (~(arr_101 [i_12] [i_24] [i_32] [6LL] [i_32 - 1] [i_24 - 1] [i_34 - 1])));
                            var_50 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) ((2918908548535031641ULL) < (((/* implicit */unsigned long long int) 524224))))) : (((/* implicit */int) (signed char)-81))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)105)) ? (((((/* implicit */_Bool) -515300579)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)65)))) : (((/* implicit */int) (signed char)66)))))));
            }
            var_52 = ((/* implicit */unsigned long long int) var_7);
        }
    }
}
