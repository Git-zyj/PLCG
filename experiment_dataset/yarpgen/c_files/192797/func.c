/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192797
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)28193)) || ((_Bool)1))));
            var_12 *= ((/* implicit */_Bool) var_0);
        }
        var_13 = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_10)), (var_3))), (((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) var_6))), (((unsigned char) 4294967295U)))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_14 ^= ((/* implicit */long long int) var_2);
            arr_9 [(unsigned char)10] [i_0] [i_0] = ((/* implicit */short) ((min((var_6), (((/* implicit */long long int) arr_8 [i_2 - 2] [i_2 - 1])))) & (((((/* implicit */_Bool) (+(72056494526300160ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28891))))) : (max((-72057594037927936LL), (((/* implicit */long long int) var_9))))))));
            var_15 = ((/* implicit */long long int) (-(((((/* implicit */int) ((unsigned short) (unsigned short)29927))) ^ (max((var_10), (((/* implicit */int) (short)14253))))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [(unsigned short)17] [13ULL])) ? (((((/* implicit */_Bool) (unsigned short)63654)) ? (6612222375587291289LL) : (((/* implicit */long long int) 1800129342U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) var_9))))))));
                            arr_18 [i_0] [i_5] [i_3] [i_0] [0] = ((/* implicit */long long int) 11411198296401388748ULL);
                            arr_19 [i_0] [i_2 - 2] [i_3] [i_4] [i_0] [i_5] [i_5] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_7)) : (arr_12 [i_0] [i_4] [(_Bool)1] [(_Bool)1])))), (max((7035545777308162868ULL), (((/* implicit */unsigned long long int) (unsigned char)209))))))));
                            var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (12761751512684028987ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2767952620861024769ULL)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [19U] [(_Bool)1] = ((/* implicit */short) 5684992561025522629ULL);
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) < (-72057594037927932LL)));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned int) -9223372036854775793LL));
            arr_25 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) != (var_11)));
        }
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        arr_28 [i_8] [i_8] = ((/* implicit */short) var_3);
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)14253))));
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                arr_35 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((unsigned long long int) arr_27 [i_8] [(short)6]));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_20 += ((/* implicit */_Bool) (~(var_1)));
                    arr_40 [i_8] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_9)) : (-1496422362))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_37 [i_8] [(signed char)7] [i_8] [21U])) ? (var_10) : (((/* implicit */int) (short)14266)))))))));
                    }
                    arr_45 [i_8] [i_8] [(unsigned char)2] [i_11] = ((/* implicit */unsigned char) ((_Bool) ((var_4) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_41 [i_8] [11] [11] [(unsigned short)19] [11] [i_11])))));
                }
                arr_46 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36026597995708416LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)1] [(unsigned short)1]))) : (12761751512684028987ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) <= (var_1)))) : (((/* implicit */int) ((unsigned char) 1179211862U)))));
            }
            for (unsigned int i_13 = 1; i_13 < 19; i_13 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) arr_36 [i_13 + 3] [i_13 + 4] [i_13 + 2]);
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        {
                            arr_53 [14U] [i_15] [i_14 - 1] [14U] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 12761751512684028987ULL)) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39799)))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))));
                            arr_54 [i_8] [i_8] [i_8] [i_8] [i_15] = var_0;
                        }
                    } 
                } 
                arr_55 [16] [(signed char)4] [16] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3115755434U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_13 + 4] [i_13 + 4] [i_13 + 4] [i_13 + 2] [(short)6] [i_13]))) : (arr_34 [i_13 - 1] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10])));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    var_25 = (+(((((/* implicit */_Bool) -923582199)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (_Bool)1)))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((arr_32 [i_8] [i_9] [i_16 + 1]) & (((/* implicit */long long int) arr_39 [22ULL] [i_9] [(signed char)18] [i_9])))))))));
                    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46741)) ? (((/* implicit */unsigned long long int) ((int) -2147483628))) : (((((/* implicit */_Bool) -72057594037927960LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))));
                }
            }
            for (signed char i_17 = 1; i_17 < 21; i_17 += 2) 
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) -923582199)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (short)-14253))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-4179))))) ? (((/* implicit */unsigned long long int) (+(arr_32 [i_8] [i_9] [(short)6])))) : (((var_8) ? (16728305660396959318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (signed char i_18 = 3; i_18 < 22; i_18 += 4) 
                {
                    arr_63 [i_17] [i_8] [i_9] [i_17] = ((/* implicit */unsigned int) (!(((11411198296401388736ULL) == (18446744073709551615ULL)))));
                    arr_64 [i_8] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_17] [i_17] [i_17] [i_17 - 1] [i_17])) ? (((/* implicit */int) arr_61 [i_17] [19ULL] [i_9] [i_17])) : (((/* implicit */int) ((((/* implicit */_Bool) 1966872243186029161ULL)) || (((/* implicit */_Bool) arr_27 [i_8] [i_8])))))));
                }
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_67 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) 72057594037927960LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
            arr_68 [i_8] [i_8] [21U] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_19])) ? (arr_60 [i_8] [i_8] [12] [18U]) : (((((/* implicit */_Bool) arr_60 [i_8] [i_8] [i_19] [(short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_11)))));
            /* LoopSeq 1 */
            for (short i_20 = 2; i_20 < 20; i_20 += 4) 
            {
                var_30 -= ((/* implicit */unsigned int) ((int) (unsigned short)0));
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_75 [i_8] [i_8] [11ULL] [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) -2121234703)))));
                        arr_76 [i_8] [i_19] [22] [i_19] [i_22] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) == (arr_47 [i_8] [i_19] [i_20] [i_19]))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_77 [i_8] [i_8] [i_8] [i_20] [i_8] [i_8])) || ((_Bool)1)))) >> (((((/* implicit */int) (unsigned short)6841)) - (6828)))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        arr_82 [i_24] [i_21] [i_20 - 2] [(unsigned short)2] [i_8] = ((/* implicit */int) arr_72 [i_8] [i_8] [i_8] [i_21]);
                        arr_83 [i_8] [i_19] [i_19] [8ULL] [i_24] = ((/* implicit */unsigned short) ((short) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))));
                        arr_84 [i_8] [i_8] [i_19] [i_20] [i_21] [i_19] [i_19] = ((/* implicit */signed char) ((unsigned long long int) arr_70 [i_20 - 2] [i_20] [i_20 + 1]));
                    }
                    arr_85 [i_8] [i_19] [i_8] [i_21] [(unsigned char)3] = ((/* implicit */_Bool) 32809213);
                }
                for (int i_25 = 3; i_25 < 20; i_25 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) arr_57 [i_8] [i_19] [i_20] [(_Bool)1]);
                    var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_41 [i_8] [i_8] [i_8] [i_20] [i_20] [8U])) : (((/* implicit */int) arr_29 [(unsigned short)6] [(unsigned short)6]))))));
                }
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_52 [i_8] [i_19] [i_8] [i_8] [i_20 - 2]))));
                arr_89 [i_19] [i_20 + 3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) ((((/* implicit */int) (short)-19331)) > (((/* implicit */int) arr_58 [i_8] [i_19] [(_Bool)1] [i_8]))))) : (((/* implicit */int) (unsigned short)15227))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_26 = 0; i_26 < 12; i_26 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_27 = 3; i_27 < 11; i_27 += 2) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((long long int) var_2)))));
                    arr_98 [i_26] [i_26] [i_26] [6ULL] = ((/* implicit */unsigned short) ((signed char) (short)32767));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_29 = 0; i_29 < 12; i_29 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_30 = 2; i_30 < 11; i_30 += 2) 
            {
                var_37 = ((/* implicit */_Bool) (unsigned char)17);
                var_38 |= ((/* implicit */unsigned short) var_6);
                /* LoopSeq 3 */
                for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    var_39 = ((/* implicit */long long int) min((var_39), ((+(((((/* implicit */_Bool) arr_32 [i_31] [21] [(_Bool)1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_31] [i_26] [i_29] [(_Bool)1] [i_26] [(unsigned short)3])))))))));
                    arr_107 [i_26] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) 38519042)) ? (arr_105 [i_26] [i_26] [(_Bool)1] [i_26] [i_26] [i_26]) : (arr_105 [i_26] [i_29] [5LL] [i_31] [i_31] [i_29])));
                    /* LoopSeq 1 */
                    for (unsigned int i_32 = 0; i_32 < 12; i_32 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) ((unsigned short) arr_56 [i_30 + 1] [(unsigned short)20] [14U] [(unsigned short)20]));
                        arr_110 [i_26] [i_26] [i_26] [(short)10] [i_26] |= ((/* implicit */short) arr_74 [i_26] [i_29] [(unsigned short)10] [i_29]);
                        var_41 = ((/* implicit */_Bool) max((var_41), (((_Bool) arr_21 [i_32] [i_30 + 1] [i_30 - 2]))));
                        arr_111 [i_32] [i_31] [i_26] [i_26] [i_26] = ((int) (+(var_2)));
                    }
                }
                for (unsigned short i_33 = 0; i_33 < 12; i_33 += 4) 
                {
                    var_42 ^= ((/* implicit */short) (-(arr_47 [i_26] [i_29] [i_30 + 1] [i_33])));
                    var_43 = ((/* implicit */unsigned long long int) ((short) var_3));
                    var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) 2585189802U)) | (arr_32 [i_26] [2U] [(_Bool)1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1709777488U)) ? (((/* implicit */int) arr_99 [i_26] [(short)11])) : (((/* implicit */int) var_7)))))));
                }
                for (short i_34 = 2; i_34 < 11; i_34 += 2) 
                {
                    var_45 -= ((/* implicit */unsigned int) ((signed char) (unsigned char)235));
                    var_46 = ((/* implicit */short) arr_17 [i_26] [i_29] [i_29] [i_34]);
                }
            }
            arr_117 [i_29] = ((arr_32 [i_26] [i_29] [i_29]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_104 [i_29] [i_29] [i_26] [i_26] [i_26] [i_26])) > (((/* implicit */int) (signed char)-106)))))));
        }
        for (unsigned long long int i_35 = 4; i_35 < 10; i_35 += 3) 
        {
            arr_121 [i_26] [i_26] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2585189800U))));
            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [(short)11] [(short)11] [i_35 + 1])) ? (var_1) : (0ULL)));
        }
    }
    var_48 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) / (701950036U)))), (min((min((((/* implicit */long long int) var_4)), (var_6))), (min((-72057594037927960LL), (((/* implicit */long long int) -2147483646))))))));
    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_10))))))));
    var_50 = ((/* implicit */signed char) 18446744073709551615ULL);
}
