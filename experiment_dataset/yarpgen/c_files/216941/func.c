/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216941
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)65525)))) ^ ((~(((/* implicit */int) (unsigned short)65509)))))) > (var_16)));
                    var_19 = ((/* implicit */signed char) (-(var_9)));
                    var_20 = (+(((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) (unsigned short)65525)) / (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_1 [i_2])))));
                }
                for (int i_3 = 2; i_3 < 8; i_3 += 1) 
                {
                    arr_10 [i_0] [i_3] [3] = min((((/* implicit */int) ((signed char) arr_5 [i_3]))), (((int) var_2)));
                    var_21 = (~(((((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3 - 1] [i_3])) / (var_16))));
                }
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_22 ^= ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */int) arr_4 [i_6] [i_5 + 2] [i_1]);
                                var_24 = ((/* implicit */short) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) max(((unsigned short)175), (((/* implicit */unsigned short) (short)12)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_8] [i_7 + 3] [i_1] [i_0] &= ((/* implicit */unsigned char) ((int) ((var_16) / (var_16))));
                        arr_27 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7 - 2])) ? (((/* implicit */int) (unsigned short)65360)) : (((/* implicit */int) (unsigned short)175))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_7 + 1] [3U] [i_7 + 3] [i_7] [i_7 - 2])) < (((/* implicit */int) arr_22 [i_7] [i_7 + 3] [i_7] [i_7 + 3] [i_7 + 2] [i_7 - 2]))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_25 [(signed char)5] [i_1]);
                        arr_29 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)65525))))) > (arr_21 [i_8] [i_7 + 1] [(unsigned short)3])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [1U] &= ((/* implicit */long long int) ((signed char) (+(arr_15 [i_7] [i_0] [i_7 - 2] [i_0]))));
                        var_26 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (unsigned char)243))), (0LL))));
                    }
                    arr_34 [i_1] [i_1] [(short)0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) 0))))) * (((/* implicit */int) (short)-5)));
                    var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [4ULL] [8LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_0 [i_1] [i_1]) ? (-1971954031) : (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65361)) + (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 + 1]))) : (((((/* implicit */unsigned int) var_16)) & (var_2)))))));
                }
                var_28 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_0])))) * (((/* implicit */int) min((arr_13 [i_0] [i_1] [i_0]), (arr_13 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 3; i_10 < 7; i_10 += 2) 
                {
                    var_29 -= ((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_10 - 3]));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_39 [(short)6] [i_1] [(short)6] [i_1] = ((/* implicit */short) ((0ULL) * (((/* implicit */unsigned long long int) -16LL))));
                        arr_40 [(short)4] &= ((/* implicit */unsigned long long int) (unsigned short)175);
                        arr_41 [i_0] [i_1] [(_Bool)1] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)0))))) - (((/* implicit */int) ((792775715U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))))))));
                        var_30 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_10 - 2] [i_10 - 2] [i_10 - 1]))));
                    }
                }
                /* LoopNest 3 */
                for (short i_12 = 1; i_12 < 8; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 2) 
                        {
                            {
                                arr_50 [i_0] [4LL] [i_12] [(unsigned short)8] [i_13] [i_13] [i_13] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0])), (3ULL))))))));
                                arr_51 [i_0] [i_0] [i_14] [5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((_Bool) arr_22 [i_14 - 3] [i_14 - 3] [i_14 - 3] [i_13] [i_12 + 2] [i_12])) ? ((~(23))) : (((((/* implicit */_Bool) arr_12 [i_14] [i_1] [i_1])) ? (((/* implicit */int) var_18)) : ((-(((/* implicit */int) (unsigned short)165))))))));
                                arr_52 [i_14] [i_14] = ((/* implicit */unsigned int) ((signed char) max((max((arr_21 [i_1] [i_13] [(unsigned char)7]), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_38 [i_0] [i_0] [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */int) ((short) (~(((((/* implicit */_Bool) (short)-1)) ? (-1971954031) : (((/* implicit */int) var_13)))))));
    /* LoopSeq 1 */
    for (unsigned char i_15 = 1; i_15 < 22; i_15 += 2) 
    {
        var_32 -= ((/* implicit */unsigned long long int) ((((unsigned int) arr_53 [(unsigned short)22])) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65360)) ^ (arr_53 [(unsigned short)14]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 3; i_17 < 19; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    {
                        arr_62 [i_15] [i_15] [i_15] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_54 [(signed char)21])))) << (((((/* implicit */int) arr_57 [i_15 + 1])) - (11582)))));
                        var_33 &= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_55 [i_15] [i_15 + 1] [i_15])) + (2147483647))) << (((((((/* implicit */int) arr_54 [i_18])) + (18))) - (5))))) < (((/* implicit */int) arr_59 [i_18] [i_17 - 2] [i_18]))));
                    }
                } 
            } 
            arr_63 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_15] [i_15])) ? (arr_56 [i_15] [i_15]) : (arr_56 [i_15] [i_15])));
            var_34 = ((short) var_6);
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 22; i_19 += 2) 
            {
                for (int i_20 = 4; i_20 < 22; i_20 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_15] [i_15 - 1])) ? (((/* implicit */int) arr_61 [i_15] [i_15 + 1])) : (((/* implicit */int) arr_61 [i_16] [i_15 - 1]))));
                        arr_68 [i_15] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) arr_59 [i_15] [i_15] [i_19 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))))) == (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967288U)))));
                            arr_72 [i_21] [(unsigned char)1] [i_15] [i_15 + 1] [i_15] [i_16] [i_15 + 1] = ((/* implicit */short) (+(3502191574U)));
                        }
                        var_37 = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 1208627804))) >> (((((((/* implicit */_Bool) arr_54 [i_19 - 1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_15] [i_19 + 1] [i_16] [i_15] [i_15]))))) - (3675234787U)))));
                    }
                } 
            } 
            var_39 = var_2;
        }
        for (unsigned short i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            arr_75 [2] [i_22] [i_22] |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)-16794)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_60 [i_15] [i_15] [i_15 + 1] [14U] [14U] [i_22]))) * (var_14))) >> (((((int) arr_69 [i_15 + 1] [4] [20LL] [i_15 + 1] [i_22] [i_22])) + (3591)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_23 = 0; i_23 < 23; i_23 += 2) 
            {
                arr_79 [i_15] = ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_65 [i_15]))));
                var_40 -= ((/* implicit */unsigned long long int) arr_64 [i_15 + 1] [i_15 + 1] [i_15 + 1]);
                arr_80 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((792775715U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_15 - 1] [i_15 - 1])))));
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    for (int i_25 = 2; i_25 < 21; i_25 += 2) 
                    {
                        {
                            arr_87 [i_15 - 1] [i_15] [i_23] [i_15] [i_24] &= arr_84 [i_15] [i_15] [i_23] [i_24] [i_23] [i_23];
                            var_41 -= ((/* implicit */unsigned short) (signed char)0);
                            arr_88 [i_15 - 1] [i_23] [i_23] [i_23] [i_25] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-2))))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (short)0))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_42 -= ((/* implicit */unsigned short) (((((+((+(arr_56 [(short)6] [i_26]))))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_61 [(_Bool)1] [i_26])))))) - (1)))));
            /* LoopNest 3 */
            for (short i_27 = 0; i_27 < 23; i_27 += 1) 
            {
                for (short i_28 = 0; i_28 < 23; i_28 += 3) 
                {
                    for (unsigned short i_29 = 0; i_29 < 23; i_29 += 2) 
                    {
                        {
                            arr_102 [i_15] [20LL] [i_29] [20LL] [i_29] &= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_61 [i_26] [i_15 + 1]))))));
                            arr_103 [i_28] [7] [i_15] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 0U))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) arr_86 [i_15] [i_15 + 1] [i_15 - 1] [i_29] [i_29])) <= (((/* implicit */int) (unsigned short)10)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
