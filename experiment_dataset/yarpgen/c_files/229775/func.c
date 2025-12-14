/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229775
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
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_17 = (+(max((((long long int) arr_2 [i_0])), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4]))))))));
        var_18 = ((/* implicit */short) (~(max((var_4), (((/* implicit */long long int) 0U))))));
        var_19 = ((/* implicit */long long int) var_1);
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned char)225))) ? (max((3388029875U), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) arr_5 [i_1 - 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) 906937420U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3388029875U)))), (arr_5 [i_3 + 4])))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_8 [i_3 - 1] [i_3] [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)1782))))));
                }
            } 
        } 
    }
    for (int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        arr_13 [i_4] [(_Bool)1] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) 96)), (arr_10 [i_4 - 2] [i_4 + 1]))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 96)) ? (-96) : (((/* implicit */int) arr_9 [11] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4 - 1]))) % (2544220870923833500ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_4] [i_4])), ((+(arr_10 [i_4] [i_4]))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_20 [4ULL] [11] [i_5] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-15604)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((unsigned char) ((int) 15902523202785718102ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(-6695250854973616014LL))))));
                        arr_27 [i_8] [i_7] [i_6] [i_4] = arr_10 [i_8] [i_7];
                        var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1))))));
                        var_27 = ((/* implicit */unsigned long long int) ((arr_22 [0LL] [0] [i_8 + 1] [i_7] [i_4 - 2]) != (arr_22 [i_8] [i_8] [i_8 + 1] [i_6] [i_4 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 93))));
                        var_29 = ((/* implicit */int) (~(arr_5 [i_4 - 2])));
                    }
                    var_30 = ((/* implicit */int) arr_5 [i_4]);
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    arr_34 [i_6] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_6)))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18434))))) ? ((~(var_11))) : (((long long int) var_11))));
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_39 [i_4] = ((/* implicit */_Bool) 96);
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_43 [11ULL] [i_5] [i_6] [i_6] [i_6] [i_12] [i_4] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_0)))))) || (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_11] [(short)10] [i_4]))))))));
                        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (-96) : (((/* implicit */int) (short)-15604))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((_Bool) 95))));
                        var_34 = ((/* implicit */signed char) ((((9000176210212371050LL) << (((((/* implicit */int) (unsigned char)104)) - (104))))) >= (((/* implicit */long long int) (-(2147483642))))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((short) arr_24 [i_4 - 1] [i_4 - 1] [i_6] [i_11] [i_6])))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_14] [i_11] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_18 [i_4] [i_6] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) max((arr_45 [10ULL] [(_Bool)0] [i_6]), (((/* implicit */long long int) 125829120)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(((var_9) % (((/* implicit */unsigned int) 95))))))));
                        var_36 = ((/* implicit */_Bool) var_1);
                        var_37 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_4 + 1] [i_4 + 1])) && (((/* implicit */_Bool) arr_42 [i_4 + 1] [i_4 - 1])))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_53 [i_4] [i_5] [i_6] [i_11] [i_4] = (((+(2106591937494477167LL))) - (((/* implicit */long long int) 906937420U)));
                        arr_54 [i_4] [i_5] [i_6] [i_11] [(_Bool)1] = (+(((/* implicit */int) (!(((_Bool) 3388029875U))))));
                        arr_55 [i_6] [i_5] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_6) ? (-2106591937494477168LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15604)))))))) ? (-96) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) / (((/* implicit */int) arr_21 [i_4 - 1] [i_4] [i_6] [(short)1]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) ((2ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 1] [0])))));
                        arr_58 [4] [i_16] [4] [i_11] [4] = ((/* implicit */short) ((arr_15 [i_4 + 1] [i_4 - 1]) < (((/* implicit */long long int) 2147483647))));
                        var_39 = ((/* implicit */int) (!(((-9223372036854775799LL) > (((/* implicit */long long int) -93))))));
                        var_40 = (~(arr_15 [i_4] [i_6]));
                    }
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (-((-(2080374784))))))));
                }
            }
            for (signed char i_17 = 1; i_17 < 8; i_17 += 4) 
            {
                arr_62 [(signed char)3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 2147483647))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_4 - 1] [i_17 + 1] [i_17])) ? (201326592) : ((-2147483647 - 1))))) : (((long long int) var_2))));
                var_42 = ((/* implicit */int) max((var_42), (max(((-(((/* implicit */int) arr_37 [i_4] [i_17 + 1] [i_17 + 1])))), (max((((((/* implicit */_Bool) 2ULL)) ? (var_14) : (var_14))), (((/* implicit */int) var_5))))))));
                var_43 = ((/* implicit */long long int) 68719476735ULL);
            }
            var_44 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)104))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
    {
        var_45 = ((/* implicit */long long int) arr_65 [1LL] [1LL]);
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_46 = ((/* implicit */_Bool) 17523985333302826576ULL);
                    var_47 = max((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_69 [i_18] [i_20] [i_20])))), ((!(((/* implicit */_Bool) max((96), (((/* implicit */int) var_1))))))));
                    arr_71 [i_18] [i_19] [i_19] [i_20] = ((/* implicit */unsigned int) ((long long int) max((arr_70 [(unsigned char)13] [i_19] [i_18]), (((/* implicit */short) (!(((/* implicit */_Bool) 108))))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (signed char i_21 = 1; i_21 < 19; i_21 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 21; i_22 += 1) 
        {
            for (unsigned char i_23 = 1; i_23 < 19; i_23 += 3) 
            {
                {
                    arr_81 [i_23] [i_23] [i_23] [i_21] = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) arr_72 [i_21 - 1]))) >= (((((/* implicit */_Bool) arr_72 [i_21 - 1])) ? (arr_78 [i_23] [i_23 + 1] [i_21 + 1] [i_23]) : (arr_72 [i_21 + 1])))));
                    arr_82 [i_21] [i_23 + 2] [i_23] = ((/* implicit */short) min((((/* implicit */unsigned int) ((max((((/* implicit */long long int) 2147483647)), (36028796884746240LL))) <= (((/* implicit */long long int) max((arr_75 [i_21]), (((/* implicit */int) arr_76 [i_21])))))))), (max((min((((/* implicit */unsigned int) var_10)), (var_9))), (((/* implicit */unsigned int) (~(arr_75 [i_21 - 1]))))))));
                    var_48 = ((/* implicit */int) max((var_48), (max((min((var_15), (((/* implicit */int) arr_79 [(signed char)8] [i_21 - 1])))), (((((/* implicit */int) arr_79 [(short)8] [i_21 + 1])) & (-959002193)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                for (long long int i_26 = 0; i_26 < 21; i_26 += 1) 
                {
                    {
                        var_49 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_79 [i_25] [i_25])))), (((((/* implicit */_Bool) arr_78 [i_25] [i_21] [i_21 + 1] [i_21 + 1])) ? (var_15) : (((/* implicit */int) arr_79 [i_25] [i_25]))))));
                        var_50 = ((/* implicit */long long int) arr_87 [(_Bool)1] [i_24] [(_Bool)1]);
                        /* LoopSeq 2 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            arr_95 [i_27] [i_27] [i_25] [i_27] [i_21] = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))));
                            var_51 = ((/* implicit */int) ((arr_93 [i_21] [i_24] [i_21] [i_26] [i_27] [i_27]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (_Bool)0)))))));
                            var_52 = (-(max((((/* implicit */int) arr_84 [i_21 + 1])), (min((arr_73 [(unsigned char)10] [(unsigned char)10]), (((/* implicit */int) (unsigned char)151)))))));
                            var_53 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_86 [i_24] [i_26] [i_24]) - (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_27] [i_27])))))), ((-(arr_91 [i_21] [i_25] [8] [19LL])))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) : (arr_93 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_26] [i_27] [i_27]))) : (((long long int) (short)-14386)));
                            arr_96 [i_21] [i_21] [i_21] [i_21] [5ULL] [i_27] [i_21] = ((/* implicit */unsigned char) arr_77 [i_25] [i_25] [i_25] [i_25]);
                        }
                        for (unsigned char i_28 = 0; i_28 < 21; i_28 += 4) 
                        {
                            var_54 = ((((-2106591937494477149LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)));
                            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_14) << (((arr_89 [i_21 + 2] [i_24] [i_21 + 2] [i_26] [i_24] [i_24]) - (4685672034153049344ULL))))), (((/* implicit */int) ((unsigned char) (short)4994)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4096)) ? (((((/* implicit */_Bool) -2003162886)) ? (var_4) : (arr_86 [i_21 - 1] [15] [i_28]))) : (((/* implicit */long long int) ((int) var_5))))))));
                        }
                        var_57 = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
    }
    for (signed char i_29 = 1; i_29 < 19; i_29 += 3) /* same iter space */
    {
        var_58 = ((/* implicit */_Bool) arr_72 [i_29]);
        var_59 = ((/* implicit */_Bool) (+((-(108)))));
        var_60 = ((((/* implicit */_Bool) min((arr_78 [(_Bool)1] [i_29 + 2] [i_29 + 1] [i_29 + 2]), (arr_78 [(signed char)16] [i_29 + 1] [i_29 - 1] [i_29 + 1])))) ? ((~(arr_78 [6U] [i_29 + 1] [i_29 + 2] [i_29 - 1]))) : (arr_78 [(signed char)2] [i_29 + 2] [i_29 - 1] [i_29 + 1]));
        var_61 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)14386)), (max((arr_86 [i_29] [i_29] [i_29 + 2]), (arr_86 [i_29] [i_29] [i_29 - 1])))));
        var_62 = max((min((((((/* implicit */_Bool) arr_78 [(_Bool)1] [12LL] [i_29 + 2] [i_29])) ? (arr_85 [i_29] [(signed char)2]) : (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */long long int) (+(((int) -2067971828))))));
    }
}
