/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31502
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_10 = arr_4 [i_0] [i_0] [i_2];
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) -354005213)) ? (((((/* implicit */_Bool) (unsigned short)55220)) ? (arr_5 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4ULL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [(_Bool)1] [i_1] [7]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */signed char) (-2147483647 - 1));
                                arr_12 [i_0] [(short)14] [i_3] [i_3] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (signed char)-62)))))) ? (max((((/* implicit */long long int) ((short) arr_4 [i_0] [i_1] [i_1]))), (((long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned char) (signed char)57)), ((unsigned char)178))), ((unsigned char)154)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)154)) ? (arr_19 [19] [(short)19] [i_7]) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_6] [(unsigned short)8])))))));
                    var_15 ^= ((/* implicit */short) min(((-(((((/* implicit */_Bool) 4411074959301159525ULL)) ? (arr_19 [(unsigned short)6] [i_6] [i_7]) : (((/* implicit */int) arr_13 [i_5] [i_6])))))), (((/* implicit */int) ((_Bool) 2147793123U)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((((long long int) 8044209236548987081ULL)), (((/* implicit */long long int) arr_19 [i_8] [i_8] [i_8]))));
                                var_17 = min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)10331)), (2147174169U)))) || (((((/* implicit */_Bool) -2011320873)) && (((/* implicit */_Bool) 4294967295U))))))), (max((((((/* implicit */_Bool) 2147174163U)) ? (((/* implicit */int) arr_23 [20] [i_7] [(signed char)16] [i_9])) : (((/* implicit */int) arr_17 [(signed char)18] [i_8] [i_8] [i_7])))), (((/* implicit */int) (unsigned short)20560)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((~(((((var_4) + (9223372036854775807LL))) << (((var_7) - (1099260792))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)27))))))))))));
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (short i_13 = 2; i_13 < 11; i_13 += 3) 
                {
                    {
                        arr_35 [i_10] [i_12] [i_10] [i_13] = ((/* implicit */unsigned char) ((min((((-2011320873) / (((/* implicit */int) (unsigned char)149)))), (max((((/* implicit */int) (signed char)43)), (-251879058))))) / (((/* implicit */int) arr_10 [i_10] [(short)2]))));
                        arr_36 [i_10] [i_10] [i_12] [i_13 + 1] = (unsigned short)55204;
                        arr_37 [(unsigned short)4] |= ((/* implicit */int) ((signed char) max((((/* implicit */int) min((arr_17 [i_11] [i_12] [i_11] [i_10]), (((/* implicit */unsigned short) arr_29 [(unsigned char)5] [i_11 - 2] [i_12] [i_13 + 2]))))), (min((1749989278), (-954389688))))));
                        var_19 -= ((/* implicit */unsigned char) 1310372718);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) arr_15 [(signed char)20]);
            /* LoopSeq 1 */
            for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 2147793127U)), (4411074959301159520ULL))), (((/* implicit */unsigned long long int) min((-61608168), (((/* implicit */int) arr_20 [i_10] [i_11] [(signed char)4] [(signed char)4] [i_11 - 1] [i_10])))))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)6] [(unsigned char)6])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_10] [i_10] [i_10] [i_10] [i_11 + 1] [(unsigned char)4])))) : (((/* implicit */int) (short)31067)))) : (((/* implicit */int) (_Bool)0)))))));
                arr_42 [i_10] [8] [i_11] [i_11] = max((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) -935343469)), (arr_1 [9]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_14])) && (((/* implicit */_Bool) (unsigned char)46)))))))), (max((14035669114408392090ULL), (((/* implicit */unsigned long long int) (unsigned short)56772)))));
                /* LoopSeq 3 */
                for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    arr_46 [i_10] [5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)10840)), (((((/* implicit */_Bool) arr_15 [i_11 - 2])) ? (min((((/* implicit */unsigned int) arr_14 [i_15])), (arr_5 [i_10] [i_11 - 2] [i_14 - 3] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)132))))))));
                    arr_47 [i_10] [1ULL] [i_14 + 1] [(signed char)12] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) min((2003926990241558306LL), (((/* implicit */long long int) arr_17 [5] [i_11] [i_14 - 2] [i_15]))))) ? (((((/* implicit */_Bool) arr_5 [i_11 - 3] [(short)1] [i_14] [i_14 + 2])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (short)-9625)))) : (((/* implicit */int) (signed char)22)))) + (2147483647))) >> (((min((min((arr_27 [i_14 + 3] [i_11] [i_10]), (((/* implicit */int) arr_26 [i_14])))), (((/* implicit */int) ((_Bool) 4294967283U))))) + (1802161017)))));
                }
                for (short i_16 = 3; i_16 < 12; i_16 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 1945072437))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_26 [3]), ((unsigned char)181)))), (min((1796222395), (614332969)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_40 [i_14 - 3])) ? (((/* implicit */int) max(((unsigned short)46348), (((/* implicit */unsigned short) (unsigned char)236))))) : (((/* implicit */int) (unsigned short)46369)))) != (-1267324637))))));
                }
                for (short i_17 = 3; i_17 < 12; i_17 += 3) /* same iter space */
                {
                    var_25 *= ((/* implicit */unsigned int) arr_14 [(short)21]);
                    var_26 = ((/* implicit */int) arr_22 [i_14] [i_14] [i_14 - 2] [i_14] [i_14]);
                }
                arr_54 [i_10] = ((/* implicit */int) min((((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_10] [i_11] [i_14])) || (((/* implicit */_Bool) (short)16400)))), (((_Bool) arr_8 [i_10] [i_14 + 3] [i_11 - 2] [i_10] [i_10] [i_10]))))), (max((arr_32 [i_10] [i_11]), (max((arr_44 [i_10]), (((/* implicit */unsigned char) (signed char)51))))))));
            }
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                var_27 -= ((/* implicit */unsigned short) arr_31 [4LL] [4LL]);
                arr_57 [i_10] = ((/* implicit */signed char) arr_39 [i_10] [i_11 - 3] [i_10]);
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 11; i_19 += 3) 
                {
                    for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) 
                    {
                        {
                            arr_63 [i_18] [i_11] [i_18] [i_10] [(signed char)2] [i_18] [i_11 - 2] = (unsigned short)56891;
                            var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) max((arr_59 [2ULL]), (((/* implicit */unsigned long long int) (short)8076)))))), (7421412096400785080ULL)));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-104)), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)109)), (-1685533970)))), (((((/* implicit */_Bool) (short)22761)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (12273203385332646115ULL))))))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_10] [i_11 - 1] [i_11 - 1] [i_19 - 1] [i_19 - 1] [i_20])) ? (arr_28 [i_10] [(short)12] [(signed char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_31 [i_20] [i_20])))))))));
                            arr_64 [i_10] [i_11 + 2] [i_10] [i_10] [i_20 + 3] = ((/* implicit */unsigned short) min((((short) ((((/* implicit */_Bool) arr_61 [i_10] [i_20])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (short)27843))))), (((/* implicit */short) (unsigned char)81))));
                        }
                    } 
                } 
                arr_65 [i_10] [i_11] [1ULL] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_2 [13ULL])) - (arr_18 [i_18] [i_11 + 2] [(unsigned short)15]))))), (min((((/* implicit */unsigned short) (signed char)-1)), (arr_41 [i_10] [i_10] [i_18] [i_10])))));
            }
            arr_66 [(unsigned char)7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_30 [i_10] [i_10])) / (((/* implicit */int) arr_39 [i_11] [i_11 + 2] [i_10])))) - (((/* implicit */int) ((((/* implicit */long long int) arr_60 [i_10] [i_11] [i_10] [i_11])) >= (arr_55 [i_11]))))))) * (max((min((((/* implicit */unsigned long long int) -475587151)), (6173540688376905473ULL))), (((/* implicit */unsigned long long int) (unsigned char)168))))));
        }
        arr_67 [i_10] = ((/* implicit */signed char) (unsigned char)71);
    }
}
