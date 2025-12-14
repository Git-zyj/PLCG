/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208513
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((short) var_9))));
        arr_4 [i_0] [i_0] = (+((-(((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_2] [10] = ((/* implicit */long long int) ((min((((/* implicit */int) min(((short)14368), (((/* implicit */short) var_2))))), (((((/* implicit */int) (unsigned short)23221)) - (((/* implicit */int) var_1)))))) << (((arr_2 [i_3] [i_0]) + (4585305595480337130LL)))));
                                var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_7 [i_2] [i_2] [(signed char)5])), (((unsigned short) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            arr_21 [i_5] [i_5] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_6] [(short)3] [i_6 + 2] [i_6] [i_6 + 1] [i_6])) * (1983574963)));
                            arr_22 [i_0] [(signed char)2] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(signed char)9] [(signed char)9] [(signed char)9] [i_2] [i_2])) / (((/* implicit */int) arr_13 [i_6 + 2] [i_2]))));
                            arr_23 [(signed char)10] [(signed char)10] [i_2] [(signed char)10] [(short)13] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_2])) ? (((/* implicit */int) arr_13 [i_6 - 1] [i_2])) : (((/* implicit */int) (unsigned short)45762))));
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2299931008U)) ? (((/* implicit */int) (unsigned short)19780)) : (((/* implicit */int) (unsigned short)45745))));
                        }
                        var_12 = ((/* implicit */_Bool) ((max((((((/* implicit */int) (unsigned short)13834)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_17 [i_2] [i_5])))) - (((((((/* implicit */int) (unsigned short)13834)) - (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_11 [i_2]))))));
                        arr_24 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : ((+(arr_5 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)51701))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)9] [(unsigned char)9] [i_0] [i_0] [i_5])) ? ((((((~(((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_5])))) + (2147483647))) << (((((min((var_0), (((/* implicit */int) (signed char)-75)))) + (94))) - (19))))) : (((int) ((unsigned char) (_Bool)1)))));
                        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_4)))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_28 [i_2] [i_1] [(signed char)16] [i_1] = arr_8 [i_0] [i_0] [i_0];
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_7] [i_2] [i_1] [i_0] [i_0])))) / ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45748))) : (-6724248814767956323LL)))));
                        arr_29 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) ((short) arr_13 [i_0] [i_2]))), (max(((unsigned short)50223), (arr_6 [i_0] [i_1]))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    arr_35 [(unsigned char)15] [i_9] [i_9] = 7976688366644563562LL;
                    var_16 = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((long long int) (signed char)-100));
                        var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_9] [i_8])) && (((/* implicit */_Bool) (unsigned short)15312)))));
                        var_19 = ((/* implicit */signed char) min((0U), (((/* implicit */unsigned int) (unsigned short)21948))));
                        arr_38 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1229414771U) << (((/* implicit */int) var_2))))) ? (((int) arr_30 [i_10] [i_8] [0])) : (((/* implicit */int) (_Bool)1)))) - ((~(((/* implicit */int) max(((short)1144), ((short)-1))))))));
                    }
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_11] [i_11] [9LL] [(signed char)12] [(signed char)11] [i_0] [i_0])) || (((/* implicit */_Bool) var_9))))), (((signed char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)11]))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            arr_45 [i_0] [13LL] [i_9] [i_11] [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_37 [i_0] [i_8] [i_9] [i_11] [i_11] [i_12])) ? (((/* implicit */long long int) 0U)) : (3391348677871781662LL)))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_32 [i_12] [i_12])))) ? (max((3391348677871781662LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)19761))))))) : (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)127)))))));
                            arr_46 [(short)9] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-93)) * (((/* implicit */int) (unsigned short)23221))))) + (((long long int) var_7))))), (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_9] [i_11]))) ? (((((/* implicit */unsigned long long int) 2199023255551LL)) + (14703334197108184884ULL))) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_49 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] = (signed char)31;
                            var_22 = ((/* implicit */long long int) ((((_Bool) (unsigned short)36385)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_0)))))) : (((((/* implicit */_Bool) min((arr_36 [(_Bool)1] [i_8]), (((/* implicit */unsigned int) arr_13 [(short)6] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_13] [i_11] [i_9] [i_8] [i_0]))))) : (var_3)))));
                            var_23 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) (short)-21857)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_8 [i_9] [13] [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2187101148U)) / (1556047522552044017LL))))));
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            arr_55 [9U] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) var_1);
                            arr_56 [17LL] [17LL] [17LL] [17LL] [(signed char)1] [(short)15] [i_15] = arr_50 [i_9] [i_14] [(signed char)2];
                        }
                        arr_57 [i_0] [i_8] [i_9] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2406931989U)), (max((13279909107408669058ULL), (((/* implicit */unsigned long long int) 8))))));
                        var_24 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(4294967272U)))) ? ((~(4241829203U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [(_Bool)1] [i_0] [i_9] [i_14]))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_17 = 2; i_17 < 14; i_17 += 3) 
                        {
                            var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)38232)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (4150320224536572700LL))), (var_7)));
                            arr_62 [i_0] [i_0] [i_16] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9] [i_16] [i_9] [i_8] [i_0])) ? (var_0) : (((/* implicit */int) arr_26 [i_0] [i_16] [i_9] [(unsigned short)10]))))) ? (((/* implicit */int) arr_1 [i_17] [i_17])) : (((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_8]))))))));
                        }
                        for (short i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_64 [i_0] [(_Bool)1] [i_0] [i_0])), (min((((/* implicit */long long int) (unsigned char)64)), (var_4)))))) && (((/* implicit */_Bool) (signed char)-64))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_34 [i_9] [i_9] [i_9]))), (((((/* implicit */_Bool) (unsigned short)195)) ? (((/* implicit */unsigned long long int) 3361989440U)) : (3743409876601366731ULL)))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned char) ((arr_50 [i_0] [i_8] [i_0]) / (arr_41 [i_0] [i_8] [(signed char)8] [i_8] [(_Bool)1] [(signed char)8] [i_8])))))));
                        }
                        for (short i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) arr_18 [i_0] [i_8] [i_9] [i_16] [i_19]);
                            arr_67 [i_0] [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((-(((/* implicit */int) arr_13 [i_0] [i_16])))) <= (var_0))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_0] [i_16])) || (((/* implicit */_Bool) (~((~(2107866148U))))))));
                        }
                        for (short i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                        {
                            arr_70 [i_0] [i_8] [i_9] [i_16] [i_20] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) * (3065552524U))), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)6)) ^ (((/* implicit */int) (unsigned char)243)))) ^ (((((/* implicit */int) (short)30012)) ^ (((/* implicit */int) arr_10 [i_20] [i_16] [i_0] [i_9] [i_8] [i_0])))))))));
                            arr_71 [i_20] [i_16] [i_0] [i_0] [i_8] [i_16] [i_0] = ((/* implicit */unsigned short) 9223372036854775807LL);
                        }
                        var_30 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) -2527017951368661771LL)) ? (arr_54 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38232)))))) / (arr_50 [14LL] [14LL] [14LL])))));
                        arr_72 [i_0] [i_8] [i_9] [i_9] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)4355), ((unsigned short)0)))) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)-5327))));
                        var_31 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((arr_30 [i_16] [(_Bool)0] [i_0]) - (arr_60 [i_0] [i_0])))) ? (((/* implicit */long long int) max((3689410021U), (((/* implicit */unsigned int) (signed char)103))))) : (-8624067605564017358LL))));
                    }
                }
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
    {
        arr_75 [i_21] = ((/* implicit */unsigned char) 1048575);
        var_32 = ((/* implicit */long long int) 10U);
    }
    /* LoopSeq 2 */
    for (signed char i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
    {
        arr_79 [i_22] [i_22] = ((/* implicit */unsigned long long int) (unsigned short)31974);
        arr_80 [i_22] = ((/* implicit */int) arr_78 [i_22] [i_22]);
    }
    /* vectorizable */
    for (signed char i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
    {
        arr_83 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((signed char) 17146753362444175498ULL)))));
        var_33 = ((/* implicit */_Bool) (signed char)-1);
    }
}
