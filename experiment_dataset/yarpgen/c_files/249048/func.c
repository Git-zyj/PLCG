/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249048
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
    var_19 = max((((/* implicit */long long int) (unsigned short)38768)), (8366206858624597361LL));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                arr_6 [i_1] [i_1] [i_0] |= (~((~(-1LL))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [20LL])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)45)), ((short)-2436)))) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])))))) ? (((((/* implicit */_Bool) ((long long int) arr_5 [(unsigned char)3] [(unsigned char)3] [i_2 + 1] [i_0]))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_3 [22] [i_1] [i_2])))))) : (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((long long int) 11014967074753602887ULL)) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1524398332)) <= (max((((/* implicit */long long int) var_18)), (var_14)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3]))));
                    var_23 = arr_8 [i_0] [i_0] [i_2] [i_3];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [6ULL] [i_0] [i_0]))) : (arr_9 [i_0] [i_1] [(short)7] [i_4]))) : (var_14)));
                        arr_13 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (arr_10 [i_0] [(_Bool)1] [i_2 - 2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_3 + 2] [i_3 + 2])))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11269)) ? (arr_12 [i_0] [(signed char)0] [i_3 + 3] [i_5]) : (var_8)));
                        arr_16 [i_5] [7LL] [i_3] [i_1] [2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4)))) ? (0LL) : ((~(-1498075362007012389LL)))));
                        var_26 = ((/* implicit */unsigned char) arr_11 [7ULL]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((short) 1420985293)))));
                    }
                    arr_17 [i_3] = ((/* implicit */unsigned short) (!((_Bool)0)));
                }
                arr_18 [(short)4] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1258104858928418935LL)))) : (((var_17) * (var_17)))))) ? (((/* implicit */long long int) (~(839918381U)))) : ((+(5581072186562126846LL)))));
            }
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11006)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_14 [4LL] [i_1] [i_6] [22] [i_0] [12LL])) : (((/* implicit */int) arr_4 [i_1] [21LL] [21LL])))))));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_15 [i_6] [i_1] [i_6])), ((short)-17281)))) ? (((long long int) (signed char)-35)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_6])) ? (arr_10 [i_0] [i_1] [i_0] [i_6]) : (arr_9 [i_6] [i_1] [i_1] [i_0])))));
            }
            var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((signed char) 0ULL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) 
            {
                arr_25 [18] [i_7] = (+(((/* implicit */int) arr_15 [i_7] [i_7] [i_7 - 1])));
                arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_7] [i_1] [(unsigned short)1] [i_7 + 1]))) != (var_16)));
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5034177851791013327LL))));
            }
            for (unsigned char i_8 = 4; i_8 < 22; i_8 += 3) 
            {
                var_32 *= ((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */long long int) ((short) var_13))))) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [(short)4])))));
                var_33 = ((/* implicit */long long int) ((short) ((short) (((_Bool)1) ? (-4104069375415194584LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_8])))))));
                arr_29 [i_0] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [15LL] [i_0] [i_0])) ? (var_11) : (((/* implicit */int) (_Bool)1)))), (((int) arr_8 [i_8] [i_1] [i_1] [i_8]))))) / (((arr_9 [i_8] [i_8 - 3] [i_8 - 2] [i_8 - 3]) ^ (((/* implicit */long long int) 466160633))))));
            }
            arr_30 [(signed char)22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-8343735233433196257LL)))) + ((+(0ULL)))));
            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_23 [i_1] [0ULL] [0ULL] [i_0]))));
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) var_10)) << (((var_8) + (2368313949875340660LL))))) : (((/* implicit */int) ((unsigned short) var_10))))));
            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -972838088))));
            var_36 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-5328)) + (((/* implicit */int) (unsigned short)27780)))) << (((/* implicit */int) ((((/* implicit */int) arr_23 [(signed char)4] [14LL] [14LL] [i_0])) >= (((/* implicit */int) (signed char)-69)))))));
            var_37 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_3) ? (min((arr_9 [i_0] [i_0] [i_0] [21ULL]), (((/* implicit */long long int) 266165515)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [(short)19] [i_9] [(short)19]))))))))))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            arr_42 [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_5 [17LL] [i_10] [i_11] [8LL]);
                            var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)10753), (((/* implicit */short) (unsigned char)21)))))));
                            var_39 = ((/* implicit */unsigned long long int) arr_0 [i_12]);
                            arr_43 [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50582))) - (max((((/* implicit */unsigned long long int) -1341777779962006330LL)), (651149163208603783ULL)))))));
                            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) ((_Bool) arr_20 [i_0]))), (arr_4 [i_0] [i_9] [(signed char)19])))) == (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        var_41 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) + (((/* implicit */int) var_13))));
        var_42 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) ((signed char) var_11))), (var_14)))));
    }
    for (int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) max(((~(min((((/* implicit */unsigned long long int) arr_46 [i_13])), (var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_44 [i_13] [i_13]), (arr_44 [i_13] [i_13]))))) >= (((6LL) << (((((/* implicit */int) arr_44 [i_13] [i_13])) - (21895)))))))))))));
        arr_47 [i_13] = ((/* implicit */unsigned short) min((-1533370298117337590LL), (((/* implicit */long long int) (short)(-32767 - 1)))));
    }
    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        var_44 = ((/* implicit */long long int) arr_8 [i_14] [i_14] [i_14] [16ULL]);
        arr_51 [i_14] = ((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14] [(signed char)20]);
        arr_52 [8LL] = ((/* implicit */short) var_15);
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1])) ? (((/* implicit */long long int) var_4)) : (arr_10 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1])))), (((((/* implicit */_Bool) arr_36 [i_15 + 1] [i_15] [i_15 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53248))) : (var_17))))))));
                                arr_66 [i_14] [i_16] [i_16] [(signed char)7] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)20847), (arr_19 [i_15] [i_17] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_4)))))))) : (0ULL)));
                                var_46 = ((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (arr_62 [i_16] [2ULL] [i_17]) : (var_0)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_16)))))), (((/* implicit */long long int) arr_11 [(short)8]))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (short)-28846)) ? (0ULL) : (((/* implicit */unsigned long long int) var_2)))))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -2217720301804405825LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_54 [i_14] [i_14]))))))));
                    var_48 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((unsigned int) var_3))) - (arr_28 [i_14] [i_16]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20568)) ? (arr_54 [i_14] [i_14]) : (arr_54 [i_14] [i_15])))))))));
                }
            } 
        } 
    }
    var_49 |= ((/* implicit */short) ((unsigned long long int) var_5));
    var_50 = ((/* implicit */short) (unsigned short)2381);
}
