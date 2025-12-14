/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2926
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= arr_1 [i_0];
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_16 += ((/* implicit */long long int) ((int) (-(max((4294967295U), (((/* implicit */unsigned int) arr_1 [i_1])))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) (~(max((4294967295U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))));
                var_18 += ((/* implicit */int) 18U);
            }
        }
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) var_6);
            arr_11 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((_Bool) var_13))) * (((/* implicit */int) (unsigned short)0))))));
            var_20 = ((/* implicit */_Bool) arr_1 [i_3 + 1]);
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (2U)))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(arr_3 [i_4 + 4] [i_3 + 1]))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_1 [i_4]);
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) ((min((541947851U), (541947836U))) <= (max((((/* implicit */unsigned int) ((signed char) arr_7 [i_0] [i_0] [(signed char)2]))), (max((3753019428U), (((/* implicit */unsigned int) arr_7 [i_4 + 2] [i_0] [(signed char)6]))))))));
                        arr_22 [i_0] [i_0] [i_4 - 1] [1U] [i_4] = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483626)) ? (2065005949U) : (((/* implicit */unsigned int) -471962237)))) >> (((((((/* implicit */_Bool) var_9)) ? (arr_21 [i_0] [(unsigned short)6] [i_4] [i_6] [i_7] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (421423384U)))))), (((unsigned long long int) 0U)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_13 [i_6] [i_6 - 1] [i_6] [i_6 - 1]))))), (var_3)));
                        var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) max(((unsigned short)8865), (((/* implicit */unsigned short) var_1))))), (max((max((541947836U), (((/* implicit */unsigned int) var_5)))), ((~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_27 = ((/* implicit */unsigned int) arr_9 [i_4]);
                        var_28 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */signed char) (~(arr_8 [i_4] [i_6 - 1] [i_4] [i_3 - 1])));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_14 [i_4] [i_6] [i_3] [i_4]))))));
                        var_31 = ((/* implicit */unsigned short) (_Bool)0);
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8ULL)))))));
                        var_33 = ((/* implicit */long long int) (-(((arr_3 [i_6] [i_9]) << (((491090717U) - (491090717U)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_4] [i_4 + 2] [i_3 - 1] [i_6 - 1])) ? (arr_23 [i_10] [i_4] [i_4 + 1] [i_3 - 1] [i_6 - 1]) : (arr_23 [(unsigned short)11] [i_4] [i_4 + 3] [i_3 + 1] [i_6 - 1])));
                        var_35 = ((/* implicit */unsigned int) arr_9 [i_0]);
                        var_36 = ((/* implicit */unsigned int) var_8);
                        var_37 = ((/* implicit */unsigned char) arr_27 [i_10] [i_10 + 2] [i_4] [i_4] [i_4] [i_3 + 1]);
                    }
                }
                arr_29 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((1573496865U) >> (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_3]))));
                            var_39 = max(((~((+(3753019444U))))), (((/* implicit */unsigned int) min((arr_28 [i_0] [i_12] [i_4 + 2] [i_4 - 1] [i_12] [i_0] [i_12]), (arr_28 [i_12] [i_3] [i_4] [i_4 + 2] [i_3] [i_0] [i_3])))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) min((((((/* implicit */long long int) var_10)) & (-6331210194344034812LL))), (((/* implicit */long long int) arr_34 [i_3 - 1] [i_3] [i_11 - 2] [i_11] [i_11] [i_11 + 1])))))));
                        }
                    } 
                } 
            }
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_41 = ((/* implicit */unsigned int) var_7);
                var_42 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_9 [i_3 - 1])))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_14))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (4236717077U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [i_13])))))))))));
                var_43 = ((unsigned int) max((var_7), (arr_36 [(signed char)4] [i_3 - 1] [i_3 + 1] [i_13])));
            }
            var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))) + (arr_14 [i_0] [i_0] [i_0] [(signed char)10])))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 4; i_14 < 11; i_14 += 2) 
        {
            arr_40 [i_0] = ((((/* implicit */int) (unsigned short)61485)) & (((/* implicit */int) arr_36 [i_14] [(unsigned short)3] [i_14 + 1] [i_14 - 4])));
            var_45 = (-((~(((/* implicit */int) (unsigned char)13)))));
        }
        var_46 = ((/* implicit */signed char) ((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [(_Bool)1]))) != (arr_8 [5U] [5U] [i_0] [5U])));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 2; i_15 < 8; i_15 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) 2U))), (max((((/* implicit */unsigned int) (unsigned char)11)), (2063420435U)))));
            var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [(unsigned short)7] [i_15] [6U]))));
            var_49 = ((/* implicit */unsigned short) 14U);
            var_50 = max(((-(((/* implicit */int) arr_9 [(unsigned char)11])))), ((+(((/* implicit */int) (unsigned short)2587)))));
        }
        for (unsigned int i_16 = 2; i_16 < 8; i_16 += 4) /* same iter space */
        {
            var_51 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3636796052U))))));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    var_52 = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_27 [6U] [i_18] [i_0] [i_0] [i_0] [i_0])), (((int) arr_6 [4U] [i_16])))), (max(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned char)229)) ^ (((/* implicit */int) (unsigned char)4))))))));
                    var_53 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((507829053) > (((/* implicit */int) arr_9 [i_17]))))), ((+(((/* implicit */int) arr_10 [i_16] [0U] [i_18]))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_35 [i_18] [i_17] [i_16] [i_0])) || (((/* implicit */_Bool) 2934999448U)))))) : (min((arr_26 [i_18] [i_17] [i_16] [6ULL]), ((~(((/* implicit */int) var_8))))))));
                }
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_54 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((unsigned short) arr_27 [i_0] [4U] [i_16] [4LL] [10ULL] [i_19]))), (max((arr_19 [i_0] [6U]), (arr_14 [i_16] [i_17] [i_16] [i_16]))))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 3845969409U)) || (((/* implicit */_Bool) arr_39 [i_19] [i_16 + 2] [i_16 + 2])))))))));
                    var_55 = ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_0] [i_16] [i_17] [i_17] [i_19]))))) >= ((-(((/* implicit */int) ((arr_52 [(unsigned char)3] [i_16 + 3] [(unsigned char)3] [i_16] [i_16] [9ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                }
                var_56 = ((/* implicit */unsigned int) var_4);
                var_57 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_16 + 2] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((arr_49 [i_16] [i_16] [0ULL] [i_16] [i_16 - 1]) ? (((/* implicit */int) arr_44 [i_0] [i_16])) : (((/* implicit */int) var_4))))) : ((~(arr_52 [i_0] [i_0] [i_0] [i_16] [i_17] [i_0])))))), (((unsigned long long int) (~(757983314U))))));
                /* LoopSeq 3 */
                for (long long int i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
                {
                    var_58 = ((/* implicit */_Bool) (~((-(arr_52 [i_16 + 4] [i_16] [i_16 + 3] [i_16 + 4] [i_16] [i_16])))));
                    var_59 = ((/* implicit */unsigned short) min(((~(((72870955U) << (((var_2) - (8605567952416249768ULL))))))), (((/* implicit */unsigned int) (_Bool)0))));
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_17 [i_20] [i_17] [(signed char)11] [i_16] [(signed char)11] [i_0])) * (min((0LL), (((/* implicit */long long int) arr_45 [i_16 + 2]))))));
                    var_61 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_43 [i_16 - 2])))));
                }
                for (long long int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
                {
                    var_62 = (!(((/* implicit */_Bool) -1LL)));
                    var_63 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)65535))));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) -1))), (((((/* implicit */_Bool) 33554400U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_45 [i_0]), (((/* implicit */unsigned short) arr_32 [i_0])))))) : (min((3151907340465523846ULL), (((/* implicit */unsigned long long int) (unsigned char)249))))))));
                        var_65 = ((/* implicit */unsigned char) arr_15 [i_22] [i_21]);
                        arr_64 [i_22] [i_21] [i_17] [i_16] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((_Bool) 255413728U)))))));
                    }
                    for (int i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        var_66 = ((/* implicit */_Bool) ((int) (+(max((1200720623U), (4178550432U))))));
                        var_67 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_39 [6LL] [6LL] [i_17])) ? (arr_41 [i_21] [i_23] [i_0]) : (((/* implicit */unsigned long long int) ((int) var_0)))))));
                        var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) arr_43 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_23]))) : (((((/* implicit */_Bool) arr_67 [10LL] [11ULL] [10LL] [i_21] [1ULL])) ? (((/* implicit */unsigned long long int) arr_28 [i_0] [i_21] [11ULL] [i_21] [i_0] [i_21] [i_0])) : (arr_48 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_23] [i_23])) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) arr_20 [i_21])))))))));
                        arr_68 [2U] [7U] [2U] [i_17] [i_17] [(_Bool)1] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_0] [i_0] [8ULL] [i_0])) ? (arr_23 [i_16] [i_16] [i_17] [i_16] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5056516242196128546LL))))));
                        var_69 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                }
                /* vectorizable */
                for (unsigned int i_24 = 2; i_24 < 9; i_24 += 1) 
                {
                    var_70 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)2560)) ? (1017026420U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2559431705232030583ULL)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_16 - 1] [i_0])))))));
                    var_71 = ((/* implicit */unsigned int) arr_27 [2LL] [i_16 + 2] [i_24] [i_24 + 3] [i_24 + 3] [i_24 - 2]);
                    var_72 = ((/* implicit */signed char) (~(17320388833775701596ULL)));
                    var_73 = ((/* implicit */signed char) arr_14 [i_24] [i_16] [i_17] [i_24]);
                    /* LoopSeq 1 */
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_74 = ((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1)));
                        var_75 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)))) ? ((-(arr_57 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_26 = 3; i_26 < 10; i_26 += 4) 
                {
                    var_76 = ((unsigned short) var_4);
                    arr_77 [10ULL] [i_16] [3LL] [i_26] [i_26 + 2] [i_26 + 1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65535));
                    var_77 |= ((/* implicit */unsigned short) (+(var_2)));
                }
            }
        }
        var_78 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [10U] [9U])))))))) < (max((min((838062692463466480LL), (((/* implicit */long long int) (unsigned short)9494)))), (((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_79 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    var_80 = ((/* implicit */_Bool) ((((((var_5) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_15))))))) ? (((/* implicit */unsigned long long int) min((1797311281), (((/* implicit */int) (unsigned char)235))))) : (max((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) 4235814275U)))), (((/* implicit */unsigned long long int) -6687401944049997021LL))))));
}
