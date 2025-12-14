/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23941
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
    var_18 += ((/* implicit */signed char) ((min((min((70368739983360ULL), (((/* implicit */unsigned long long int) 6678968228509900297LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14336)) << (((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned short) 880508609)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) 538666458)) ? (((/* implicit */int) ((short) ((int) (_Bool)1)))) : (((/* implicit */int) (signed char)118)));
            arr_6 [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 191844780U)) ? (880508609) : (((/* implicit */int) (unsigned short)24925))))));
            arr_7 [i_0] [i_1 - 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_3 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))), (max((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) var_6))))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        var_21 = ((signed char) min(((unsigned char)46), (min((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)112)))));
                        var_22 = ((/* implicit */unsigned short) ((arr_10 [i_2]) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_3 - 1])) == (((/* implicit */int) var_17)))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_23 += ((/* implicit */signed char) (~(max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) (signed char)0);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned int) min((-1336898590), (((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned char)19] [i_2] [i_5] [i_2])))))))) ? (((((/* implicit */_Bool) (unsigned short)62186)) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_2] [(unsigned short)6] [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                        for (signed char i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) var_6)));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned short) min((((((/* implicit */int) (signed char)25)) ^ (((/* implicit */int) (signed char)1)))), (((var_8) ^ (((/* implicit */int) (signed char)0))))))))));
                        }
                        arr_23 [i_0] [1LL] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)51)) && (((/* implicit */_Bool) -7017221939181140831LL))))) <= (((/* implicit */int) ((signed char) (signed char)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_3] [i_2] [(unsigned char)15])) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned char)218)))) : (((/* implicit */int) (short)12393))))) : (((144115188075855871LL) << (((((((/* implicit */_Bool) (short)16382)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_0 [i_0])))) - (119)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (arr_1 [i_0])));
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_9] [(unsigned char)1] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned short)1403)) : (((/* implicit */int) (unsigned char)255)))));
                            var_28 = ((((/* implicit */_Bool) -5644098848847187340LL)) && ((_Bool)1));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_31 [i_7] [i_2] [i_7] [i_8] [(unsigned short)23] [i_7]))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_27 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_5 [(unsigned char)21] [(unsigned char)21] [(unsigned char)21]))))) <= (((/* implicit */int) (signed char)0))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-8414))))))));
                            var_31 += ((/* implicit */short) ((signed char) min((-4618952839583564392LL), (((/* implicit */long long int) arr_15 [(signed char)4] [i_2] [i_2])))));
                            arr_37 [i_2] [i_8] [(unsigned short)3] [i_7] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned char)21])))));
                            var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) min((arr_24 [i_0] [i_2] [i_7] [i_10]), (((/* implicit */long long int) var_5))))))));
                        }
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) ((short) min((min((var_11), (((/* implicit */long long int) arr_39 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) (unsigned short)10343)))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) -6185486786611583942LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))));
                            var_35 += (+((~(((/* implicit */int) (unsigned short)8192)))));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)20))) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_39 [i_0] [(signed char)1] [i_11])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) (signed char)-59)))))));
                        }
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (signed char)-1))) ? (((/* implicit */int) arr_18 [i_0] [(unsigned short)10] [(unsigned short)13] [i_7] [(unsigned short)13])) : ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_38 [i_7] [22] [i_7] [i_7] [(short)20] [i_7] [i_7])), ((unsigned char)251))))))));
                        arr_40 [i_0] [i_2] = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        }
    }
    for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        var_38 = ((/* implicit */unsigned short) ((unsigned char) arr_32 [i_12] [i_12] [i_12]));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((max((min((5366213942359973914LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */int) (short)15872)) == (((/* implicit */int) (signed char)-1))))))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_14 - 1] [i_14 - 1] [i_13])))))))));
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_41 [i_12]))));
                var_41 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_31 [(unsigned short)22] [i_14 + 1] [(unsigned short)22] [(unsigned short)22] [13] [(unsigned short)22])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_14 + 2] [i_14 + 2] [i_14 + 2])))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_12] [i_14 - 1] [i_12] [10LL] [i_14] [16ULL])) && (((/* implicit */_Bool) var_0)))))));
            }
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                var_42 = ((/* implicit */int) max((var_42), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_12] [21])), (arr_0 [i_12])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                var_43 += (~(((/* implicit */int) ((unsigned short) arr_10 [(short)4]))));
                var_44 += ((/* implicit */long long int) ((short) 3832694631564981282ULL));
            }
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                var_45 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */int) (signed char)-6)) <= (((/* implicit */int) (signed char)73)))))))));
                var_46 += arr_45 [2];
                arr_51 [i_16] [i_12] [i_16] = ((/* implicit */short) min((((/* implicit */int) max((arr_29 [(signed char)22] [(signed char)22]), (arr_29 [i_13] [i_13])))), (((((/* implicit */_Bool) arr_29 [i_13] [i_13])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_29 [i_12] [i_12]))))));
            }
            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) (signed char)-21))));
            var_48 = ((/* implicit */unsigned char) arr_41 [i_12]);
            arr_52 [i_12] [i_13] = ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)53062))), (((unsigned short) ((283726776524341248LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))))))));
            var_49 = ((/* implicit */int) min(((unsigned short)57332), (((/* implicit */unsigned short) (short)-1))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_50 = ((/* implicit */signed char) min((var_50), ((signed char)95)));
            var_51 += ((/* implicit */short) min(((+(var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_17])) ? (((/* implicit */int) (short)21116)) : (((/* implicit */int) (unsigned short)57332)))))));
            arr_55 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)24976)) <= (((/* implicit */int) var_3)))))) : (max((373425457012362395LL), (((/* implicit */long long int) arr_54 [i_12]))))))) && (((/* implicit */_Bool) arr_31 [i_17] [i_12] [(short)0] [i_12] [i_12] [i_12]))));
            /* LoopSeq 3 */
            for (short i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                arr_58 [i_12] [i_17] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max(((short)-21116), (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12288))))))));
                var_52 += ((/* implicit */short) ((signed char) (~(max((((/* implicit */int) (_Bool)1)), (arr_10 [i_18]))))));
            }
            for (unsigned char i_19 = 2; i_19 < 12; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    var_53 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)80)) ? (4201885806265399172LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) (signed char)26))))), (-283726776524341265LL)));
                    var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)102)) ? (4225726922783692266LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8174))))), (((/* implicit */long long int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) arr_2 [i_20] [(unsigned char)16]))))))))));
                    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) min((((/* implicit */int) ((signed char) arr_61 [i_19 + 1] [i_19 + 1] [i_19 - 2] [i_19 - 1]))), (((((/* implicit */int) arr_61 [i_19 - 1] [i_19 - 2] [i_19 + 1] [i_19 + 1])) / (((/* implicit */int) arr_61 [i_19 + 1] [i_19 - 2] [i_19 - 1] [i_19 - 1])))))))));
                    arr_64 [i_12] [(unsigned char)6] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (unsigned char)2)) : (max((((((/* implicit */int) arr_43 [i_12] [(signed char)0])) << (((((/* implicit */int) (unsigned short)13046)) - (13044))))), (((/* implicit */int) var_10))))));
                }
                arr_65 [i_12] [i_12] [i_12] = (short)8312;
                var_56 += var_13;
            }
            for (long long int i_21 = 4; i_21 < 12; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        {
                            arr_75 [i_12] [i_21] [i_12] [i_21] = ((/* implicit */int) max((4305109434545943584LL), (((/* implicit */long long int) (unsigned short)20192))));
                            arr_76 [i_12] [(unsigned char)0] [i_21] [i_12] [i_23] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_15 [i_23] [i_23] [i_23])), (arr_29 [i_12] [i_12])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_71 [i_12] [2ULL] [i_21] [i_22] [i_22] [i_23])))));
                            arr_77 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_1)))) ? (max((((/* implicit */long long int) max((((/* implicit */short) (signed char)102)), (var_7)))), ((-(-7441638675442014023LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_17)) ? (arr_56 [i_12] [i_12] [(unsigned char)4] [i_22]) : (var_14))), (((/* implicit */unsigned int) var_6)))))));
                        }
                    } 
                } 
                var_57 = ((/* implicit */signed char) arr_63 [i_21] [(signed char)5] [i_21] [i_21 + 1]);
            }
        }
        arr_78 [i_12] = ((/* implicit */unsigned short) var_1);
    }
    var_58 = ((/* implicit */long long int) min(((unsigned short)32346), (((/* implicit */unsigned short) var_16))));
}
