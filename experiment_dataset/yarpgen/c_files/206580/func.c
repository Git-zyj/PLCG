/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206580
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) var_4)) : (((1879048192) - (((/* implicit */int) (unsigned char)94)))))));
        var_11 &= ((/* implicit */short) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))));
        var_12 = ((/* implicit */unsigned short) var_4);
    }
    var_13 &= ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((arr_4 [i_1 - 3]), (arr_4 [i_1 + 1])))) : ((+(127)))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 4] [i_1])) ? (2054303522) : (((/* implicit */int) arr_3 [i_1 - 3] [(short)8]))))) ? (((/* implicit */int) (short)-2226)) : (max((((/* implicit */int) arr_3 [i_1 - 2] [i_1])), (1783561637)))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) - (((/* implicit */int) (unsigned char)126)))))));
            var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1])) : (((/* implicit */int) (_Bool)0)))));
            arr_10 [i_1 - 4] [i_1 - 4] [6] &= ((/* implicit */short) (((~((-(((/* implicit */int) (signed char)-119)))))) == (arr_5 [i_2])));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_14 [i_3] [i_3] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-8143))))) + (18446744073709551615ULL)));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_0)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)19805)))))) + (((((/* implicit */int) ((short) arr_3 [i_5] [i_3]))) % (((/* implicit */int) var_1)))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_9 [i_4] [(_Bool)1] [(unsigned char)5]))));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (short)-20777)) : (((/* implicit */int) (unsigned char)0)))))));
                        }
                    } 
                } 
            } 
            var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45148))) == (18446744073709551607ULL))))))) % (max((4294967292U), (arr_15 [i_1 - 4] [i_1 - 1] [i_1 - 1]))));
        }
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((short) (((-2147483647 - 1)) / (((((/* implicit */_Bool) 2206749743U)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_7])) : (((/* implicit */int) var_7)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_1 - 4]))));
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)82)) ? (var_3) : (arr_33 [i_8 + 1] [i_8] [i_8 - 1] [i_8 + 1] [i_9])));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned short) (~(arr_32 [i_1 - 2] [i_8] [i_8] [(unsigned char)15])));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_12 + 2] [i_12] [i_12 + 2] [i_12] [i_1] [i_12] [(unsigned char)14])) && (((/* implicit */_Bool) -1573761226))));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) + (((((/* implicit */_Bool) arr_4 [i_7 + 1])) ? (29ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((14756685865396498219ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (short)8136)) : (((/* implicit */int) (signed char)-96))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) ((var_3) != ((~(((/* implicit */int) var_2))))));
                            var_30 = ((/* implicit */short) arr_42 [i_1 - 4] [i_8] [i_13] [i_8]);
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (unsigned char)51))))))));
                arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)82)))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_17 [i_1]))) >> (((((((/* implicit */int) var_4)) | (2097152))) + (25090))))))));
                var_32 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned char) var_6)))))));
                var_33 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1895172566U)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (signed char)-1))))));
            }
        }
    }
    for (short i_16 = 3; i_16 < 22; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 24; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) var_1);
                    arr_57 [i_18] [i_17] [i_17] [i_16] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10315))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            for (int i_20 = 1; i_20 < 23; i_20 += 4) 
            {
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)93))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_5))) % (((/* implicit */int) max((var_1), (((/* implicit */short) (unsigned char)38)))))))) : (2088217549U)));
                    var_36 = ((/* implicit */short) min(((~(((/* implicit */int) (unsigned char)194)))), (((int) max((arr_51 [i_16]), (4U))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        arr_65 [i_16] [i_19] [i_20 + 1] [i_21] |= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) arr_58 [i_19])));
                        var_37 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) 3974470960U)))));
                        var_38 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        var_39 -= ((/* implicit */unsigned long long int) ((((var_8) + (2816936791U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)60340)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (_Bool)0))));
                            var_41 = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
                        {
                            arr_75 [i_24] [(short)22] [i_22] [(short)22] [i_20 + 1] [(short)22] [(short)22] = (_Bool)1;
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) : (3604824179U)))) ? (((/* implicit */unsigned int) var_3)) : (((unsigned int) var_3))));
                            arr_76 [(unsigned short)19] [(signed char)14] [i_22] [(unsigned short)12] [i_19] [i_19] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_70 [(short)11] [i_22] [i_20 - 1] [i_19] [i_16 + 2])) : (((/* implicit */int) var_7))));
                            var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            arr_77 [i_16] [(unsigned char)1] [12LL] [i_22] [i_24] [i_24] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) (-(var_8)))) : ((~(4092LL)))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 25; i_25 += 4) /* same iter space */
                        {
                            var_44 = ((/* implicit */short) (~(7236049621960030708ULL)));
                            var_45 = ((/* implicit */short) ((((/* implicit */int) arr_64 [i_16 + 1] [i_20 - 1] [(unsigned char)24] [(_Bool)1] [i_20 + 1] [16ULL])) ^ (((/* implicit */int) arr_69 [i_16 + 2] [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1]))));
                        }
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)43)) + (((/* implicit */int) var_5)))))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_47 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [(unsigned short)21] [i_20] [i_19] [(unsigned char)8] [i_16])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)23685))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11676)) % (((/* implicit */int) (signed char)-34))))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22036))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)82)))))))));
                        var_48 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_63 [i_26] [i_16 + 1])) ? (((/* implicit */int) (signed char)-1)) : (61440)))));
                        var_49 -= ((/* implicit */signed char) (-((~(((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_54 [20ULL] [i_16 - 1])) - (((/* implicit */int) arr_54 [(unsigned char)0] [i_16 - 3])))), (((/* implicit */int) ((((/* implicit */_Bool) (+(18446744073709551591ULL)))) && (((/* implicit */_Bool) arr_82 [(short)21] [i_16 - 1] [i_16 + 3] [i_16 - 3])))))));
        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_82 [i_16] [i_16 - 3] [i_16 - 3] [i_16])) / (((/* implicit */int) var_4)))))));
    }
    for (short i_27 = 1; i_27 < 22; i_27 += 2) 
    {
        var_52 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
        /* LoopNest 3 */
        for (short i_28 = 1; i_28 < 24; i_28 += 2) 
        {
            for (int i_29 = 2; i_29 < 24; i_29 += 2) 
            {
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) max((((unsigned char) -737505865)), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_67 [i_27] [i_27] [i_27 + 2] [15U])))))));
                        var_54 -= ((/* implicit */signed char) ((unsigned short) -7358805));
                    }
                } 
            } 
        } 
        var_55 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)45))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_3)) ? (12381915834114875915ULL) : (((/* implicit */unsigned long long int) var_3)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((short)27915), (((/* implicit */short) var_0)))), (((/* implicit */short) ((signed char) var_1)))))))));
    }
    /* vectorizable */
    for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
    {
        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2032U)))) ? ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_31 + 1])))));
        var_57 = ((/* implicit */unsigned int) (short)5633);
        var_58 = ((/* implicit */_Bool) var_5);
        /* LoopSeq 2 */
        for (short i_32 = 3; i_32 < 23; i_32 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_33 = 1; i_33 < 22; i_33 += 1) 
            {
                var_59 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)22))));
                arr_101 [i_32] [i_33 + 1] [i_32] [(short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)96)) >= (((/* implicit */int) (unsigned char)82))));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                arr_104 [16ULL] [i_32] [i_32] [(unsigned short)12] = ((/* implicit */short) ((unsigned int) arr_73 [i_31 + 1] [i_31 + 1] [i_31 + 1]));
                var_60 = ((/* implicit */short) ((((/* implicit */_Bool) 921219519U)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))));
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 25; i_35 += 2) 
                {
                    for (unsigned char i_36 = 0; i_36 < 25; i_36 += 4) 
                    {
                        {
                            var_61 *= ((/* implicit */_Bool) (unsigned char)107);
                            arr_112 [i_31] [i_31 + 1] [i_31] [i_32] [i_31] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 323308481)) % (((((/* implicit */_Bool) var_3)) ? (18446744073709551592ULL) : (var_9)))));
                            var_62 = arr_78 [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31];
                        }
                    } 
                } 
            }
            for (unsigned char i_37 = 2; i_37 < 21; i_37 += 4) 
            {
                /* LoopNest 2 */
                for (short i_38 = 0; i_38 < 25; i_38 += 3) 
                {
                    for (signed char i_39 = 0; i_39 < 25; i_39 += 3) 
                    {
                        {
                            var_63 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((var_3) >= (((/* implicit */int) var_1)))))));
                            arr_122 [i_31] [i_32] [i_32] [i_38] [i_39] = ((/* implicit */short) ((var_9) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)121)))))));
                            var_64 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -72057594037927936LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_86 [i_37 - 1]))));
                var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)135))) ? (arr_105 [19U] [i_32] [i_32 - 2] [i_32] [19U]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))));
                /* LoopNest 2 */
                for (signed char i_40 = 0; i_40 < 25; i_40 += 1) 
                {
                    for (unsigned char i_41 = 0; i_41 < 25; i_41 += 3) 
                    {
                        {
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) arr_99 [i_32])) ? (((/* implicit */int) var_4)) : (((((((/* implicit */int) (short)-11416)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                            var_68 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                var_69 += ((/* implicit */signed char) arr_54 [i_37] [i_37]);
            }
            var_70 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        for (short i_42 = 3; i_42 < 23; i_42 += 4) /* same iter space */
        {
            var_71 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_72 -= ((/* implicit */short) (~(((/* implicit */int) (short)-11047))));
            var_73 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_123 [i_31] [i_31] [i_31] [7] [i_31 + 1] [i_31])) + (arr_66 [i_31 + 1] [i_42] [i_31 + 1] [i_31 + 1] [i_31])))) >= (var_8)));
        }
    }
}
