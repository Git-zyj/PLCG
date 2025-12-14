/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200668
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 4]))) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) ((signed char) arr_1 [i_0 + 2])))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [(_Bool)1] = (((~(((/* implicit */int) var_7)))) << (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (0U) : (var_6))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19))))) ? (0) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) >= (((/* implicit */int) var_17)))))))));
        var_20 = ((/* implicit */int) arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [5U] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned char)109))))) ? (((((arr_10 [i_2]) << (((((/* implicit */int) var_3)) + (16909))))) >> ((~(((/* implicit */int) (signed char)-32)))))) : (((/* implicit */unsigned int) var_9)));
            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_3)))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)31)) ? (((unsigned long long int) arr_19 [i_2 - 1] [i_4 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_23 ^= ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (-2190243720666700895LL)));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)12)) : (arr_14 [i_7])))), (((((/* implicit */_Bool) (signed char)-32)) ? (var_18) : (((/* implicit */unsigned long long int) var_15)))))) | (((/* implicit */unsigned long long int) ((max((arr_19 [i_7] [i_7]), (((/* implicit */int) arr_0 [i_2])))) << (((((((/* implicit */int) (short)-7218)) + (7224))) - (5)))))))))));
                            var_25 -= ((/* implicit */int) (-(var_13)));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */short) min((((((/* implicit */unsigned int) arr_12 [(short)1] [i_2 - 1] [i_4 + 1])) - (arr_18 [i_2] [i_4] [i_4]))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(signed char)4] [(signed char)4])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_26 [i_4] [i_4 + 1] [i_2 - 1] [i_2] [8]))))) + (arr_18 [i_2 + 1] [i_2 + 1] [i_4])))));
            var_27 |= ((/* implicit */long long int) arr_1 [i_2]);
            var_28 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) arr_26 [i_2] [2U] [i_8] [2U] [(short)9])) <= (var_1)))))) - (((/* implicit */int) ((18446744073709551601ULL) == (((/* implicit */unsigned long long int) arr_12 [i_8 + 1] [i_8] [i_2])))))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_30 ^= ((/* implicit */signed char) arr_28 [i_2 - 1] [(signed char)1]);
                            arr_38 [i_2] [i_8] [i_8] [i_10] [i_11] [i_8] [i_8] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_7 [i_2 + 1])))), (((((/* implicit */int) arr_7 [i_2 - 1])) - (((/* implicit */int) arr_11 [i_2 - 2]))))));
                            var_31 = ((/* implicit */signed char) -35535122126996833LL);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (int i_14 = 3; i_14 < 8; i_14 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 4294967295U))));
                            arr_48 [i_8] [i_8] [i_8] [i_13] [(short)7] [i_8] = ((/* implicit */signed char) (~(((unsigned int) ((unsigned long long int) (unsigned char)165)))));
                            arr_49 [i_8] [i_8] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-74)) + (2147483647))) >> (((/* implicit */int) ((arr_41 [i_8] [i_2 - 2] [9] [9]) == (((/* implicit */int) arr_0 [i_8])))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
        {
            arr_52 [i_2] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_47 [i_2] [i_2] [i_15] [(signed char)6] [i_15])) >= (((/* implicit */int) arr_36 [i_15] [i_15 + 1] [i_2] [i_2]))))))))));
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 9; i_16 += 3) 
            {
                for (short i_17 = 2; i_17 < 9; i_17 += 2) 
                {
                    {
                        var_33 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)55390))));
                        /* LoopSeq 2 */
                        for (int i_18 = 1; i_18 < 10; i_18 += 4) /* same iter space */
                        {
                            arr_59 [i_2] [(unsigned char)7] [(unsigned char)7] [i_16] [i_18] [i_17] [i_16] = ((/* implicit */short) var_9);
                            var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)55390)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((signed char) var_15)))))) * (((/* implicit */int) ((((/* implicit */int) arr_54 [i_16] [i_18 + 2])) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)-32))))))))));
                            var_35 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_17])) ? (min((var_13), (((/* implicit */unsigned long long int) 35535122126996832LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101)))))) ? (((((/* implicit */_Bool) arr_40 [i_2] [i_15 + 1] [i_17 + 2] [i_17])) ? (arr_40 [i_17] [i_16 + 3] [i_17 - 2] [i_17 - 1]) : (arr_40 [i_17] [i_16] [i_17 + 1] [i_17]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) | (min((var_12), (((/* implicit */unsigned int) arr_22 [i_2] [(unsigned short)3] [i_2] [i_18]))))))));
                        }
                        for (int i_19 = 1; i_19 < 10; i_19 += 4) /* same iter space */
                        {
                            var_36 ^= ((/* implicit */short) ((unsigned long long int) ((signed char) min((arr_18 [i_2] [5LL] [i_17]), (((/* implicit */unsigned int) (signed char)-32))))));
                            arr_63 [(short)6] [i_16] [i_16] [i_2] = ((/* implicit */unsigned char) arr_56 [i_16] [i_15] [i_15]);
                        }
                        arr_64 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_1)))))) ? ((-(((((/* implicit */_Bool) 0U)) ? (var_1) : (arr_14 [i_17]))))) : (((/* implicit */int) arr_43 [i_2] [i_15] [i_16] [i_17 + 2] [6]))));
                        arr_65 [i_16] [i_16] = ((/* implicit */unsigned short) arr_39 [(signed char)1] [i_15] [(signed char)1] [i_16]);
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) arr_7 [i_2 - 1]))), (((((/* implicit */_Bool) arr_34 [10] [10] [10] [i_16] [i_16] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : ((+(var_2))))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                arr_68 [i_2] [i_15] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) % (5173811932284979509ULL)));
                arr_69 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 35535122126996832LL);
            }
            var_39 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) arr_0 [i_2]))))), (arr_25 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 + 1] [i_15] [i_2]))) / (((/* implicit */unsigned long long int) min((((((((/* implicit */int) (signed char)-110)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)31520)) - (31510))))), (-499138954))))));
        }
        var_40 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) arr_36 [i_2] [(unsigned short)1] [8LL] [i_2])) ? (((/* implicit */unsigned long long int) 2622943231U)) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (arr_14 [i_2])))))), (((((/* implicit */unsigned long long int) (+(var_2)))) | (max((arr_25 [i_2] [i_2] [i_2] [i_2] [3LL] [i_2] [i_2]), (((/* implicit */unsigned long long int) 3566414999U))))))));
    }
    /* vectorizable */
    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
    {
        var_41 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_72 [i_21] [i_21])) ? (((/* implicit */int) (signed char)-32)) : (var_4))));
        arr_73 [i_21] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)7264)) : (((/* implicit */int) (unsigned short)2504)))));
        /* LoopNest 3 */
        for (short i_22 = 3; i_22 < 15; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 1; i_23 < 16; i_23 += 1) 
            {
                for (unsigned short i_24 = 2; i_24 < 15; i_24 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_88 [i_22] [i_22] = ((/* implicit */short) var_19);
                            arr_89 [i_21] [i_22] [i_22] [16LL] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_22 - 2] [i_24 - 1] [i_25])) ? (((/* implicit */int) arr_72 [i_21] [i_22 + 2])) : (((/* implicit */int) arr_74 [i_21] [i_21] [i_23 + 2]))));
                            arr_90 [i_21] [i_22] [i_22] [(signed char)3] [i_25] = ((/* implicit */long long int) ((int) (signed char)-28));
                        }
                        arr_91 [i_21] [i_22] [i_23 + 1] [i_22] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15))));
                        var_42 &= ((/* implicit */signed char) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_87 [i_21] [i_24] [i_22] [(_Bool)1] [i_23 + 2] [i_24 + 3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            var_43 = ((/* implicit */signed char) arr_77 [i_23] [i_24]);
                            arr_94 [i_21] [i_22] [i_23] [i_24] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (short)-27945))) ? (((/* implicit */int) arr_87 [i_21] [i_22] [i_23] [i_21] [i_22] [i_22])) : (((/* implicit */int) (short)-27854))));
                            arr_95 [7] [i_22] [i_23 + 1] [i_24] [i_26] [i_21] [i_21] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_80 [i_22 - 1] [i_23 + 1] [i_24] [(signed char)12]))))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            arr_100 [i_21] [i_27] [i_23] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_80 [i_21] [i_22] [i_23] [i_24]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
                            arr_101 [i_22] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_99 [i_21] [i_21] [i_22] [i_24] [i_27]))));
                        }
                        arr_102 [i_21] [i_22] [i_23 + 1] [i_23 + 1] = ((/* implicit */unsigned short) ((((unsigned int) var_6)) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) > (((/* implicit */int) arr_99 [i_21] [(_Bool)1] [i_22] [i_23] [i_24]))))))));
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */short) min((var_44), ((short)32)));
        var_45 = ((/* implicit */int) ((((/* implicit */int) (short)-11806)) != (((((/* implicit */_Bool) arr_70 [i_21] [i_21])) ? (arr_96 [16U] [i_21] [i_21] [i_21] [(signed char)9]) : (((/* implicit */int) (signed char)-110))))));
    }
    var_46 = max((((/* implicit */unsigned int) (short)11805)), (var_2));
}
