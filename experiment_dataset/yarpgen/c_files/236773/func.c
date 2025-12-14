/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236773
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])))))))) ? ((+(max((var_2), (((/* implicit */unsigned long long int) (unsigned short)19126)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45516)) ? (((/* implicit */int) (unsigned short)20028)) : (((/* implicit */int) (unsigned short)20009))))) ? (min((arr_1 [i_0] [i_0 - 2]), (var_5))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (8200316507092737287ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 - 3])))))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) || (((/* implicit */_Bool) arr_4 [i_1 + 3])))))));
        var_12 |= ((/* implicit */unsigned char) var_3);
        var_13 = (+((((+(arr_5 [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45526))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_14 ^= ((/* implicit */_Bool) arr_5 [i_1]);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_4 [i_4]), (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2]))))), (var_3)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (((arr_5 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20034)))))))) : (min((((((/* implicit */_Bool) 286152098785025459ULL)) ? (arr_12 [i_3] [i_1]) : (((/* implicit */unsigned long long int) arr_14 [i_1 + 3])))), (((/* implicit */unsigned long long int) (~(0LL))))))));
                        var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))) ? (arr_14 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41463))) | (3269031720600246727LL)))))));
                    }
                } 
            } 
            var_17 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_12 [i_1] [i_1])))) ? (((/* implicit */int) (short)-29914)) : (((((-2105972317) + (2147483647))) >> (((((/* implicit */int) var_10)) - (116)))))));
            var_18 = ((/* implicit */long long int) (((+(min((var_2), (arr_7 [i_1] [i_1] [i_2]))))) ^ (min((arr_12 [i_1 + 2] [i_1 + 3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)124)))))))));
            arr_15 [i_2] [i_2] = ((_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_4 [i_1]))))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */int) (unsigned short)45516)) / (((/* implicit */int) var_8)))))));
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (min(((+(((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((((unsigned char) var_9)), (((/* implicit */unsigned char) var_4)))))))));
                var_21 ^= ((/* implicit */short) (~(((/* implicit */int) (signed char)0))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((short) max((var_3), (((/* implicit */unsigned long long int) (-(arr_14 [(unsigned char)4])))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+((~((-(((/* implicit */int) (signed char)41)))))))))));
                            var_24 = ((/* implicit */int) ((((((_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (arr_26 [i_1 + 2] [i_7])))) : (((arr_5 [i_5]) << (((((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7])) - (113))))))) < (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (248))) >> (((/* implicit */int) ((var_2) <= (8ULL)))))))));
                        }
                    } 
                } 
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) var_10))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2418284737047669417LL)) ? (((/* implicit */int) (unsigned short)45492)) : (((/* implicit */int) var_8)))))))) < (max((((((/* implicit */_Bool) -1719202619)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((-1719202619) != (((/* implicit */int) var_6))))))))))));
                var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */int) (unsigned short)20045)) : (2147483647)));
                arr_29 [i_1 + 3] [i_5] [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_25 [i_1] [i_1 + 2] [i_1 + 2]), (arr_25 [i_9] [7] [7])))) % (((/* implicit */int) arr_23 [i_1] [i_1] [10ULL] [i_1] [i_1]))));
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                var_27 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) - (14453222714086232116ULL))))))) >= (((/* implicit */int) ((signed char) arr_13 [14] [14] [14] [i_1]))));
                var_28 -= ((/* implicit */short) (+((((+(((/* implicit */int) arr_21 [i_1 - 1] [i_1] [i_1] [i_1 + 4])))) >> (((((((/* implicit */int) (unsigned char)252)) & (-1719202619))) - (188)))))));
                arr_32 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1719202618)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (9223372036854775787LL)))) && ((_Bool)1)))) == ((~(((/* implicit */int) var_9))))));
            }
            for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 3) 
            {
                var_29 ^= ((/* implicit */unsigned char) arr_8 [i_1] [10LL] [i_11]);
                arr_35 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */short) (_Bool)0);
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_5] [i_11])))))))));
            }
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_31 = ((/* implicit */int) ((((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1 + 4] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1]))))) || (((/* implicit */_Bool) arr_33 [i_1] [i_1 + 1]))));
                arr_40 [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned long long int) arr_39 [i_1] [i_1] [i_1] [i_12]);
            }
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) var_5);
            arr_45 [i_1 + 1] [i_13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_1] [i_1] [i_1 - 4] [i_1] [i_1]))));
        }
        arr_46 [i_1] [i_1] = min((6283878632188519149LL), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_14 [i_1 - 2]))) * (((/* implicit */int) max((arr_23 [i_1 + 4] [i_1 + 4] [i_1 - 1] [i_1 - 2] [i_1]), ((unsigned char)173))))))));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        var_33 = ((/* implicit */signed char) var_2);
        var_34 = ((/* implicit */unsigned long long int) (-(1146881421)));
        arr_49 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) (-(((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20036)))))));
        /* LoopSeq 1 */
        for (long long int i_15 = 1; i_15 < 23; i_15 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 2; i_16 < 23; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                arr_54 [8ULL] |= ((/* implicit */short) -7379537980164939036LL);
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)45525));
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20045)))))));
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_0)))));
                    var_39 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_16 + 1] [i_16 + 1] [i_16] [i_15 + 1]))));
                }
                var_40 ^= ((signed char) (+(var_1)));
            }
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                var_41 = ((/* implicit */signed char) (unsigned short)20050);
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            var_43 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                var_44 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))));
                arr_64 [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) arr_39 [i_14] [i_14] [i_14] [i_14]))));
            }
            /* LoopSeq 4 */
            for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                var_45 |= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_60 [(_Bool)1] [i_14]))))));
                var_46 = ((/* implicit */unsigned long long int) (signed char)82);
            }
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
            {
                var_47 -= ((/* implicit */_Bool) ((int) arr_47 [i_15 + 1]));
                var_48 = ((/* implicit */int) (~(arr_12 [i_21] [i_15])));
            }
            for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
                {
                    arr_76 [i_23] [i_14] [i_14] [(signed char)10] = ((unsigned char) (unsigned char)12);
                    arr_77 [i_23] [i_14] [i_22] [i_14] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                    var_49 = ((/* implicit */signed char) ((((((/* implicit */int) arr_22 [i_14] [i_14] [i_14] [i_14] [i_14])) >> (((/* implicit */int) (unsigned char)3)))) & (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)247))))));
                }
                for (long long int i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */long long int) arr_34 [(short)21] [i_15]);
                    arr_80 [i_24] [i_24] |= ((/* implicit */signed char) arr_57 [i_14]);
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_51 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_15 - 1] [i_15] [i_15] [i_15])) - (((/* implicit */int) (signed char)77))));
                    var_52 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_72 [i_15] [i_22] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_3))));
                }
                var_53 |= ((/* implicit */signed char) (_Bool)1);
                arr_84 [i_14] [i_14] = ((/* implicit */long long int) ((short) (unsigned short)45525));
                var_54 = (+(((/* implicit */int) arr_53 [i_15 + 1] [i_15 - 1] [i_14])));
            }
            for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
            {
                var_55 ^= ((/* implicit */long long int) (+(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_53 [(signed char)18] [i_15] [(signed char)18]))))));
                var_56 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))));
                /* LoopSeq 1 */
                for (signed char i_27 = 1; i_27 < 22; i_27 += 3) 
                {
                    var_57 = ((((/* implicit */_Bool) arr_78 [i_27 + 1] [2] [i_26] [2] [i_14])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                    var_58 *= ((/* implicit */signed char) ((_Bool) (unsigned short)20037));
                }
                var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) (-(((int) arr_13 [i_14] [i_14] [i_26] [i_26])))))));
                var_60 ^= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)251)))) & (((long long int) var_6)));
            }
            var_61 |= ((/* implicit */signed char) ((long long int) ((unsigned char) arr_58 [(unsigned char)20])));
        }
    }
    for (signed char i_28 = 2; i_28 < 12; i_28 += 2) 
    {
        arr_92 [i_28] = ((((/* implicit */_Bool) ((((unsigned long long int) arr_58 [i_28])) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_28] [i_28])))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_28] [i_28 + 1] [i_28 + 1] [i_28 + 1]))) & (arr_12 [i_28] [i_28]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))));
        var_62 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((_Bool) 6543771544089471005ULL))), (((((/* implicit */_Bool) (unsigned short)20045)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (11902972529620080610ULL))))), (((/* implicit */unsigned long long int) ((short) 535653714483242207ULL)))));
        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24532)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_28 - 1] [i_28] [i_28] [i_28] [i_28 - 1])) ? (((/* implicit */int) arr_55 [i_28] [i_28] [i_28] [i_28])) : (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */int) ((_Bool) var_2))) : ((-(((/* implicit */int) (signed char)5)))))) : (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)90)))))));
        arr_93 [i_28] = ((/* implicit */unsigned char) arr_86 [i_28 + 1] [i_28] [i_28]);
        arr_94 [i_28 - 2] [i_28] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) - (((11902972529620080601ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    }
    var_64 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    for (unsigned char i_29 = 0; i_29 < 25; i_29 += 4) 
    {
        var_65 = (short)4116;
        var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) arr_95 [i_29] [11ULL])) ? (((((/* implicit */int) (unsigned short)14191)) + (((/* implicit */int) (unsigned char)145)))) : (((int) arr_97 [i_29])))))))));
        /* LoopNest 3 */
        for (signed char i_30 = 0; i_30 < 25; i_30 += 1) 
        {
            for (unsigned char i_31 = 2; i_31 < 23; i_31 += 2) 
            {
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    {
                        arr_107 [(signed char)23] [i_30] [i_31] [i_32] [i_32] [i_30] = ((/* implicit */_Bool) ((signed char) var_8));
                        var_67 = ((short) 11902972529620080610ULL);
                    }
                } 
            } 
        } 
        var_68 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_104 [i_29] [i_29] [i_29] [(unsigned short)4])), ((unsigned char)15)))) || (((/* implicit */_Bool) ((arr_97 [i_29]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))) + (min((((/* implicit */int) var_9)), (arr_103 [i_29] [i_29] [i_29] [i_29])))));
    }
    for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
    {
        var_69 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */int) arr_19 [i_33] [i_33] [i_33 - 1] [i_33 - 1])) << (((((/* implicit */int) (short)1920)) - (1918))))) < (((/* implicit */int) var_8)))))));
        var_70 ^= ((/* implicit */unsigned char) ((arr_14 [i_33 - 1]) / ((+(arr_14 [i_33 - 1])))));
    }
}
