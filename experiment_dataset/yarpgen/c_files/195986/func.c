/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195986
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14442))) : (4294967283U))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] [7U] = ((/* implicit */short) ((arr_0 [(unsigned short)8]) & ((-(arr_0 [i_0])))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] = ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-7309992135175368107LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))));
                        arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (unsigned short)41095)) : (((/* implicit */int) (short)32767))));
                        arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-115))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_19 [i_0] [i_0] [0ULL] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (950508948)))) >> (((((((/* implicit */_Bool) 5175240235362002777LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) - (15458454598381696413ULL))))));
            arr_20 [i_0] [i_0] [i_4] = ((/* implicit */long long int) arr_11 [(unsigned short)8]);
            arr_21 [i_0] [(unsigned char)7] = ((/* implicit */short) var_11);
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_25 [i_0] [2LL] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (short)26191)))))))))));
            /* LoopNest 3 */
            for (short i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_34 [i_0] [(unsigned char)1] [i_5] = ((/* implicit */long long int) max((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))), (((/* implicit */unsigned long long int) (short)124))));
                            arr_35 [(unsigned short)2] [i_0] [i_0] [i_0] [i_6] [i_8] = ((/* implicit */unsigned int) ((short) ((arr_33 [i_6] [i_5] [i_6] [i_7] [i_6] [(short)4]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))))));
                        }
                    } 
                } 
            } 
            arr_36 [8U] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (arr_5 [i_5] [i_5])));
            arr_37 [i_5] = ((/* implicit */signed char) (-(((((/* implicit */int) ((1512477538U) == (var_13)))) << (((((246290604621824ULL) + (((/* implicit */unsigned long long int) -5175240235362002777LL)))) - (13271750128952170640ULL)))))));
        }
        arr_38 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (5175240235362002769LL) : (((/* implicit */long long int) 1)))) | (((((/* implicit */_Bool) var_13)) ? (-6078978667036656775LL) : (var_7))))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        arr_39 [i_0] [i_0] = var_3;
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
    {
        arr_42 [i_9] = ((/* implicit */unsigned char) arr_41 [i_9]);
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        arr_51 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) var_0)) >= (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        arr_52 [i_9] [i_10] [i_10] [i_9] [i_12] [i_12] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27)))))) & (arr_43 [i_10 - 1] [i_10 - 1])));
                        arr_53 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_45 [i_11])) && (((/* implicit */_Bool) 9748311362085064964ULL)))));
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 3; i_13 < 20; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                arr_58 [i_9] [i_14] [i_11] [i_14] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10 + 1]))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-25LL)))));
                                arr_59 [i_13] [i_14] = ((/* implicit */unsigned int) -2);
                            }
                        } 
                    } 
                    arr_60 [i_9] [(unsigned char)1] = ((/* implicit */_Bool) arr_47 [i_10 + 1]);
                    arr_61 [(short)20] [(short)20] [(short)20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_10 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))));
                    arr_62 [i_9] [(_Bool)1] [i_11] = ((/* implicit */short) ((((/* implicit */int) (signed char)12)) >= (((/* implicit */int) (unsigned short)7))));
                }
            } 
        } 
        arr_63 [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 502817214U)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 4; i_16 < 19; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (unsigned int i_18 = 3; i_18 < 19; i_18 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                        {
                            arr_79 [i_15] [(unsigned char)18] [i_15] [(unsigned char)18] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_18 - 1])) ? ((-(((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) (short)-26192))));
                            arr_80 [i_15] [i_15] [i_15] [i_15] [(short)6] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_75 [i_18 - 1] [i_18 + 2] [i_18 - 1] [i_16 + 1])) : (((/* implicit */int) var_2))));
                            arr_81 [i_19] [(short)8] [(unsigned char)14] = ((/* implicit */long long int) ((short) arr_43 [i_16 - 1] [(short)17]));
                            arr_82 [i_16] [(short)10] [(short)10] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 2147483648U))));
                        }
                        for (unsigned int i_20 = 4; i_20 < 20; i_20 += 3) 
                        {
                            arr_85 [i_15] [i_16 - 1] [i_15] [i_18] [i_20 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_49 [i_15] [i_15] [8LL] [i_15] [(_Bool)1]))))) % (((unsigned long long int) var_15))))) ? (((arr_41 [i_16 + 2]) / (((/* implicit */long long int) ((unsigned int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_14)))))))));
                            arr_86 [i_16] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)89)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)12921)) : ((+(((/* implicit */int) var_3))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            arr_89 [19U] [i_18] [i_17] [2ULL] [i_16] [i_17] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-26)) / (((/* implicit */int) var_14)))) << (((-1444733876246962998LL) + (1444733876246963020LL))))) << ((-(((/* implicit */int) (unsigned short)0))))));
                            arr_90 [i_17] [i_16] [(short)3] [i_18 + 1] [(short)3] [i_17] [i_18] = ((((((/* implicit */_Bool) arr_70 [i_15] [i_16])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (short)-19494)))) - (((var_8) ? (((/* implicit */int) arr_54 [i_15] [i_16 + 2] [i_17] [(unsigned char)20] [i_18 + 1] [i_21])) : (((/* implicit */int) arr_54 [11U] [(short)2] [i_17] [i_17] [i_17] [i_17])))));
                            arr_91 [i_18] [i_16] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19487)) ? (16777215U) : (arr_48 [i_16 + 2] [i_18 + 1])))) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)32640)) && (((/* implicit */_Bool) 4294967288U))))))));
                            arr_92 [(unsigned char)13] [(unsigned char)13] [i_15] [(unsigned char)13] [i_15] = ((/* implicit */unsigned int) -965399553);
                            arr_93 [i_15] [(_Bool)1] [i_17] [i_18] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)30671)) || (((/* implicit */_Bool) arr_78 [i_15] [(short)15] [i_16 + 2] [i_16 + 2] [i_17] [i_18 - 3] [i_18 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_18 - 1] [i_18 - 2] [i_16 - 1] [i_16 + 1] [i_16]))) : ((-(var_5))))) < (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_10))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
                        }
                        arr_94 [(unsigned char)10] [i_16] [i_17] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 33292288U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_76 [i_15]))))))) & (((((8U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32753))))) + (3409753639U)))));
                    }
                } 
            } 
        } 
        arr_95 [i_15] [(unsigned short)14] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (unsigned char)248)))), (((((/* implicit */_Bool) arr_72 [i_15])) || (((/* implicit */_Bool) var_2))))));
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            for (unsigned char i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                {
                    arr_101 [i_15] [i_22] [i_22] [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_15] [(_Bool)1] [(_Bool)1] [i_15] [(unsigned short)20]))));
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_104 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((unsigned int) 17660742265222792830ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 234669366)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) max((arr_100 [i_23]), (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_103 [i_15] [i_22] [19ULL] [i_23] [(unsigned char)20] [i_22]))) : (arr_69 [i_15] [i_15] [i_15])))))));
                        arr_105 [i_15] [i_22] [i_22] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                    }
                    /* vectorizable */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        arr_109 [i_15] [i_15] [i_25] = ((/* implicit */_Bool) 0LL);
                        arr_110 [8ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-6067888225374146202LL))))));
                        arr_111 [i_15] [i_15] [i_23] [16ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_22] [i_23] [i_23] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : ((~(var_7)))));
                        arr_112 [i_15] [i_15] [i_23] [i_23] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-31044)) : (((/* implicit */int) (short)-12867)))));
                    }
                }
            } 
        } 
        arr_113 [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) arr_57 [i_15] [(unsigned short)18] [i_15] [i_15] [i_15] [i_15]))));
        arr_114 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_107 [i_15] [i_15] [18] [i_15] [(short)20]))))))) + (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_7))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_12))));
}
