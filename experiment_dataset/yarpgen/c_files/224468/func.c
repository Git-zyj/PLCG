/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224468
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2]))))) : ((-(1752153049459426445ULL))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_8 [i_4 - 2] [6] [i_4] [(unsigned short)1] [i_4 - 2] [11ULL]))))));
                                var_17 = ((/* implicit */long long int) arr_9 [i_2] [i_1]);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_9))));
                                arr_13 [i_2] [(unsigned char)13] [i_2 - 1] [5ULL] [i_2 - 1] [(short)10] [i_2] = ((/* implicit */short) var_8);
                            }
                            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                arr_17 [(short)12] [8LL] [i_2] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_6 [i_0] [i_3] [(short)12] [i_2])))) ^ ((+(((/* implicit */int) var_10))))))) ? (var_6) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) & (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) 5925007732051757438ULL)))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)9] [(unsigned short)0] [i_2]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                                arr_18 [i_5] [i_2] [i_2] [i_2] [5U] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-15)) != (var_9))))) : (max((arr_3 [i_2 - 2] [(unsigned char)13] [i_2]), (((/* implicit */long long int) arr_12 [i_2 - 2] [3] [i_2] [13ULL] [i_2]))))));
                                arr_19 [i_3 - 4] [i_3 - 4] [i_2] [i_2] [i_3 - 3] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 5925007732051757438ULL)) ? (((/* implicit */int) arr_0 [11])) : (var_9))) * (((/* implicit */int) ((unsigned char) 12521736341657794155ULL)))))));
                                var_20 = ((/* implicit */signed char) (short)-7699);
                            }
                            var_21 = ((/* implicit */unsigned int) (((-(var_7))) * (((unsigned long long int) arr_10 [i_3 - 3]))));
                            arr_20 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [(unsigned short)7] [(unsigned short)7] [i_2] [i_2 - 1] [8ULL] [i_2])) <= (((((/* implicit */_Bool) arr_7 [14ULL] [i_3 - 1])) ? (((/* implicit */int) arr_6 [(unsigned short)5] [i_3 + 1] [(unsigned short)5] [i_2])) : (((/* implicit */int) arr_11 [i_3 - 4] [8] [i_1] [12ULL] [i_1]))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_3]))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_16 [7LL] [i_0] [i_0] [(signed char)15] [i_1])) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(var_14))))));
                arr_22 [i_0] [(unsigned short)0] [(unsigned short)15] = ((/* implicit */unsigned short) (~(((long long int) ((((/* implicit */_Bool) arr_6 [4ULL] [i_0] [i_0] [i_0])) ? (12521736341657794187ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6965))) : (5925007732051757438ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    var_24 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 4 */
    for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        arr_26 [(short)12] [0ULL] &= ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) arr_5 [i_6] [(unsigned short)4] [i_6 + 1])), (5925007732051757446ULL))), (max((((/* implicit */unsigned long long int) 3918554543U)), (var_6))))), (((/* implicit */unsigned long long int) ((unsigned short) 376412753U)))));
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) max((((max((arr_16 [i_6] [(unsigned char)12] [i_6] [i_6 + 1] [i_7]), (((/* implicit */long long int) (short)-1)))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) max((arr_2 [i_6 - 1] [i_7 + 3]), (arr_2 [i_6 + 1] [i_7 + 2]))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) (-(var_12)));
                var_27 = ((/* implicit */short) arr_8 [i_7] [i_7] [15U] [i_8] [8LL] [(signed char)13]);
                var_28 = ((/* implicit */short) var_12);
            }
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 5925007732051757465ULL)))) <= (12521736341657794157ULL)));
                arr_35 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((1581812177564297817ULL), (((/* implicit */unsigned long long int) 3918554543U))))))))) & ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7)))))));
                arr_36 [i_6] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)19))));
                var_30 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)65535)))) * (((/* implicit */int) ((unsigned char) arr_0 [i_6 - 3])))));
                var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) var_12))), (var_7)));
            }
            var_32 = ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_10 [i_7 + 1])) & (((/* implicit */int) arr_31 [7] [(unsigned short)1] [i_7] [i_7]))))))));
        }
    }
    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_33 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_12) | (((/* implicit */int) var_2))))) % ((~(var_14))))))));
        arr_40 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)2976)) ? (((((/* implicit */_Bool) var_0)) ? (arr_39 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15591))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)51)) % ((-(((/* implicit */int) (short)21924))))))) : (((((/* implicit */_Bool) ((unsigned short) (short)-7712))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10]))) : (1790140450U)))));
    }
    for (short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
    {
        arr_44 [i_11] [i_11] = ((signed char) max((((((/* implicit */_Bool) 2504826845U)) ? (((/* implicit */unsigned long long int) 376412754U)) : (6882542538882014554ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)21917)), ((unsigned short)9523))))));
        var_35 += ((/* implicit */short) var_13);
        var_36 = ((/* implicit */long long int) var_2);
        var_37 = ((/* implicit */unsigned long long int) 2504826845U);
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                {
                    arr_52 [i_12] [i_12] = ((/* implicit */_Bool) arr_6 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [i_12]);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))))) <= (((/* implicit */int) (short)21915))));
                    arr_53 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6882542538882014533ULL))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (arr_15 [i_13] [i_13 - 2] [i_12] [i_12] [(signed char)15] [i_14] [i_14])));
                    var_40 ^= ((/* implicit */unsigned char) ((int) var_12));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            for (unsigned char i_16 = 3; i_16 < 11; i_16 += 2) 
            {
                {
                    arr_59 [i_12] [(short)0] [i_12] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)27944)) & (-1002248306)))));
                    var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_29 [i_16] [9])) ? (3189579592630605201LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7698))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_16 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_42 = (unsigned short)8;
                                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) 2401736718969107027LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62622))) : (3918554541U)));
                            }
                        } 
                    } 
                    arr_65 [i_12] [1LL] [i_15] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (short)21919)) : (((/* implicit */int) arr_41 [i_16])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            arr_68 [i_12] [i_12] = ((/* implicit */short) (-(6703850985519338528ULL)));
            arr_69 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_12] [i_19])) ? (arr_37 [i_12] [i_12]) : (arr_37 [i_12] [i_19])));
        }
        for (signed char i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_12] [i_12] [(short)1] [i_20] [(short)13] [(short)2])) ? (arr_42 [i_20]) : (((/* implicit */long long int) arr_62 [i_20] [i_20] [i_20] [(_Bool)1] [i_12])))))));
            var_45 = ((/* implicit */unsigned long long int) var_1);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 4) 
        {
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_12] [i_12])) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */int) var_13)) % (((/* implicit */int) arr_38 [i_12]))))));
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                arr_78 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) var_5);
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_12] [1ULL] [i_21 - 1])) ? (((/* implicit */int) arr_14 [5] [i_21] [i_21 - 1])) : (((/* implicit */int) arr_14 [i_12] [i_12] [i_21 - 1]))));
            }
            var_48 = ((/* implicit */unsigned char) (-(arr_15 [i_21 + 1] [i_21 - 1] [i_12] [i_21] [i_21 - 1] [i_12] [i_12])));
        }
    }
}
