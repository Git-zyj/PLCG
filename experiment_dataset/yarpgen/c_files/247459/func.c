/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247459
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))), (max((((/* implicit */long long int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) (unsigned char)147)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])) / ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [i_4]))) != (arr_7 [i_0] [i_0] [i_2] [i_3]))))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (4593572788845825124ULL)))))));
                            arr_13 [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((int) ((((/* implicit */_Bool) 22999384U)) ? (1587117921U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-94)), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -1127924204)) : (((long long int) 1574467405))))) != (((((/* implicit */_Bool) 7995230618350216800LL)) ? (((/* implicit */unsigned long long int) 3185384766U)) : (127ULL)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_0]))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)127))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_7 + 3] [i_7 + 3]))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) arr_6 [i_5] [i_6] [i_5] [i_8]);
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_5] [i_6]))) / (arr_9 [i_0] [i_5] [i_6] [i_5] [i_5] [i_5])));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_24 ^= ((/* implicit */short) (~(((arr_20 [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 - 1]) ? (max((((/* implicit */unsigned long long int) (unsigned short)7071)), (arr_11 [i_9] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1098834901080171025ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_20 [i_9] [i_7 + 3] [i_6] [i_5]))))) && (((/* implicit */_Bool) max((2685987002313476676ULL), (((/* implicit */unsigned long long int) 1511185164U)))))))) >> (((max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27949)) << (((((/* implicit */int) arr_14 [i_6])) - (38522)))))))) - (4294967292U)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)3741)))) ? (((/* implicit */int) arr_21 [i_7 + 2] [i_7 + 2] [i_7 + 3] [i_7 + 2])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_6] [i_7] [i_7] [i_10]))));
                            var_27 = ((/* implicit */short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 + 2]) >= (arr_25 [i_7 + 3] [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 + 2]))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            arr_32 [i_0] [i_0] [i_6] [i_7] [i_11] = ((/* implicit */unsigned char) arr_27 [i_0] [i_7] [i_6] [i_6] [i_6] [i_0] [i_5]);
                            var_29 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_7 - 1])), (((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (((/* implicit */int) arr_3 [i_7 - 1])) : (((/* implicit */int) arr_3 [i_7 - 1]))))));
                        }
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) ((arr_26 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0])), (arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1187122724))))))) != ((-(((/* implicit */int) arr_1 [i_0])))))))));
        arr_33 [i_0] = ((unsigned long long int) ((arr_21 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 3; i_12 < 8; i_12 += 3) 
    {
        var_31 = arr_4 [i_12] [i_12 - 3] [i_12 - 3];
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 8; i_13 += 3) 
        {
            for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
            {
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_12 + 2] [i_12] [i_12 + 2] [i_13] [i_14] [i_14 - 2] [i_14])))))));
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_13 - 1] [i_13 + 2])) ? (arr_35 [i_13 + 2] [i_14]) : (arr_35 [i_13 - 1] [i_13 - 1])))), (((long long int) arr_19 [i_12 - 1] [i_13 - 1] [i_13 + 2] [i_13 + 2] [i_14 - 2] [i_14 - 2]))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((~(var_0))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)31230))))) : (((((/* implicit */_Bool) (unsigned char)185)) ? (var_0) : (((/* implicit */unsigned int) -687974080))))))));
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (short i_18 = 1; i_18 < 9; i_18 += 4) 
                    {
                        {
                            arr_53 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-20993)) && (((/* implicit */_Bool) 2147483647)))), (((((/* implicit */_Bool) max((-7348574536761631018LL), (((/* implicit */long long int) (unsigned short)24544))))) && (((/* implicit */_Bool) min((-772149779), (((/* implicit */int) (unsigned char)209)))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_19 = 2; i_19 < 11; i_19 += 3) 
                            {
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)-21)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_18 + 2] [i_16] [i_16] [i_19 - 1])))))) : ((-(18446744073709551615ULL)))));
                                var_36 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (min((arr_55 [i_17] [i_17] [i_18 + 1]), (((/* implicit */int) (short)-1805)))) : (((int) arr_55 [i_19 - 1] [i_19 - 1] [i_19 + 1]))));
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (arr_31 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_15] [i_16] [i_15] [i_15]))))))));
                            }
                            for (unsigned short i_20 = 3; i_20 < 10; i_20 += 3) 
                            {
                                var_38 = ((/* implicit */long long int) arr_20 [i_16] [i_16] [i_16] [i_20]);
                                arr_58 [i_15] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_47 [i_15] [i_16] [i_15] [i_15])) ? (1109582530U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_16] [i_16]))))), (((/* implicit */unsigned int) arr_17 [i_18 + 3] [i_20 + 1] [i_20 + 1] [i_20 - 2]))))) ? (2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (short)8536)) : (((/* implicit */int) (signed char)-104))))))))));
                                arr_59 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(arr_42 [i_20 - 3] [i_18])))) ? (((arr_30 [i_15] [i_15] [i_15] [i_15] [i_15]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_18]))))) : (((/* implicit */unsigned int) arr_4 [i_18 + 1] [i_18 + 1] [i_18 + 1])))), (((/* implicit */unsigned int) arr_19 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                            }
                            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                            {
                                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_17] [i_18 - 1] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_15] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])))))) : (arr_60 [i_15] [i_16] [i_17] [i_15] [i_18 + 1] [i_16])));
                                var_40 *= ((((/* implicit */_Bool) max((arr_17 [i_17] [i_18 - 1] [i_18 + 2] [i_21]), (arr_29 [i_17] [i_18 + 3] [i_18 + 3])))) ? (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_52 [i_17] [i_17] [i_17] [i_16]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_15] [i_15])) == (((/* implicit */int) (_Bool)0))))), (max((4763923487918669515ULL), (((/* implicit */unsigned long long int) arr_0 [i_17] [i_17])))))));
                            }
                            var_41 -= (~(((/* implicit */int) ((arr_46 [i_15] [i_15] [i_17] [i_15]) != (arr_46 [i_17] [i_16] [i_15] [i_15])))));
                            var_42 = ((/* implicit */int) min((var_42), (((((((/* implicit */_Bool) arr_9 [i_15] [i_15] [i_15] [i_18] [i_18] [i_15])) ? (arr_55 [i_15] [i_15] [i_15]) : (((/* implicit */int) (short)-3741)))) << (((arr_52 [i_18 + 1] [i_18 + 3] [i_18 + 3] [i_18 + 1]) - (8402917305307280565ULL)))))));
                            var_43 ^= ((/* implicit */int) arr_22 [i_15] [i_15] [i_15] [i_15]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 3) 
                {
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_67 [i_22] [i_22 - 2] [i_22] [i_22] = ((/* implicit */int) max((((arr_10 [i_16] [i_16] [i_22 - 1] [i_16] [i_16]) / (arr_10 [i_23] [i_23] [i_22 - 1] [i_22] [i_22]))), (((/* implicit */long long int) (+((+(arr_24 [i_15] [i_15] [i_15] [i_15]))))))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_63 [i_15])) ? (((arr_20 [i_22] [i_22 - 2] [i_22 - 2] [i_22 - 2]) ? (arr_30 [i_22] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_23]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_23] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_19 [i_23] [i_16] [i_22] [i_16] [i_15] [i_15])) : (arr_17 [i_15] [i_16] [i_16] [i_15])))))) : (((/* implicit */unsigned int) (-(min((arr_24 [i_15] [i_16] [i_22] [i_22]), (((/* implicit */int) arr_19 [i_15] [i_15] [i_16] [i_16] [i_15] [i_16])))))))));
                        }
                    } 
                } 
                arr_68 [i_16] [i_16] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1338299675U)) ? (max((((/* implicit */unsigned long long int) (short)23927)), (1416961802449010342ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)(-32767 - 1))), (2023533141245898812LL))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_16] [i_16] [i_16])) && (arr_50 [i_15] [i_15])))), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (~(((arr_10 [i_15] [i_15] [i_15] [i_15] [i_15]) >> (((/* implicit */int) arr_5 [i_15] [i_16] [i_15])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_24 = 2; i_24 < 15; i_24 += 2) 
    {
        for (int i_25 = 4; i_25 < 13; i_25 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                arr_81 [i_26 - 1] = max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)30)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2649213600246215299ULL))))) : (((((/* implicit */_Bool) arr_76 [i_24] [i_24] [i_27])) ? (((/* implicit */int) arr_19 [i_24 - 2] [i_24 - 2] [i_24 - 2] [i_24 - 2] [i_24 - 2] [i_25])) : (((/* implicit */int) (signed char)126))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26177)) ? (arr_69 [i_26]) : (((/* implicit */long long int) 805003171U))))) ? (arr_30 [i_26 - 1] [i_24 - 2] [i_25 + 4] [i_25 - 2] [i_24 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_28] [i_28])) && (((/* implicit */_Bool) arr_23 [i_24] [i_24] [i_24] [i_24] [i_24] [i_28])))))))));
                                arr_82 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_24] [i_25 + 3] [i_26] [i_27] [i_27])) && (((/* implicit */_Bool) arr_7 [i_24 - 1] [i_24 - 1] [i_26 - 1] [i_24 - 1]))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_24] [i_24] [i_27]) == (((/* implicit */int) arr_26 [i_24] [i_25] [i_28])))))) > (((((/* implicit */_Bool) 1424323483)) ? (3979718494U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))))))))));
                            }
                        } 
                    } 
                } 
                arr_83 [i_24] [i_24] [i_24] = ((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_6 [i_25] [i_25] [i_25] [i_25]))))))) ^ (((((/* implicit */_Bool) ((unsigned int) arr_29 [i_24] [i_24] [i_24]))) ? (max((arr_74 [i_24] [i_25 + 3] [i_24]), (((/* implicit */long long int) arr_15 [i_24 + 2] [i_24 + 2])))) : (((((/* implicit */_Bool) 6293644076008753905LL)) ? (arr_8 [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_24] [i_24] [i_24] [i_24]))))))));
                var_45 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2853598231219308978LL)) ? (((/* implicit */int) arr_12 [i_24] [i_25 - 2] [i_25] [i_25] [i_24])) : (((/* implicit */int) (_Bool)0)))), ((+(-1050347638)))))) ? (((unsigned long long int) arr_4 [i_24 - 2] [i_25 - 2] [i_25 - 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48207))) : ((-9223372036854775807LL - 1LL))))) ? (min((arr_11 [i_24] [i_24] [i_25] [i_25] [i_25 + 3] [i_25] [i_25]), (((/* implicit */unsigned long long int) arr_7 [i_24] [i_24 - 2] [i_24 - 2] [i_24 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 113167714651878864LL)) ? (((/* implicit */int) arr_71 [i_24])) : (arr_17 [i_24] [i_25] [i_24 + 2] [i_25])))))));
            }
        } 
    } 
}
