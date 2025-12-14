/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248423
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned short) ((signed char) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 251658240U)) & (0ULL))) < (2567225837952160936ULL)))), (((unsigned long long int) var_9))));
                /* LoopSeq 4 */
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1]);
                        var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_4 [i_0 - 1])) / (min((15879518235757390689ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_5)))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_1] [i_2] [4LL] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] [i_2])) : (-3)))) / (arr_4 [i_0 - 1])));
                        arr_11 [i_0] [(unsigned short)2] [i_0 + 1] [i_2] [(short)0] [10LL] = ((/* implicit */long long int) arr_10 [2U] [i_2]);
                    }
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_3 [i_3 + 1] [i_0 - 2]), (arr_3 [i_3 + 2] [i_0 - 1])))), (max((var_0), (((/* implicit */unsigned int) arr_0 [i_0 - 2]))))));
                        var_18 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1008))) == (-1807729190339481492LL))) && (((/* implicit */_Bool) (unsigned char)31))));
                        arr_15 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24)) == (((/* implicit */int) (unsigned short)32256))));
                        arr_16 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_2] = ((/* implicit */int) (signed char)-21);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [5ULL] [i_0] [i_0] [i_0 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) - (arr_13 [i_5 - 1] [i_0 + 1]))))))));
                    }
                    arr_17 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) / (((/* implicit */int) var_6))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0] [i_0 + 1] [i_3 + 1] [i_6] [i_6] [i_6])))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_25 [i_2] [4LL] [i_2] [0] [i_8] [i_8] = ((/* implicit */int) var_10);
                        var_21 = ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_7 + 1] [i_7 - 3])) ? (arr_21 [i_0 + 1] [i_0 - 1] [i_7 - 2] [i_7 - 1]) : (arr_21 [i_0 + 1] [i_0 + 1] [i_7 - 2] [i_7 + 1]));
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_22 = (-(((/* implicit */int) var_7)));
                        var_23 += ((/* implicit */signed char) (unsigned short)994);
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 4; i_10 < 12; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_7 - 3] [i_10 + 1] [(signed char)6]))));
                        var_25 -= ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                    }
                    var_26 *= ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_7 - 1])) ? (((/* implicit */int) (unsigned short)61009)) : (((/* implicit */int) var_1))));
                        arr_33 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                        arr_34 [i_0 - 2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4183)) ? ((+(((/* implicit */int) (unsigned short)39129)))) : (((/* implicit */int) (unsigned char)197))));
                        arr_35 [i_0 - 2] [i_2] [6] [i_7] [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_18 [i_11] [i_11] [i_0] [i_7] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_7])) && (var_6))))));
                        var_28 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_0)))));
                    }
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_11))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned short)4] [6ULL] [i_0 - 1] [i_1] [i_7 - 2] [i_7 - 2])))));
                        var_30 ^= ((unsigned short) arr_19 [i_0] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7]);
                        var_31 = ((/* implicit */int) ((unsigned int) (short)(-32767 - 1)));
                        arr_38 [i_0 - 1] [i_0] [10U] [i_2] [i_2] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_7 - 3] [8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_7] [i_12]))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) ? (arr_21 [i_0] [i_13] [i_2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(signed char)3] [(signed char)3] [6ULL] [11U] [i_7] [(signed char)3]))))))));
                        var_33 = ((/* implicit */unsigned char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_0 + 1] [i_0 + 1]))));
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) | (arr_4 [i_0 - 2])))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_38 *= ((/* implicit */unsigned long long int) arr_3 [i_2] [i_7 - 3]);
                        arr_47 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) arr_18 [6] [i_1] [i_15] [i_7] [i_7] [(signed char)2] [i_7])));
                        arr_48 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2791616478U)) ? (2567225837952160925ULL) : (3425009736679101892ULL)))) && (((/* implicit */_Bool) -1308252490))));
                    }
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_51 [i_2] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_7] [10] [i_0]))) : (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                        var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_7 + 1] [i_1] [i_16] [10ULL]))));
                        var_40 = arr_24 [i_0] [i_1] [(_Bool)0] [i_7] [i_2];
                        arr_52 [i_0] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 9LL))));
                    }
                }
                for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_41 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)38886)), (max((((((/* implicit */_Bool) 2645586496U)) ? (((/* implicit */int) (unsigned short)12457)) : (((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) (signed char)25))))));
                    var_42 ^= ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)0)));
                    arr_55 [(signed char)0] [i_1] [i_2] [(unsigned short)7] [i_1] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_46 [i_2] [i_0 - 2]))))));
                    arr_56 [i_17] [i_2] [i_2] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)117)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1712262912)) ? (-1305373082) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_18 = 2; i_18 < 10; i_18 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) arr_31 [i_0] [i_1] [i_2] [2LL] [i_17] [i_18 + 1]);
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_2] [i_17] [i_18 + 2]))));
                    }
                }
                for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 4) 
                {
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_46 = ((int) (!(((/* implicit */_Bool) var_3))));
                        arr_65 [i_0 - 2] [i_1] [i_2] [(_Bool)1] [i_20] = max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)4526)));
                    }
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 3) 
                    {
                        arr_70 [i_0] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) var_5)) << (((((((/* implicit */int) arr_58 [i_0] [i_1] [i_1] [i_19] [i_21])) + (70))) - (6))))) : (((((/* implicit */int) var_9)) >> (((arr_46 [i_2] [i_1]) - (610125542)))))))) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) var_5)) << (((((((/* implicit */int) arr_58 [i_0] [i_1] [i_1] [i_19] [i_21])) + (70))) - (6))))) : (((((/* implicit */int) var_9)) >> (((((arr_46 [i_2] [i_1]) - (610125542))) + (1846360571)))))))) && (((/* implicit */_Bool) var_11)))));
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (14ULL))))) <= (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)212)))))))));
                        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((arr_7 [1LL] [i_0 - 1]) >> (((var_10) - (710489288U))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (268435452U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_21 + 3] [i_19] [i_19] [i_0 + 1]))))))))))));
                        arr_71 [i_0] [i_0] [i_2] [i_19] [i_21 - 2] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2958472708U)), (18333912925524129096ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((4043309047U), (var_10))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 3) 
            {
                for (unsigned int i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    {
                        var_49 *= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_8)))), (((((((/* implicit */int) var_3)) + (2147483647))) << (((var_10) - (710489314U)))))))) && (((/* implicit */_Bool) var_8))));
                        arr_76 [i_0] [i_22] [i_0] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))))) * (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_5)))))));
                        var_50 -= ((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_22 + 3]);
                    }
                } 
            } 
        }
        for (signed char i_24 = 0; i_24 < 13; i_24 += 2) 
        {
            arr_79 [i_24] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_57 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((arr_57 [i_0] [i_24] [i_24] [i_0] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_0] [i_24] [(unsigned short)0] [(unsigned char)6] [i_24] [i_24])) ? (((/* implicit */int) arr_24 [i_0] [8] [8] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_36 [i_24] [i_0] [11U] [i_0]))))))), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_24] [i_24] [i_24]))));
            arr_80 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [(unsigned char)11])) | (((/* implicit */int) arr_32 [i_0 - 1] [(unsigned short)7] [(signed char)1] [i_24] [i_24] [i_24]))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (18446744073709551615ULL)))));
            var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(8388607LL))))));
            arr_81 [i_24] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_24] [i_24] [i_24])) / (1305373104)));
            arr_82 [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1571322961)), (arr_62 [i_0 - 2]))))));
        }
        for (short i_25 = 1; i_25 < 11; i_25 += 3) 
        {
            var_52 = ((/* implicit */long long int) max((min((arr_62 [i_0 - 2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) max((arr_61 [i_0] [i_25 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0]), (arr_61 [i_0 - 1] [i_0 - 1] [i_0] [i_25 - 1] [i_25] [10LL] [i_0 - 1]))))));
            arr_85 [i_0] = ((/* implicit */signed char) ((((-1) + (2147483647))) >> (((min((((/* implicit */long long int) ((((/* implicit */int) var_9)) << ((((((((-2147483647 - 1)) - (-2147483634))) + (44))) - (18)))))), (6092179304117627809LL))) - (1003501LL)))));
        }
    }
    /* vectorizable */
    for (signed char i_26 = 0; i_26 < 16; i_26 += 4) 
    {
        var_53 ^= ((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((-3164011512961567621LL) + (3164011512961567634LL))) - (13LL)))));
        arr_89 [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -555027369)) & (arr_88 [i_26] [i_26])))) ? (((arr_87 [i_26]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (arr_87 [i_26])));
        var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7442288014397052608ULL)) ? (((/* implicit */long long int) 2147483647)) : (-8502616934557475918LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))))))));
    }
    var_55 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))) < (((/* implicit */int) var_7))))) | (((/* implicit */int) var_8))));
}
