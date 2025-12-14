/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240858
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_1))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) var_10)) >= (var_4))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0] [i_1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min(((-(4141168657U))), (((/* implicit */unsigned int) min((arr_8 [i_0] [i_2]), (arr_7 [i_0] [8U])))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                arr_13 [i_0] [i_2] [5] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) <= (((((/* implicit */int) arr_3 [i_3])) >> (((arr_12 [i_0] [i_0] [i_3]) + (1577589598)))))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) <= (((((/* implicit */int) arr_3 [i_3])) >> (((((arr_12 [i_0] [i_0] [i_3]) - (1577589598))) + (842605549))))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_15 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [10])), (arr_1 [i_2] [i_4])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))));
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4217496766U) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), (var_8)));
                        arr_21 [i_0] [(signed char)4] [i_0] [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(9669072081293548555ULL)))) ? (((/* implicit */int) ((unsigned short) var_7))) : ((+(((/* implicit */int) (unsigned short)15222))))))), (((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_9)))) ? (max((var_4), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)19462)) >= (((/* implicit */int) var_1))))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_2] [i_3] [i_2] [i_4] [i_4] [i_6] &= ((/* implicit */unsigned short) arr_8 [i_0] [i_6]);
                        arr_25 [i_0] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))), (var_2));
                        arr_26 [i_2] [i_3] [i_0] = ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) (unsigned char)254)) ? (arr_18 [i_6] [i_4] [i_3] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */int) arr_0 [0ULL] [i_2])))));
                        arr_27 [(signed char)9] [i_0] [(signed char)9] [i_6] = ((/* implicit */unsigned long long int) max((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((unsigned short) var_14)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_29 [(unsigned short)7] [i_4] [i_4] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_31 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((arr_17 [3U] [i_2] [i_3] [i_4] [i_4] [i_2] [i_3]) >> (((/* implicit */int) arr_28 [i_0] [(signed char)3] [i_3] [i_4] [4])));
                        var_16 = ((/* implicit */unsigned int) ((arr_9 [(unsigned short)7] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_3] [i_4] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                        arr_37 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) % (16228345711046377995ULL)))));
                    }
                }
                arr_38 [i_0] [i_3] = ((/* implicit */unsigned char) var_0);
            }
        }
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_9] [(unsigned short)4] [i_9] [i_9])) != (var_10)))) >= (((((/* implicit */int) (unsigned char)255)) << (((var_10) + (1176136051))))))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_9 [i_0] [i_9])))));
            arr_41 [i_0] [i_0] = ((/* implicit */int) var_9);
        }
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 4; i_11 < 12; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            arr_52 [i_0] [i_10] [i_10] [i_0] [i_13] = ((/* implicit */unsigned char) var_13);
                            arr_53 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_32 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_18 *= ((/* implicit */unsigned int) ((int) (+(-178629465))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
                        {
                            var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_23 [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_11 + 1])) % (((/* implicit */int) arr_23 [i_11 - 4] [i_11 + 1] [i_11 + 1] [i_11 + 1])))));
                            arr_56 [i_14] [i_0] [i_11 + 1] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((arr_22 [i_0] [i_12] [i_11] [i_10] [i_0]), (((/* implicit */unsigned long long int) var_6)))))) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_14)))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
                        {
                            arr_60 [i_0] [i_0] [i_0] [7U] [i_12] [(unsigned short)3] [i_15] = ((/* implicit */unsigned short) ((467762438) << (((((/* implicit */int) (unsigned short)49536)) - (49536)))));
                            arr_61 [i_0] [i_0] [i_0] [i_0] [(signed char)10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0] [i_10] [i_10] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (var_0)))) ? ((+(((((/* implicit */int) var_6)) % (-1046712522))))) : (((/* implicit */int) arr_19 [i_10] [i_10] [(unsigned short)0])));
                            arr_62 [i_11] [i_12] [i_11] [i_11] [i_10] [i_0] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (arr_12 [i_11] [i_11] [i_11])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) var_1)), (((var_5) >> (((((/* implicit */int) var_9)) + (103)))))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) min((1483621050U), (((/* implicit */unsigned int) 268435455))))))));
                            arr_63 [i_0] [i_0] [i_11] [i_12] [i_15] = ((/* implicit */unsigned short) arr_3 [i_11]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            arr_66 [i_0] [(unsigned short)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((max((77470551U), (((/* implicit */unsigned int) var_8)))) ^ (((((/* implicit */_Bool) var_3)) ? (arr_32 [i_16] [(unsigned short)10] [(signed char)8] [i_11] [(unsigned short)8] [i_0]) : (((/* implicit */unsigned int) arr_50 [i_16] [i_12] [i_11 - 3] [i_10] [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53762)) ? (3183633468U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_19 [(unsigned char)4] [i_10] [(unsigned char)4])))))))));
                            arr_67 [i_0] [(signed char)6] [(unsigned short)7] [i_11] [i_11] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [5U] [i_0] [i_11 + 1] [i_11 - 3] [(unsigned char)12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_42 [i_0]) >= (((/* implicit */unsigned long long int) -78222944)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (1111333817U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) : (((11762267946062986273ULL) >> (((arr_64 [i_0]) + (1211796956)))))))));
                            arr_68 [i_11] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned short)56723), (((/* implicit */unsigned short) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_50 [i_0] [i_10] [i_11] [i_12] [i_12])) * (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) arr_17 [4] [i_11] [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 3])) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))))));
                        }
                        for (unsigned short i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            var_21 *= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)29778)))) >> (((arr_46 [i_0] [i_11] [i_0]) + (2098173648)))))));
                            arr_72 [i_0] [i_11] [5] = ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) ((unsigned int) var_14)))))) ? ((-(((/* implicit */int) (unsigned short)0)))) : (-1126794763));
                        }
                        var_22 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) var_1)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_11)));
                        arr_79 [i_0] [i_0] [i_10] [i_18] [i_0] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned char) var_9))) * (((/* implicit */int) min(((unsigned short)10331), (var_11)))))) != ((-(((/* implicit */int) arr_39 [i_10]))))));
                    }
                } 
            } 
            arr_80 [i_0] [(unsigned short)8] = ((/* implicit */signed char) min((((/* implicit */int) ((var_10) <= (arr_64 [i_0])))), ((~((~(((/* implicit */int) var_1))))))));
            arr_81 [i_0] [i_0] = arr_14 [i_0] [i_10] [i_10] [(unsigned short)6] [i_0];
        }
        var_24 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned int) var_9))));
    }
    var_25 = ((/* implicit */unsigned char) var_6);
}
