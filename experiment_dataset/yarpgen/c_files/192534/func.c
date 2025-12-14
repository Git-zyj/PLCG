/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192534
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)3] [i_0]))))) | (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)63)) ? (-1650247007) : (((/* implicit */int) (unsigned short)54363))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_8)))) != (((((/* implicit */int) (short)7268)) | (((/* implicit */int) (signed char)-63)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))) : (((/* implicit */int) ((3453053863U) > (((/* implicit */unsigned int) -527112720)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (_Bool)1);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_6 [i_2] [i_1]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (-566751321) : (((/* implicit */int) arr_7 [i_1]))))) ? (max((((((/* implicit */int) (unsigned short)54351)) ^ (((/* implicit */int) (unsigned char)39)))), (arr_5 [i_1]))) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (arr_5 [i_1]))))));
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 3; i_5 < 16; i_5 += 2) 
            {
                var_22 = (-(((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), ((-(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)7273))) - (2251250057871360LL)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48447))) - (3763549106545287963ULL)))))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (((+(arr_5 [i_5 + 1]))) > (((((/* implicit */_Bool) arr_5 [i_5 + 1])) ? (arr_5 [i_5 - 3]) : (arr_5 [i_5 - 2]))))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                arr_22 [i_1] [i_1] [i_6] [i_4] = ((/* implicit */int) var_8);
                arr_23 [i_4] [i_4] [i_4] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12171)) ? (((/* implicit */int) (unsigned char)35)) : (462768057)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)54363)) ? (((/* implicit */unsigned long long int) 3453053863U)) : (var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(short)7] [i_6] [(unsigned char)3])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (arr_18 [i_4] [i_4] [i_4]))))));
                var_25 = ((/* implicit */unsigned char) (((((_Bool)1) ? ((+(((/* implicit */int) (short)21476)))) : (180765888))) + (((/* implicit */int) (unsigned char)159))));
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_12 [i_4] [i_4] [i_8 + 1] [i_8]))))) ^ ((((_Bool)1) ? (((/* implicit */long long int) 1650246995)) : (3555659203248398497LL)))));
                    arr_30 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_12)))) ? (max((3555659203248398497LL), (((/* implicit */long long int) (short)8160)))) : (((/* implicit */long long int) (~(arr_11 [i_1] [i_8 + 1]))))));
                }
                arr_31 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 179617449)) ? (179617449) : (arr_27 [i_1] [i_4] [i_4] [i_7] [i_7] [i_7])))));
            }
            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)199))))) != (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_4])) ? (11ULL) : (((/* implicit */unsigned long long int) 4167586713U))))));
        }
        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    {
                        var_27 = (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)48430)))));
                        arr_41 [i_1] [i_1] [8] [i_1] [i_9] = ((/* implicit */unsigned char) (+(var_6)));
                        arr_42 [i_9] [i_11] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_9] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_9 - 2] [i_9] [i_11]))) : (var_13)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(-1169040662))))));
        }
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) | (867859271))) != ((-(arr_38 [i_1] [i_12 + 1] [i_1] [i_1])))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)16097)) ? (3611843721143197506LL) : (7177611908168859205LL))))));
        }
        for (short i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            var_31 = ((((/* implicit */_Bool) (+(arr_21 [i_1] [i_13])))) ? (((min((2954281424219150305ULL), (((/* implicit */unsigned long long int) 1699364781)))) | (((/* implicit */unsigned long long int) arr_19 [i_1] [i_13])))) : (((/* implicit */unsigned long long int) (~(arr_20 [i_13] [i_1] [i_1] [i_1])))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (11741657062502777252ULL))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            var_33 |= ((/* implicit */_Bool) ((2954281424219150305ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))))));
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -982588512)) ? (((/* implicit */int) (short)10970)) : (((/* implicit */int) (unsigned char)233)))))));
            arr_54 [8ULL] &= ((/* implicit */unsigned char) (~(arr_13 [i_14] [i_14] [i_14] [i_15])));
            arr_55 [i_14] [(short)8] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [8ULL] [i_15] [i_14] [i_14]))));
        }
        for (short i_16 = 1; i_16 < 15; i_16 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_16 + 3] [i_16 - 1])) | (((/* implicit */int) arr_49 [i_16 + 3] [i_16 - 1])))))));
            /* LoopSeq 4 */
            for (unsigned int i_17 = 1; i_17 < 16; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 17; i_18 += 2) 
                {
                    for (short i_19 = 3; i_19 < 17; i_19 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */int) (short)-15477)) > (((/* implicit */int) arr_15 [i_18])))))));
                            var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) || (((/* implicit */_Bool) 4882556778870430929ULL))));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                            arr_65 [i_19] [i_19] [i_16] [i_18 - 1] [i_16] [i_16 + 3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13564187294839120698ULL)) ? (8355840ULL) : (2954281424219150305ULL)));
                        }
                    } 
                } 
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (+(arr_27 [16] [i_16 - 1] [i_16] [(short)4] [i_17 - 1] [i_17 + 1]))))));
            }
            for (unsigned int i_20 = 1; i_20 < 16; i_20 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_16 + 2])) ? (arr_14 [i_16 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_16 - 1] [i_20 - 1]))))))));
                /* LoopSeq 1 */
                for (signed char i_21 = 3; i_21 < 16; i_21 += 1) 
                {
                    var_41 = ((/* implicit */unsigned int) min((var_41), ((-(var_11)))));
                    var_42 = ((/* implicit */signed char) var_9);
                    var_43 = ((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15458))))) >> (((((((/* implicit */_Bool) arr_47 [i_14] [i_16 + 3])) ? (var_1) : (var_6))) - (11910045345520834632ULL))));
                }
            }
            for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) /* same iter space */
            {
                arr_73 [i_16] [i_16] = ((/* implicit */unsigned char) ((arr_63 [i_16 + 2] [i_16 + 2] [i_22 + 2] [0U] [i_22 + 1] [i_14] [i_14]) ? (((/* implicit */int) arr_63 [i_16 - 1] [3ULL] [i_22 + 1] [i_22 - 1] [i_16 - 1] [i_16] [i_22])) : (((/* implicit */int) arr_63 [i_16 - 1] [2] [i_22 + 1] [i_14] [i_14] [i_14] [i_22 + 1]))));
                arr_74 [i_14] [i_16] [i_16] [8] = ((/* implicit */unsigned long long int) (~(arr_28 [i_22])));
            }
            for (unsigned int i_23 = 1; i_23 < 16; i_23 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (-(((/* implicit */int) arr_35 [i_23 - 1] [i_25] [i_25] [i_25])))))));
                            arr_84 [i_14] [i_14] [i_23 + 2] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_67 [i_16] [i_16 + 1]))));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */_Bool) ((arr_76 [i_23] [i_23] [i_23]) | (((/* implicit */unsigned long long int) arr_51 [i_16 + 3] [i_16 + 3] [i_23]))));
                /* LoopNest 2 */
                for (short i_26 = 4; i_26 < 14; i_26 += 4) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (4398038122496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7300))))))));
                            arr_90 [i_14] [i_16] [i_23] [i_26] [1ULL] = ((/* implicit */unsigned long long int) ((arr_9 [i_14]) > (((/* implicit */long long int) 1172153688))));
                        }
                    } 
                } 
                arr_91 [(short)12] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)19)) / (-1745518382))) ^ (-77576479)));
            }
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 16; i_28 += 2) 
            {
                for (unsigned char i_29 = 3; i_29 < 16; i_29 += 2) 
                {
                    {
                        arr_97 [i_14] [i_14] [i_28] [i_28] [i_16] = ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)48427)) : (1660734293));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) 165461832)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22571))) : (13564187294839120676ULL)));
                    }
                } 
            } 
        }
        for (unsigned int i_30 = 4; i_30 < 17; i_30 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)24986)))))));
            arr_100 [13U] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_94 [i_30 - 2] [(_Bool)1] [i_30])) ? (arr_94 [i_30 - 3] [i_30 + 1] [i_30]) : (arr_94 [i_30 - 2] [i_30] [i_30])));
            var_50 |= ((/* implicit */unsigned char) (~(arr_61 [i_30 - 3] [i_30] [i_30 + 1] [i_30 - 3])));
            arr_101 [i_30] = ((/* implicit */unsigned long long int) (~(var_9)));
            var_51 = ((/* implicit */long long int) ((arr_16 [i_30 - 4] [i_30 - 3]) ? (((/* implicit */int) var_7)) : (var_3)));
        }
        for (unsigned char i_31 = 0; i_31 < 18; i_31 += 1) 
        {
            var_52 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)12549)) : (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */_Bool) 0ULL)) ? (-1399652890) : (((/* implicit */int) (short)16128))))));
            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_14] [i_14] [i_31] [i_14]))) != (var_13))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_32 = 2; i_32 < 17; i_32 += 3) 
        {
            arr_107 [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_32 - 1])) ? (2954281424219150311ULL) : (((/* implicit */unsigned long long int) arr_94 [(unsigned char)16] [i_14] [(unsigned char)16]))));
            var_54 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)17074)) > (1399652889))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_33 = 0; i_33 < 18; i_33 += 1) /* same iter space */
    {
        arr_111 [i_33] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [(_Bool)1] [i_33] [i_33] [i_33])) ? (((/* implicit */int) arr_35 [(short)12] [i_33] [i_33] [i_33])) : (((/* implicit */int) arr_35 [i_33] [i_33] [i_33] [i_33]))));
        var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2781279655498479368ULL)))) ? (((/* implicit */unsigned int) var_15)) : (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17088)))))));
    }
    var_56 &= ((/* implicit */_Bool) ((var_16) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48461)))));
}
