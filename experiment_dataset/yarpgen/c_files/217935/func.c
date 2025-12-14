/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217935
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
    var_11 |= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (short)-25580)))));
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)28))))))) ? (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (short)26755)))) | (((/* implicit */int) max((var_5), (var_3)))))) : (var_9)));
        arr_3 [8] |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)167)) * (((/* implicit */int) (short)-9556))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = var_4;
            arr_9 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) var_10);
            var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-29)) : (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) arr_5 [i_0] [(short)4])) : ((((!(((/* implicit */_Bool) (short)-29)))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-29)) : (((/* implicit */int) (short)-31381))))))));
            var_14 += ((/* implicit */short) (~((-(((/* implicit */int) (unsigned short)22143))))));
            var_15 ^= ((/* implicit */short) (unsigned short)8191);
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((short) (short)0))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) max((var_2), (arr_4 [i_0 + 1] [i_2] [i_0])))))));
            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1])) >> (((((/* implicit */int) var_5)) + (25999)))));
            var_17 |= ((/* implicit */short) ((((/* implicit */int) min((arr_10 [(short)4]), (((/* implicit */unsigned short) var_6))))) >= (((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))))))));
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 7; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)43392)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((906174691), (((/* implicit */int) (short)22923))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-30780)), ((unsigned short)43387)))) : ((~(((/* implicit */int) (unsigned short)5893))))))) : (((((/* implicit */_Bool) arr_17 [(unsigned char)2] [i_3] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_17 [i_0] [i_4] [i_4 + 2])))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_22 [(short)0] [i_4 + 3] [i_4 + 3] [(short)0])) ? (((/* implicit */int) (short)-206)) : (((/* implicit */int) (short)22849)))), (((/* implicit */int) ((short) (short)-29)))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) var_7)), (var_3)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                arr_26 [(short)6] [(unsigned char)6] [i_4 - 3] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)12784))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(short)8])) ? (((/* implicit */int) (short)9175)) : (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (arr_25 [i_0] [i_3] [i_4 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-9563)))) : ((+(arr_18 [i_0 - 1] [i_0 - 1] [(short)0])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_21 = (~(arr_17 [i_0 + 2] [i_0 + 2] [(unsigned short)4]));
                    arr_30 [i_0 - 1] [(short)1] [i_0 - 1] [i_0] [(short)1] = ((/* implicit */short) ((int) (short)-23752));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_4] [i_3] [i_4 - 1] [i_7])) <= ((+(((/* implicit */int) arr_24 [i_4] [i_7]))))));
                    var_23 = ((/* implicit */long long int) ((short) arr_24 [i_0] [i_4]));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) var_6)) | ((-(((/* implicit */int) (short)9)))))))));
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_25 &= ((/* implicit */short) max((max((arr_21 [i_0] [i_3] [i_4 - 1]), (arr_21 [i_0] [i_0] [i_4 + 1]))), (((/* implicit */int) var_2))));
                    arr_35 [i_0] [i_0] [i_4 - 2] [i_8] = ((/* implicit */short) ((unsigned char) (~(arr_18 [i_0] [i_0] [i_0]))));
                    var_26 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (short)-29)))));
                    var_27 = ((/* implicit */long long int) var_3);
                }
            }
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_32 [i_9] [i_3] [i_0] [i_0 + 1] [i_0 + 1]))));
                /* LoopSeq 2 */
                for (short i_10 = 3; i_10 < 9; i_10 += 1) 
                {
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((arr_18 [(unsigned short)8] [0] [8]) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) var_10)))) + (3499))) - (58))))))));
                    var_30 += ((/* implicit */long long int) (short)32767);
                }
                for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_31 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (short)-18764)))));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [(short)7] = max((var_3), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [(unsigned char)7] [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))));
                    arr_45 [i_0] [i_11] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_11] [i_9] [i_3] [i_0])) ? (((((/* implicit */_Bool) (short)-21957)) ? (-328379948) : (-1276804026))) : (min((((/* implicit */int) var_3)), (max((var_9), (((/* implicit */int) var_10))))))));
                    arr_46 [i_0 + 2] [i_0 + 2] [i_11] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (unsigned short)63992)) ? (var_4) : (((/* implicit */int) (unsigned char)159)))) : (((((/* implicit */_Bool) arr_29 [i_0])) ? (arr_29 [i_0]) : (arr_29 [i_0])))));
                }
            }
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                var_32 = ((/* implicit */short) ((((/* implicit */int) var_5)) | (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_3)))))));
                var_33 = ((/* implicit */unsigned short) arr_31 [(unsigned short)4] [i_0] [i_3] [i_3] [i_0]);
                arr_50 [i_0] [i_0] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_15 [i_0 + 1] [(unsigned short)8] [i_0]), (arr_15 [i_0 - 1] [6LL] [i_0]))))));
                arr_51 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((long long int) (unsigned char)96)) | (((/* implicit */long long int) ((/* implicit */int) ((short) 4437535393571901333LL))))));
            }
            var_34 &= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_3] [i_3] [i_3]))))))), (((/* implicit */int) max((((/* implicit */unsigned short) max((var_8), (((/* implicit */short) var_7))))), (arr_7 [i_0 - 1] [(unsigned short)6] [i_0 + 2]))))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                arr_56 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_49 [i_0] [i_0 - 1] [i_0 + 1])) <= (((/* implicit */int) (short)32762)))) ? (((((/* implicit */_Bool) max((-790977299), (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)63992)) >= (((/* implicit */int) (short)-32744))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (var_1))))));
                var_35 = ((/* implicit */short) -344138317);
            }
            /* vectorizable */
            for (unsigned char i_15 = 3; i_15 < 8; i_15 += 1) 
            {
                var_36 = ((/* implicit */short) (((((-(3526564649896427210LL))) + (9223372036854775807LL))) << ((((+(((/* implicit */int) var_2)))) - (4670)))));
                arr_59 [(unsigned char)2] [i_0] = arr_19 [i_0] [i_15 - 1];
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((~(-1822345710))) : (((/* implicit */int) var_8))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_15 - 3] [i_15 - 3] [i_15 - 2] [i_0])) < (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0))))));
                }
                arr_63 [i_0] [i_13] [i_13] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24811))) : (-2717810893022845780LL)));
            }
            for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_39 = ((/* implicit */long long int) ((short) max((((/* implicit */int) (short)-24811)), (1276803997))));
                var_40 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_7 [i_0 + 1] [(short)4] [i_0 - 1]), (((/* implicit */unsigned short) var_7)))))));
            }
            arr_66 [i_0] [i_13] [4] &= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_0] [3LL])))), (669641481)))) || (((/* implicit */_Bool) (short)-32313))));
        }
    }
    for (unsigned char i_18 = 1; i_18 < 9; i_18 += 3) 
    {
        var_41 += ((/* implicit */short) max((((max((((/* implicit */int) (unsigned short)1543)), (arr_67 [i_18] [(unsigned short)10]))) >= (arr_67 [i_18 - 1] [i_18 + 1]))), ((!(((/* implicit */_Bool) var_4))))));
        /* LoopSeq 3 */
        for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            var_42 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_71 [(short)5] [i_19] [(short)5])) != (2044)))) : (((/* implicit */int) arr_72 [i_18 - 1]))));
            var_43 |= ((int) min((arr_70 [i_18 + 1] [i_18 + 2]), (((/* implicit */long long int) (short)-16326))));
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((16777214) << (((((((/* implicit */int) (short)-30375)) + (30398))) - (19))))) : (((((/* implicit */_Bool) arr_68 [(unsigned char)10])) ? (((/* implicit */int) arr_72 [i_19])) : (-1822345710)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_2))), (max((((/* implicit */unsigned short) (short)-26983)), (var_1)))))) : (((int) (!(((/* implicit */_Bool) 1015535710927290539LL)))))));
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_18] [i_18 + 2])) ? (arr_70 [i_18 + 1] [(short)1]) : (((/* implicit */long long int) max((var_4), (((/* implicit */int) arr_69 [i_18] [i_19])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_2)) ? (arr_67 [i_18 + 1] [i_18 - 1]) : (((/* implicit */int) (short)-27735))))));
        }
        /* vectorizable */
        for (unsigned char i_20 = 1; i_20 < 8; i_20 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_21 = 2; i_21 < 10; i_21 += 3) 
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_73 [i_18 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)132))));
                var_47 = ((/* implicit */unsigned char) ((short) var_3));
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) -1276804015)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)123))));
                var_49 += ((/* implicit */long long int) arr_76 [i_20 + 1] [10LL] [i_18 + 1]);
            }
            for (int i_22 = 2; i_22 < 9; i_22 += 4) 
            {
                var_50 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_76 [i_18 + 2] [i_22] [(short)8]))));
                var_51 = ((/* implicit */short) ((var_4) << (((((((/* implicit */int) arr_81 [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_22 + 2])) + (12539))) - (11)))));
                arr_82 [i_18] [i_20 + 1] [i_22] [i_22 + 2] = ((/* implicit */unsigned char) ((1276803985) - (1276804025)));
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    for (unsigned char i_24 = 3; i_24 < 10; i_24 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */short) ((int) arr_72 [i_18 - 1]));
                            var_53 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)123)) ? (2389456908368452461LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))))));
                            var_54 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_18] [(short)0] [i_18])) ? (((/* implicit */int) var_6)) : (var_9)))) ? (1276804014) : (((/* implicit */int) arr_84 [i_18 + 2] [i_20 + 2] [i_18 + 2] [i_23] [i_24 - 2]))));
                        }
                    } 
                } 
            }
            for (short i_25 = 0; i_25 < 11; i_25 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_26 = 2; i_26 < 9; i_26 += 4) 
                {
                    for (unsigned short i_27 = 0; i_27 < 11; i_27 += 1) 
                    {
                        {
                            arr_97 [i_18] [i_25] [i_27] = ((/* implicit */short) ((unsigned short) arr_77 [2] [i_26] [i_20 - 1]));
                            arr_98 [i_18] [i_26] [(unsigned short)6] [i_25] [i_26] [i_27] |= ((/* implicit */short) (-(((/* implicit */int) (short)32312))));
                            var_55 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                            arr_99 [i_18] [i_27] [i_25] [i_18] [i_26 + 2] [i_27] = arr_89 [i_26 + 2] [i_20 + 3] [i_20 - 1] [i_20 - 1] [i_18 + 2] [i_18 + 1];
                            arr_100 [i_18] [i_27] [i_25] [i_26 + 1] [i_27] = (short)32767;
                        }
                    } 
                } 
                var_56 = ((long long int) (unsigned char)231);
            }
            arr_101 [i_18] [i_20 + 3] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (1276804023) : ((+(((/* implicit */int) arr_76 [i_18] [(unsigned char)0] [(short)0]))))));
            /* LoopSeq 1 */
            for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) 
            {
                arr_104 [i_18] [i_18] [i_18 + 2] [i_18 + 2] = ((/* implicit */int) (short)-27741);
                var_57 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                var_58 = ((/* implicit */short) max((var_58), (arr_90 [i_18] [i_18] [i_28])));
            }
            var_59 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-8534929970656198315LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11281)))))));
        }
        for (short i_29 = 0; i_29 < 11; i_29 += 4) 
        {
            arr_109 [i_18] [i_18 - 1] [(unsigned char)10] &= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_79 [i_18 - 1] [i_18 - 1] [i_18 - 1]))))) % (((((long long int) var_6)) + (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 + 1])))))));
            arr_110 [i_18] = ((/* implicit */short) (unsigned short)12078);
            var_60 = ((long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_9)))) ? (((((/* implicit */_Bool) arr_105 [i_18] [i_18])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)28)))) : ((+(((/* implicit */int) var_8))))));
        }
        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) (~(((/* implicit */int) ((short) var_3))))))));
    }
    var_62 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((5516836269095516706LL), (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) (unsigned short)21020)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-8396))))))));
}
