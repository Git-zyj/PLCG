/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19746
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
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)101)), (-1)));
    var_16 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [i_1] [3LL] = ((/* implicit */_Bool) arr_2 [i_1]);
            arr_5 [i_0] = ((/* implicit */unsigned char) (+(1869695841987398441LL)));
            var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0]))));
            var_18 = ((((/* implicit */_Bool) arr_2 [(short)10])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1] [8LL])));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((arr_13 [i_4] [i_4]) ? (((/* implicit */int) arr_13 [i_0] [i_4])) : (((/* implicit */int) arr_13 [i_2] [i_4]))));
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_16 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_5]))));
                var_22 = ((/* implicit */long long int) arr_3 [i_0] [i_2]);
            }
            arr_17 [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [(short)11] [i_2]))));
        }
        var_23 = ((/* implicit */signed char) arr_15 [(signed char)11] [i_0] [i_0] [7U]);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) arr_8 [i_6]))))));
        var_25 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)58624)))) != (((/* implicit */int) arr_13 [i_6] [6ULL]))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_23 [(unsigned short)0] = ((/* implicit */unsigned int) arr_3 [9U] [(unsigned char)2]);
            arr_24 [i_6] [(unsigned short)8] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_6] [(_Bool)1] [i_7] [7LL] [i_6] [(_Bool)1]))));
            var_26 = ((/* implicit */unsigned char) ((arr_14 [i_7] [(unsigned char)10] [(unsigned char)10] [i_6]) & (arr_14 [i_7] [4] [4] [i_6])));
            var_27 = ((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_7] [(short)4]);
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    for (unsigned short i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        {
                            arr_32 [i_9 - 1] [0ULL] = ((/* implicit */signed char) arr_25 [i_8] [i_10]);
                            arr_33 [i_10 - 1] [i_9] [i_9] [i_8] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)226))));
                            arr_34 [9LL] [i_7] [(short)0] [2] [i_8] [8ULL] [i_10 - 2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-70)) != (((/* implicit */int) (short)28131))));
                            var_28 = ((/* implicit */unsigned int) (-(((arr_9 [(signed char)2] [(unsigned char)3] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_7] [1LL] [i_10 + 3])))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
        {
            for (int i_12 = 3; i_12 < 8; i_12 += 3) 
            {
                {
                    var_29 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_11 + 2] [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 4]))));
                    arr_40 [i_12] [i_11] [i_11] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_12 + 2] [i_11] [i_11] [i_11 + 1])) ? (arr_14 [i_12 - 3] [i_11] [i_11] [i_11 + 2]) : (arr_14 [i_12 + 3] [i_11] [i_11] [i_11 + 2])));
                }
            } 
        } 
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((arr_31 [i_6] [i_6] [i_6] [(_Bool)1] [i_6]) || (arr_13 [i_6] [6ULL]))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */int) arr_29 [i_13] [i_13] [(short)10] [(signed char)7]);
        arr_44 [i_13] [(_Bool)1] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-86)), ((unsigned short)16272)));
        arr_45 [(unsigned char)10] &= ((max(((+(((/* implicit */int) arr_2 [i_13])))), (((/* implicit */int) arr_1 [i_13])))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_13] [4ULL] [(short)5] [i_13])) ? (arr_26 [i_13]) : (((/* implicit */int) arr_15 [i_13] [i_13] [8U] [i_13]))))) ? (((/* implicit */int) arr_1 [i_13])) : (arr_19 [i_13]))));
    }
    /* LoopSeq 3 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(max((arr_47 [i_14 + 1]), (arr_47 [i_14 + 1]))))))));
        arr_48 [i_14] = ((/* implicit */_Bool) max(((+(arr_47 [i_14 + 1]))), (arr_47 [i_14 + 1])));
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                {
                    arr_53 [i_14] [i_15] [13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_49 [i_14 + 1])))) ? (max((arr_49 [i_14 + 1]), (arr_49 [i_14 + 1]))) : (((((/* implicit */_Bool) arr_49 [i_14 + 1])) ? (arr_49 [i_14 + 1]) : (arr_49 [i_14 + 1])))));
                    arr_54 [(unsigned char)10] [15] [i_14] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_14] [i_15] [i_16] [2ULL]))));
                    var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-8)) / (((/* implicit */int) (unsigned char)189))));
                    var_34 = ((/* implicit */unsigned short) (+(arr_49 [i_14 + 1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        arr_57 [(_Bool)1] [i_17] = (+(((/* implicit */int) arr_10 [i_17] [(unsigned short)9])));
        arr_58 [i_17] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [2U] [7U] [i_17] [(_Bool)1] [i_17]))));
        arr_59 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (short)14498)) / (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            var_35 = ((/* implicit */short) arr_52 [i_19] [17LL] [i_18] [i_19]);
            var_36 *= (!(((/* implicit */_Bool) arr_51 [i_18])));
        }
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
        {
            arr_67 [i_18] [i_20] [i_20 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_62 [i_18] [i_20]))))), (arr_65 [i_20 - 1]))))));
            /* LoopSeq 1 */
            for (signed char i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                arr_71 [(unsigned char)10] [10U] = ((/* implicit */long long int) max((max((max((arr_69 [i_18] [i_18] [i_20 - 1] [i_21]), (((/* implicit */unsigned long long int) arr_68 [i_21] [i_18])))), (((/* implicit */unsigned long long int) arr_52 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_63 [i_20 - 1])))))));
                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_46 [i_20 - 1]), (arr_47 [i_20 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    for (int i_23 = 2; i_23 < 11; i_23 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_51 [i_18]))));
                            arr_77 [i_18] [i_23] [i_21] [i_22] [i_23] [5LL] = ((/* implicit */signed char) max((((/* implicit */int) arr_74 [i_22] [10LL] [i_18])), (832150837)));
                        }
                    } 
                } 
                var_39 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_21] [1] [i_20 - 1] [i_18]))) * (arr_47 [i_20 - 1])));
            }
            var_40 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (unsigned short)32760)), (5175964967948680249ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [6])) ? (arr_51 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_20 - 1]))))))));
            arr_78 [i_18] = ((/* implicit */unsigned short) arr_64 [i_20 - 1] [i_20 - 1]);
        }
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (+(arr_46 [i_24 - 1]))))));
            arr_81 [7ULL] [i_18] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -898141794)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)34428))));
        }
        arr_82 [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)8128))));
        /* LoopNest 3 */
        for (short i_25 = 1; i_25 < 10; i_25 += 3) 
        {
            for (short i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                for (int i_27 = 0; i_27 < 13; i_27 += 4) 
                {
                    {
                        arr_91 [i_26] [(signed char)11] [i_26] [i_25] [i_25] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_89 [(short)12] [i_26] [i_25 - 1] [i_27])) ? ((+((+(((/* implicit */int) arr_68 [i_18] [6LL])))))) : (((/* implicit */int) arr_65 [9LL]))));
                        arr_92 [i_26] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_76 [i_25 + 1] [i_25 + 2] [10] [(short)4]))))) ? ((+(((/* implicit */int) arr_76 [i_25 - 1] [i_25 + 2] [i_26] [i_27])))) : (((/* implicit */int) max((arr_76 [i_25 + 2] [12LL] [i_26] [i_18]), (arr_76 [i_25 - 1] [i_25 + 3] [i_18] [i_27]))))));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [3ULL] [i_26]))) / (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_68 [10U] [i_25]))))), (max((((/* implicit */unsigned int) arr_52 [i_18] [i_25] [i_26] [(unsigned char)8])), (arr_46 [i_18])))))));
                    }
                } 
            } 
        } 
    }
}
