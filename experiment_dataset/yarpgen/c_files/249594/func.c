/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249594
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
    var_15 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((/* implicit */int) (short)-19021)))) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) % (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((signed char) ((((/* implicit */int) (short)-19021)) - (((/* implicit */int) var_11))))))));
            arr_6 [i_0] [i_1 - 4] [i_1] = ((/* implicit */short) var_12);
            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */int) (short)-1917)) : (((/* implicit */int) (short)-19017))));
        }
        for (int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_8))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 6ULL)))))));
            var_21 = ((/* implicit */unsigned long long int) -1487924626);
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_22 = (short)0;
            var_23 = ((/* implicit */unsigned short) ((long long int) arr_8 [i_0] [i_0]));
            var_24 *= ((/* implicit */unsigned char) ((((int) arr_11 [i_0] [i_3] [i_3])) == (-1487924611)));
            arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned long long int) (short)30283);
            arr_16 [i_0] [i_4] = ((/* implicit */_Bool) arr_15 [(unsigned char)2]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            arr_19 [i_5 - 2] [i_5 + 2] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_9 [i_5 + 1] [i_5 + 1]));
            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_5 + 2] [i_5 + 2]))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_27 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5 - 2] [i_5 - 2] [i_5] [i_5 + 1] [i_0]))) : (arr_2 [i_5 + 2] [i_5])));
                        arr_28 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_5] [i_7]) : (((/* implicit */int) var_0))))) <= (arr_11 [i_5] [i_5 - 1] [i_5 - 2])));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_5 - 2])) ? (((/* implicit */int) arr_8 [i_7] [i_7])) : (((/* implicit */int) arr_1 [i_7]))));
                        var_28 ^= ((/* implicit */unsigned short) (~(-1723266263)));
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1])) && (((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8]))));
                            arr_31 [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_5] [8LL] [i_5] [i_0]);
                            arr_32 [i_5 - 2] [i_6] [i_8 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) | (arr_11 [i_0] [i_7] [i_8 + 2])))) && (((/* implicit */_Bool) arr_14 [i_0] [i_6]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_6] [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 2]));
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_35 [i_0] [i_5] [i_0] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_5 - 2]))) / (((((/* implicit */_Bool) arr_14 [7ULL] [i_5])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        }
                    }
                } 
            } 
            arr_36 [i_0] [i_5 - 2] = ((((/* implicit */int) (unsigned short)9849)) | (((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 2])));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (arr_38 [i_10] [i_10]) : (arr_38 [i_10] [i_10])));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11] [i_11]))) == (arr_39 [i_10] [i_11])))));
            arr_41 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_11])) ? (arr_38 [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19021))))))));
            var_34 = ((/* implicit */int) (unsigned char)0);
        }
        for (int i_12 = 2; i_12 < 11; i_12 += 3) 
        {
            arr_45 [i_12] [i_12] = (-((~(arr_44 [i_10]))));
            arr_46 [i_12] [i_12] [i_10] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (-7004067946282395896LL) : (((/* implicit */long long int) 1508087439))))));
            arr_47 [i_10] [i_12] = var_4;
        }
        for (short i_13 = 4; i_13 < 11; i_13 += 3) 
        {
            var_35 = (((_Bool)0) && (((/* implicit */_Bool) (short)32512)));
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_13 - 3] [i_13 + 1])) && (((/* implicit */_Bool) var_14))));
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (unsigned short i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        {
                            arr_56 [i_16] [i_13] [i_14] [i_14] [i_13 + 2] [i_13] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_14])) && (((/* implicit */_Bool) arr_40 [i_13] [i_13]))));
                            var_37 = ((((/* implicit */_Bool) (+(-1723266263)))) ? ((-(arr_37 [i_15 + 3]))) : (((/* implicit */int) arr_52 [i_15 + 2] [i_16] [11ULL])));
                        }
                    } 
                } 
            } 
            arr_57 [i_10] [i_13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_13 - 2] [i_13 - 4] [i_13]))));
        }
    }
    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_18 = 2; i_18 < 12; i_18 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (short)-10940)))))))), (((long long int) 0ULL))));
            arr_64 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_58 [i_17])))), (max((-1723266263), (((/* implicit */int) arr_60 [i_17]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_17])) && (((/* implicit */_Bool) arr_61 [i_18 - 2]))))) : (((/* implicit */int) arr_52 [i_17] [i_18 - 1] [i_18 - 1]))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_17] [i_17] [i_18] [i_18 - 1] [i_18] [i_18] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_18 + 1] [i_18]))) : (max((((/* implicit */long long int) var_0)), (-9223372036854775797LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_42 [i_17])), (arr_44 [i_17]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((arr_61 [i_18]), (((/* implicit */unsigned long long int) arr_40 [i_17] [i_18 - 2]))))) ? (max((15298841059526859434ULL), (arr_39 [i_17] [i_18 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        for (signed char i_19 = 2; i_19 < 12; i_19 += 1) /* same iter space */
        {
            var_40 ^= ((/* implicit */unsigned long long int) arr_58 [i_19]);
            arr_67 [i_19] |= ((/* implicit */unsigned char) max((((long long int) (unsigned short)20306)), (((/* implicit */long long int) (_Bool)1))));
        }
        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_41 = ((/* implicit */int) ((signed char) (short)1835));
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_62 [i_17] [i_20] [i_17]))))), (max((((arr_39 [i_17] [i_20]) >> (((var_3) - (18033453278419057495ULL))))), (max((((/* implicit */unsigned long long int) 8159825771951691571LL)), (var_7)))))))));
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_44 [i_17])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (max((-7118853035652454492LL), (-23LL)))));
            arr_70 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 19ULL))) | (((/* implicit */int) (short)4095))));
            arr_71 [i_17] [i_20] [i_17] = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)11)), (0LL)))), (var_4));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            var_44 = ((((/* implicit */_Bool) (unsigned char)190)) ? (arr_55 [i_17] [i_17] [i_21] [(unsigned short)2] [(short)10] [i_21] [i_21]) : (((/* implicit */int) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned char i_22 = 2; i_22 < 12; i_22 += 3) 
            {
                for (unsigned char i_23 = 2; i_23 < 9; i_23 += 3) 
                {
                    {
                        arr_81 [i_22] [i_22] [i_22] [8LL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_55 [i_23] [i_23] [i_22] [i_23] [i_22] [i_21] [i_21]))));
                        var_45 = ((/* implicit */_Bool) ((arr_38 [i_22 + 1] [i_22 + 1]) | (arr_38 [i_22 - 2] [i_22])));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_17] [i_17] [i_17] [i_17] [i_22] [(unsigned short)9] [5LL])) || (arr_62 [i_22 - 1] [i_22 + 1] [i_23 + 3])));
                        /* LoopSeq 4 */
                        for (int i_24 = 0; i_24 < 13; i_24 += 3) 
                        {
                            var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4839))));
                            var_48 = ((arr_78 [i_22 - 1] [i_21] [i_22] [i_23] [i_23 + 4] [i_24]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))));
                            var_49 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 7925451419213787479ULL))) <= (-120089945)));
                            arr_86 [i_22] [0] [i_22] = ((((/* implicit */_Bool) arr_78 [i_22 + 1] [i_24] [i_22] [i_22 + 1] [i_24] [i_24])) ? (((/* implicit */int) arr_58 [i_22 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) 0U)) != (7118853035652454492LL)))));
                        }
                        for (unsigned int i_25 = 1; i_25 < 12; i_25 += 3) 
                        {
                            arr_90 [i_22] [i_21] [i_22 + 1] [i_22] [i_22] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_84 [i_22 - 2] [i_25 + 1] [i_25] [i_25 - 1] [i_25] [i_25 + 1]))));
                            var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_61 [i_17]))));
                            var_51 = ((((/* implicit */_Bool) arr_54 [i_22 + 1] [i_25 - 1] [i_25 + 1])) ? (arr_42 [i_25 - 1]) : (((/* implicit */int) ((short) 21LL))));
                        }
                        for (long long int i_26 = 0; i_26 < 13; i_26 += 3) 
                        {
                            var_52 ^= ((/* implicit */short) (+(arr_93 [i_23 + 4] [i_23 + 4] [11] [i_26] [i_26] [i_26])));
                            arr_95 [i_21] [(unsigned char)6] [i_23 + 4] [i_26] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                            arr_96 [i_21] [i_22] [i_21] = ((/* implicit */short) arr_52 [i_22 - 2] [i_22 + 1] [i_22 - 1]);
                            var_53 |= (+(arr_38 [i_22 + 1] [i_22 - 2]));
                        }
                        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 4) 
                        {
                            arr_99 [i_17] [i_17] [i_17] [i_22] [i_22] [i_23] [i_27] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_92 [i_27]))));
                            arr_100 [i_17] [i_23] [i_22] [i_22 - 1] [i_22] = (!(((/* implicit */_Bool) 11776649511970754867ULL)));
                            arr_101 [i_17] [i_17] [i_22] [i_23] [i_23 - 1] [i_22] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 627409247U)) <= (19ULL))))));
                            arr_102 [i_21] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)222)) & (((/* implicit */int) (short)1676))));
                            var_54 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1397521520)) | (0U)))) && ((!(((/* implicit */_Bool) 1420623905))))));
                        }
                    }
                } 
            } 
            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) (unsigned short)60725)) : (((/* implicit */int) var_14))));
        }
        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) 1723266263))), (arr_88 [i_17] [i_17] [i_17]))))));
    }
}
