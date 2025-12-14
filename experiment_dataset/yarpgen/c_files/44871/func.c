/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44871
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_14) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) ((var_1) ? (((/* implicit */int) (short)26513)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) min(((_Bool)0), (arr_0 [i_0 - 1])))), (((var_1) ? (((/* implicit */int) (short)26513)) : (((/* implicit */int) (short)26517))))))), (((arr_0 [i_0]) ? (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26514)) / (((/* implicit */int) var_12)))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (_Bool)0);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_1])))) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) min((var_8), (((/* implicit */signed char) var_17))))))), (((/* implicit */int) (short)-17048))));
        arr_8 [i_1] = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_6 [i_1])))))));
        arr_9 [i_1 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 1])) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) >= (((/* implicit */int) (unsigned short)65523)))))))) ? (16096431732323635022ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (0) : (((/* implicit */int) (short)-9)))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((((var_14) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_13)))) | (((/* implicit */int) min((arr_11 [i_2]), (arr_11 [i_2])))));
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) (short)-26514);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((((/* implicit */_Bool) (unsigned short)56988)) ? ((+(((/* implicit */int) (short)26513)))) : (((/* implicit */int) arr_4 [i_6])));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */int) arr_21 [i_3] [i_3])) : (((/* implicit */int) arr_21 [i_3] [i_4 + 2]))));
                }
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((short) (_Bool)0));
                        arr_33 [i_3] [i_3] [i_4] [2] [i_8] = ((/* implicit */short) (((~(((/* implicit */int) arr_10 [i_4])))) | (((/* implicit */int) arr_30 [i_3] [i_4 - 1] [i_5] [i_7] [i_8] [i_8] [i_8]))));
                        arr_34 [i_3] [i_4] [i_3] [i_7] [i_4] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (arr_25 [i_5] [i_4] [i_4] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7]))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_5 - 2] [3ULL])) << (((((/* implicit */int) arr_28 [i_4] [i_4] [i_4 + 3] [i_5 - 1] [i_5])) - (10252)))));
                        var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_5 - 2] [i_7] [i_5 + 1] [i_5 - 2])) ? (((((/* implicit */_Bool) arr_19 [i_3])) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [i_7]))))));
                    }
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) arr_23 [i_7] [i_5 - 1] [i_4] [i_7])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_7] [i_4 + 1] [i_4] [i_4])))))))));
                }
                for (short i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    var_28 = ((/* implicit */signed char) (short)26517);
                    arr_37 [3ULL] [(_Bool)1] [i_4 + 3] [i_4] [i_9 + 1] = ((/* implicit */short) ((((_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) (unsigned short)31))));
                    var_29 = ((/* implicit */long long int) var_5);
                }
                arr_38 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_4 + 2]))) - (7565910137789645786LL)))) ? (((/* implicit */int) (((_Bool)0) || ((_Bool)1)))) : (((/* implicit */int) var_3))));
                var_30 = ((/* implicit */unsigned short) ((((_Bool) -7565910137789645805LL)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_5 [i_3]))))));
            }
            for (short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_35 [i_10]))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_19 [i_3]))));
                arr_41 [i_4] [i_4] [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 2]))));
                var_33 = arr_25 [i_3] [i_4] [(short)13] [i_3];
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_34 ^= ((/* implicit */int) arr_39 [i_4] [i_4 + 1] [i_4] [i_11 + 1]);
                arr_45 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_3)) & ((+(((/* implicit */int) var_4))))));
                var_35 = (+(((/* implicit */int) arr_17 [i_4 + 3])));
                var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_43 [i_11 + 1] [i_11] [i_4 + 3] [i_3])) : (((/* implicit */int) arr_12 [i_11]))))));
            }
            var_37 = ((/* implicit */_Bool) ((((unsigned long long int) arr_6 [(short)4])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_21 [i_3] [i_3]))))));
            var_38 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) var_1)))));
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                var_39 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(_Bool)1] [i_3] [i_4 + 3] [i_3]))) & (arr_47 [i_4 + 3] [(signed char)11])));
                /* LoopSeq 4 */
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                    var_41 = (short)32613;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_56 [i_4] [(short)8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_4] [i_4 + 3] [i_4] [i_4 + 1])) + (((/* implicit */int) arr_40 [i_4] [i_4 + 3] [i_4] [i_4 + 1]))));
                        arr_57 [i_3] [(short)1] [i_4] = ((/* implicit */_Bool) arr_28 [14LL] [i_4] [i_12] [14LL] [i_12]);
                        var_42 = ((/* implicit */short) ((_Bool) (_Bool)1));
                    }
                }
                for (signed char i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */short) arr_14 [i_4]);
                        arr_62 [(signed char)4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_10)))) ^ (((((/* implicit */_Bool) arr_58 [i_3] [i_4] [i_12] [i_15] [i_3] [(unsigned short)3])) ? (((/* implicit */int) arr_30 [i_3] [7ULL] [i_3] [(short)7] [i_3] [i_3] [4ULL])) : (-2141885668)))));
                        arr_63 [i_3] [i_3] [i_4] [13ULL] [i_3] = (((_Bool)0) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_53 [i_3] [i_4] [i_4] [5ULL] [i_3] [i_4] [i_4])))) : (((((/* implicit */_Bool) (short)-7475)) ? (((/* implicit */int) arr_21 [i_3] [i_4])) : (arr_32 [i_4] [i_12] [i_4] [i_16 - 1]))));
                        arr_64 [i_3] [i_3] [i_4] [i_3] [(short)9] [(short)10] = ((/* implicit */short) 15952267029231593139ULL);
                        var_44 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_12] [i_12] [i_16 - 1] [i_12] [i_15] [i_16]))));
                    }
                    var_45 = ((arr_42 [i_4] [(_Bool)0] [i_4]) && (((/* implicit */_Bool) arr_61 [i_3] [i_4] [i_15])));
                }
                for (signed char i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                {
                    arr_68 [i_3] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_4 + 3] [i_3]))));
                    arr_69 [i_4] = ((/* implicit */short) (!(var_1)));
                    arr_70 [i_4] [i_4 + 1] [i_12] [i_4 + 1] [(short)9] [i_4] = ((/* implicit */_Bool) var_16);
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_74 [i_3] [(_Bool)1] [i_12] [i_4] [i_18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_24 [i_17])))) ? (arr_47 [i_3] [i_4 + 3]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_4] [i_12] [i_12] [11ULL] [(_Bool)1] [i_4] [i_12])))))));
                        arr_75 [i_3] [i_4] = ((/* implicit */_Bool) arr_18 [i_4 + 1] [(short)11] [i_4]);
                        arr_76 [i_3] [i_4] [i_4] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)577)) > (((/* implicit */int) arr_17 [i_18 - 1]))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) arr_16 [i_17]);
                        var_47 = ((/* implicit */long long int) (~(((/* implicit */int) arr_53 [i_4] [i_19] [i_19 - 1] [i_4 + 2] [13ULL] [i_4] [i_4]))));
                        arr_80 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [(_Bool)1] [i_19] [i_19] [i_19 - 1] [i_19] [i_19] [i_4])) ? (((/* implicit */int) arr_24 [i_4 - 1])) : (((/* implicit */int) arr_53 [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19] [i_4]))));
                        var_48 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 7565910137789645812LL))));
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (-(((/* implicit */int) arr_26 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [12])))))));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_31 [i_3] [i_3] [i_4] [i_12] [(signed char)3] [i_20]))))));
                        arr_83 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_78 [8ULL] [i_12] [i_17] [i_20 - 1] [i_4])) | (((/* implicit */int) arr_77 [3ULL] [i_17] [i_17] [i_20] [i_20 - 1]))));
                        arr_84 [i_3] [i_4] [i_12] [(short)13] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-1))));
                    }
                }
                for (signed char i_21 = 0; i_21 < 15; i_21 += 4) /* same iter space */
                {
                    var_51 = ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_4 - 1] [i_4 - 1] [i_4 - 1])) % (((/* implicit */int) (unsigned short)64958))));
                    arr_87 [i_3] [i_4] [i_12] [i_4] = ((((/* implicit */int) arr_15 [i_4 + 3] [i_4])) < (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1])));
                }
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_4] [i_12] [i_4] [i_4 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_3] [i_3])))))));
            }
        }
    }
}
