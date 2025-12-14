/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214873
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (((!((!(arr_2 [i_0]))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0 - 1]))))));
                var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (((/* implicit */int) min((arr_1 [i_1]), ((signed char)-125))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))))), (max((50331648U), (((/* implicit */unsigned int) (signed char)124)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_6), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((1192989341) - (1514008350))) : ((+(((/* implicit */int) var_3)))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_2])))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_2])), (((arr_2 [i_2]) ? (var_1) : (((/* implicit */int) var_0)))))))));
    }
    for (int i_3 = 4; i_3 < 11; i_3 += 1) 
    {
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1192989337)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3]))) * (arr_10 [i_3 + 1])))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)43275)) < (((/* implicit */int) arr_9 [i_3] [i_3 + 2])))) ? (max((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4096))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_9 [i_3] [7])) || (((/* implicit */_Bool) arr_11 [3LL] [3LL] [i_3]))))))), ((unsigned short)22261))))));
        }
        var_19 += ((/* implicit */unsigned char) var_6);
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18063)) ? (1192989336) : (230977145))))));
        var_21 = ((/* implicit */unsigned long long int) (short)480);
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_22 = ((/* implicit */short) var_9);
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned char) 126100789566373888ULL)))));
            var_24 = ((/* implicit */int) arr_12 [i_7] [i_7] [i_6 - 1]);
            arr_23 [i_7] [i_6] = ((((/* implicit */_Bool) (short)-2522)) ? (arr_18 [i_6 - 1]) : (arr_18 [i_6 + 1]));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_21 [(unsigned short)5] [i_6 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22261))) : (-4571620598987888047LL)))) ? (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_9 [i_6] [i_8])) - (32))))) : (var_1)));
            var_26 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            /* LoopSeq 4 */
            for (short i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) var_5))))))));
                arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 - 1]))));
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6]))))) : (((/* implicit */int) ((unsigned char) arr_17 [i_9 + 2]))))))));
            }
            for (short i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_5))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    arr_36 [i_8] [i_8] [i_6 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-30))));
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)17))));
                    var_31 = ((/* implicit */unsigned char) ((((unsigned int) (signed char)17)) ^ (((/* implicit */unsigned int) 1192989336))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 3; i_12 < 7; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_29 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))))));
                        var_33 = ((/* implicit */short) ((6965104150670860295LL) < (((/* implicit */long long int) 1192989337))));
                        arr_39 [i_6] [i_6 - 1] [7] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3430500184581716632LL)) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))));
                        var_34 *= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-81)) < (((/* implicit */int) arr_25 [i_10])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_31 [i_6] [i_8] [i_10] [i_11])) ? (((/* implicit */int) arr_17 [i_10])) : (((/* implicit */int) (short)18030))))));
                    }
                    for (int i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1]))) + (arr_31 [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 1])));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24186)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)162))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_10 + 1])) ? (arr_15 [i_6 + 1] [i_10 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22261))))))));
                        var_38 = ((/* implicit */int) arr_38 [i_10 - 1]);
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4294967295U)))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1935105904)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)15876))))))))));
                }
                for (unsigned char i_14 = 1; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    var_40 = ((3U) > (((/* implicit */unsigned int) -1847757836)));
                    arr_44 [i_6] = ((/* implicit */unsigned int) ((_Bool) arr_37 [i_10 - 1] [(_Bool)1] [i_10] [i_14] [i_14] [7] [i_14 + 1]));
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                var_41 = ((/* implicit */unsigned char) ((var_8) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [(unsigned char)1] [i_8] [(signed char)10] [(unsigned char)5]))) == (563853366U))))));
                var_42 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5236988397452462623LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)-71)))))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) (!(var_9)));
                            var_44 += ((/* implicit */short) arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            arr_53 [i_6] [0] [i_6] [i_16] = ((/* implicit */unsigned short) ((((-1192989347) + (2147483647))) << (((((-637222949) + (637222975))) - (25)))));
                        }
                    } 
                } 
            }
            for (signed char i_18 = 1; i_18 < 8; i_18 += 1) 
            {
                var_45 = ((/* implicit */short) ((var_7) >> (((var_1) - (1984936022)))));
                arr_57 [i_6] [i_18] [i_18] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_24 [i_6 - 1])) : (((((/* implicit */int) var_5)) + (var_1)))));
                arr_58 [i_18] [i_8] [i_18] [i_8] = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) arr_25 [i_6 - 1])) : (((/* implicit */int) arr_25 [i_18]))));
                var_46 = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
            var_47 = ((/* implicit */_Bool) ((int) (unsigned char)97));
            arr_59 [i_6] [i_6] = ((/* implicit */unsigned short) arr_13 [i_8] [i_8] [i_6 - 1]);
        }
        arr_60 [4ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_48 [i_6 + 1]))));
        var_48 *= ((/* implicit */unsigned short) arr_17 [(_Bool)1]);
        /* LoopSeq 1 */
        for (unsigned int i_19 = 1; i_19 < 8; i_19 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))));
                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_20] [i_19 + 2] [i_6]))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (3670016U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                arr_66 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */long long int) arr_43 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]);
            }
            for (int i_21 = 0; i_21 < 11; i_21 += 1) 
            {
                var_51 *= ((/* implicit */long long int) (!((_Bool)1)));
                var_52 = ((/* implicit */short) 652555170615803855ULL);
                /* LoopSeq 3 */
                for (signed char i_22 = 3; i_22 < 8; i_22 += 4) 
                {
                    arr_73 [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned char) ((393216) ^ (((/* implicit */int) arr_21 [i_6 - 1] [i_22 + 3]))));
                    arr_74 [(unsigned short)8] [(_Bool)1] [i_19] [i_6 + 1] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 262016))));
                    var_53 = ((/* implicit */_Bool) arr_17 [i_6]);
                    var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (+((-(1872801213U))))))));
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) ^ (((/* implicit */int) arr_56 [6LL] [i_21] [i_22 - 2]))));
                }
                for (int i_23 = 1; i_23 < 8; i_23 += 1) 
                {
                    arr_78 [i_6] [i_19 + 3] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) % (((unsigned int) arr_47 [i_6] [i_19] [i_6] [i_19] [i_19] [i_19]))));
                    arr_79 [i_23] [i_21] [i_19] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_7)))))) == (((((/* implicit */_Bool) (unsigned short)31877)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    var_56 = ((/* implicit */unsigned int) (!((_Bool)0)));
                }
                for (int i_24 = 1; i_24 < 10; i_24 += 1) 
                {
                    arr_83 [i_6 + 1] [i_19] [i_21] [i_24] [3] [i_24] = ((/* implicit */int) var_10);
                    var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((341351676U) << (((2596604392671454762LL) - (2596604392671454734LL))))))));
                    var_58 = ((/* implicit */int) min((var_58), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_19] [i_19] [i_21] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (arr_26 [i_24] [i_21] [i_6])))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((unsigned char) 1978160646)))))));
                    arr_84 [i_21] [i_24] = ((/* implicit */short) arr_15 [i_24 - 1] [(unsigned char)1]);
                }
                var_59 = ((/* implicit */signed char) -1011622311);
                var_60 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1847757836)) ? (((/* implicit */int) (signed char)28)) : (-1847757836)));
            }
            for (unsigned int i_25 = 1; i_25 < 9; i_25 += 4) 
            {
                var_61 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_72 [i_6 + 1]))));
                arr_87 [i_25] [i_19] [i_19] [i_25] = ((/* implicit */_Bool) arr_63 [i_6 - 1] [i_19 + 1] [i_19 + 3]);
                var_62 += ((/* implicit */signed char) arr_22 [i_6]);
            }
            arr_88 [3ULL] [i_19] = ((/* implicit */signed char) ((int) ((-1) < (1847757842))));
        }
    }
}
