/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31733
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)20869))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((-(min((((/* implicit */unsigned long long int) var_7)), (arr_6 [i_2] [i_2] [(signed char)2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    var_13 = ((/* implicit */_Bool) (signed char)127);
                }
                for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20891)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)79))));
                    arr_13 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1052329694044029930LL)) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1])) : (arr_10 [i_3] [9ULL] [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_1 - 1] [i_0]))) && (((max((((/* implicit */int) (short)20872)), (var_9))) != (((/* implicit */int) arr_14 [i_4 + 1] [i_1 + 1]))))));
                        arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (arr_7 [i_0] [(signed char)0])));
                    }
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_15 |= ((/* implicit */unsigned int) max((arr_0 [i_5]), (((/* implicit */signed char) (_Bool)1))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (unsigned short)16384))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_24 [i_0] [(signed char)9] [i_3 + 2] [(signed char)9] [i_3 + 2] [(short)5]))));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-127))));
                            var_18 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28824)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)63))))), (((((/* implicit */_Bool) arr_16 [i_1 - 1] [7U] [(signed char)1] [i_5] [7U] [i_3 + 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : ((~(8725724278030336LL)))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_33 [i_8] [i_8] [i_1] [i_3 - 1] [i_5] [i_8] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [(signed char)4] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)18037)))), (((arr_5 [i_0] [i_8] [i_3 + 2]) ? (((/* implicit */int) arr_5 [i_0] [i_8] [i_3])) : (((/* implicit */int) (unsigned short)62228))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-64))))))) ? (((((/* implicit */int) ((unsigned char) (signed char)79))) >> (((((((/* implicit */int) (unsigned short)4095)) >> (((((/* implicit */int) var_5)) - (38))))) - (493))))) : (max((((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_3])) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_9 [i_0] [(signed char)1] [9LL] [i_5]))))))));
                        }
                    }
                }
                for (short i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    arr_36 [6LL] &= ((/* implicit */signed char) ((((long long int) (!(((/* implicit */_Bool) arr_18 [10U] [(signed char)10] [8] [(unsigned short)10]))))) - (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)24)), (0U))), (((/* implicit */unsigned int) var_0)))))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_25 [i_0] [i_1 - 1] [i_9] [(short)10] [(short)10]))));
                    var_21 ^= ((/* implicit */unsigned short) max(((-(8589934591LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1 - 1] [4])) ? (((/* implicit */unsigned int) arr_16 [i_0] [i_1 + 1] [i_0] [i_0] [i_1] [i_1 + 1])) : (var_2))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((var_3) / (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1055451439415591688LL))))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3204517977U))))));
                                arr_44 [i_0] [i_0] [i_10] [i_0] = var_5;
                            }
                        } 
                    } 
                }
                var_23 += ((/* implicit */signed char) ((((arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1 + 1] [4LL] [4LL] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [(unsigned char)10] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_12 = 1; i_12 < 9; i_12 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_12]), (arr_0 [i_12]))))) | (((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_12] [(_Bool)1] [i_12])) ? (((/* implicit */long long int) arr_23 [1LL])) : (-1LL)))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (3887071723U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28827)))))) % ((-(-3771132872728383777LL)))));
        arr_48 [2LL] [i_12 + 1] &= ((/* implicit */signed char) (_Bool)1);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_12 + 1] [i_12 - 1] [(unsigned char)7] [(_Bool)1] [i_12])) || (((/* implicit */_Bool) var_6)))))) & ((+(max((var_10), ((-9223372036854775807LL - 1LL))))))));
    }
    for (long long int i_13 = 2; i_13 < 23; i_13 += 4) 
    {
        var_27 = ((/* implicit */long long int) (unsigned char)3);
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)52177)))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_55 [i_13] [i_13 - 1]))))))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_0))));
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_31 = (~(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 0U)) : (arr_58 [i_13 - 2] [i_13 - 2] [(unsigned char)17]))), (arr_54 [i_13] [i_15] [i_15]))));
            /* LoopSeq 3 */
            for (signed char i_16 = 2; i_16 < 23; i_16 += 3) 
            {
                arr_61 [i_13] [i_15] [i_15] [i_16] = ((/* implicit */short) arr_54 [0LL] [i_15] [i_16 + 1]);
                arr_62 [(unsigned short)2] [i_15] = ((/* implicit */long long int) arr_53 [i_13] [i_15] [i_16]);
            }
            for (unsigned short i_17 = 3; i_17 < 23; i_17 += 3) 
            {
                var_32 = ((/* implicit */signed char) ((long long int) max(((unsigned short)4123), ((unsigned short)4123))));
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    arr_69 [i_13] [i_15] [i_15] [i_15] = max((arr_58 [i_15] [8LL] [i_15]), (((long long int) ((long long int) arr_63 [i_13] [(unsigned char)12] [i_18]))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_54 [i_17 - 2] [i_13] [12U]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) | (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                    var_34 = ((/* implicit */_Bool) (+(arr_58 [i_13] [i_17] [i_13])));
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (((!(((var_10) == ((-9223372036854775807LL - 1LL)))))) ? ((-(arr_56 [i_13 - 1] [(unsigned short)7] [i_17 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))))) || (((/* implicit */_Bool) (unsigned short)4095))))))));
                        arr_72 [i_13 - 2] [i_15] [i_17 - 2] [15] [i_19] = ((/* implicit */short) min((min(((~(12LL))), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_63 [i_13] [i_15] [(signed char)9]))))))));
                        var_36 *= ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_37 -= ((/* implicit */signed char) ((min((arr_56 [(signed char)6] [i_15] [20]), (((/* implicit */long long int) ((1610612736) & (((/* implicit */int) (signed char)-127))))))) >> ((((-(((/* implicit */int) (signed char)79)))) + (114)))));
                        arr_73 [i_13] [i_13] [i_13 - 1] [i_15] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2829)) + (2147483647))) >> (((((/* implicit */int) var_7)) - (14753)))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : ((+(((/* implicit */int) var_8))))))) ? (var_10) : (((long long int) (!(((/* implicit */_Bool) (short)-20870)))))));
                    }
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        var_38 -= ((/* implicit */unsigned int) 2147475456);
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) ^ (arr_67 [6] [i_20])))) ? (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (signed char)-1)) : (-2147475457))) : (((int) arr_71 [i_13] [i_13] [6] [i_15] [i_13 - 1] [i_13]))))) || ((!(((/* implicit */_Bool) min((((/* implicit */int) arr_63 [i_18] [i_17] [i_15])), (2147475463)))))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10243)) | (((/* implicit */int) var_8))));
                        arr_77 [i_15] [i_20] [i_15] [i_17] [i_15] [i_13] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_64 [i_20] [19LL] [i_15] [i_20]))))) ? (((((/* implicit */_Bool) 61440U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4123))) : (1044480LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)-1)))))))) ? (((/* implicit */int) ((signed char) ((short) arr_52 [i_18])))) : (min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)4)))), (((/* implicit */int) ((arr_54 [i_20] [i_15] [i_15]) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (unsigned short)30894)), (((arr_76 [i_13] [i_15] [i_17 - 3] [i_21]) + (((/* implicit */unsigned int) var_3))))))));
                        var_42 += ((signed char) min((((/* implicit */unsigned long long int) arr_75 [i_13] [i_13 - 1] [i_17 + 1] [i_17 - 2])), (9773752807222204401ULL)));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_22 = 2; i_22 < 20; i_22 += 3) 
                    {
                        var_43 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_66 [i_13 - 2] [i_13] [i_17 + 1] [i_22 + 2] [(_Bool)1]))))), (var_1)));
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (long long int i_23 = 1; i_23 < 23; i_23 += 3) 
                    {
                        var_45 = ((/* implicit */int) ((((/* implicit */long long int) arr_76 [i_13] [i_13] [i_13] [i_13])) + (((long long int) (-9223372036854775807LL - 1LL)))));
                        arr_86 [i_13] [i_15] [i_17] [i_18] [i_13] [i_15] = ((/* implicit */long long int) arr_51 [i_23] [i_15]);
                        var_46 &= ((arr_53 [i_13] [i_13 - 1] [i_13 - 1]) ? (((((/* implicit */_Bool) min((arr_50 [i_18]), (((/* implicit */unsigned short) arr_80 [i_13 - 1] [i_15] [i_18] [i_15] [i_18]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_65 [i_18] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_18] [i_18]))) : (arr_76 [i_13] [i_15] [i_17] [i_23 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13359))));
                        var_47 &= ((/* implicit */_Bool) arr_74 [(signed char)19] [i_18] [i_17] [i_17 - 1] [i_17] [i_15] [i_13 + 1]);
                        var_48 = ((/* implicit */short) ((int) (_Bool)1));
                    }
                    for (unsigned long long int i_24 = 2; i_24 < 21; i_24 += 1) 
                    {
                        arr_89 [1] [i_15] [i_15] [(unsigned short)0] [i_24 + 2] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) min((arr_78 [18LL] [i_15] [i_17 - 2] [7] [i_24]), (((/* implicit */short) (signed char)(-127 - 1))))))))) : (((/* implicit */int) (!(arr_60 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1]))))));
                        var_49 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_24] [(short)0] [i_15] [i_15] [i_13])) ? (((/* implicit */int) arr_64 [i_13] [i_13] [i_15] [i_18])) : (((/* implicit */int) arr_50 [i_13]))))))));
                        arr_90 [i_24 + 1] [(unsigned short)3] [i_15] [i_15] [(unsigned short)23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (arr_52 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_13] [i_15] [i_17])))))))))));
                    }
                }
            }
            for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                var_50 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-29074))));
                var_51 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min(((_Bool)1), ((_Bool)1)))))) : (min((arr_68 [i_13] [i_15] [i_25] [i_15] [i_25]), (((/* implicit */long long int) var_9))))));
            }
            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_70 [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)20869)))))) ? (((/* implicit */long long int) (~(((int) arr_66 [i_13 - 1] [i_13 - 1] [4] [22] [i_15]))))) : ((~(((((/* implicit */_Bool) (signed char)2)) ? (arr_88 [16ULL] [i_13 + 1] [i_15] [i_15] [i_13 + 1]) : (-2526986861469323267LL)))))));
            var_53 |= (~(((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))) | (((/* implicit */int) ((signed char) var_8))))));
        }
    }
    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 3) 
    {
        arr_95 [i_26] |= ((/* implicit */long long int) (+((~(var_2)))));
        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_82 [i_26] [18])), ((-(((/* implicit */int) (short)20870))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_83 [14ULL] [i_26] [i_26]))))) : (arr_56 [i_26] [i_26] [14LL])));
        var_55 += ((/* implicit */signed char) (-(((/* implicit */int) arr_84 [i_26] [i_26] [i_26] [i_26] [16U] [2U]))));
    }
}
