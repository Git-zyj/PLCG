/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4461
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
    var_13 &= max((((var_11) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_9)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_1)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_5)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((var_11) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_12 [(short)3] [i_2] [(unsigned short)18] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_2 [5LL] [i_2])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_12))) : (min((511ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_18 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551104ULL)));
                        arr_19 [i_1] [i_2] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [18U] [i_2] [(_Bool)1] [i_2])), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [5] [5]))) - (0ULL)))));
                        arr_20 [i_1] [i_1] [i_1] [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) (_Bool)1)) : (min((arr_17 [i_4]), (((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))))))));
                        arr_21 [i_1] [i_2] [(unsigned short)21] = ((/* implicit */unsigned short) arr_0 [i_1] [i_2]);
                    }
                } 
            } 
        }
        arr_22 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_1) ^ (18446744073709551592ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)247), (var_4))))) : (arr_10 [i_1]))) >> (((var_6) - (11806290565001060023ULL)))));
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_3)), (2147352576U)))));
        arr_24 [i_1] [(short)17] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_9))))) : ((((_Bool)1) ? (16256U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_28 [i_1] [i_5] = (signed char)-16;
            arr_29 [i_5] [i_1] = ((/* implicit */signed char) 18446744073709551614ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_34 [(unsigned char)2] [i_6] [(unsigned char)2] [5ULL] = ((/* implicit */unsigned int) ((arr_16 [(_Bool)1] [i_6] [i_7] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_6]))) : (var_5)));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    arr_37 [i_1] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((short) arr_2 [i_1] [i_7]));
                    arr_38 [i_8] [i_7] [i_6] [i_1] [(short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_6] [i_7])) ? (arr_31 [i_6]) : (((/* implicit */int) ((short) var_1)))));
                    arr_39 [i_1] [i_6] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) arr_36 [i_7] [i_7]);
                    arr_40 [(short)17] = ((_Bool) arr_13 [i_1] [23U] [i_1] [i_1]);
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    arr_45 [(_Bool)1] [(_Bool)1] [i_9] = ((arr_15 [i_6] [i_7] [i_9]) - (arr_15 [11U] [(unsigned short)12] [i_1]));
                    arr_46 [i_1] [i_6] [i_7] [i_9] [i_6] = ((/* implicit */unsigned int) ((arr_0 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_6])))));
                }
                arr_47 [i_7] [(unsigned char)20] [i_1] = ((/* implicit */short) (_Bool)1);
                arr_48 [i_7] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_33 [i_1])));
            }
            for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 2) 
            {
                arr_51 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_50 [i_10 + 1] [i_10] [i_10 + 1] [i_1]);
                arr_52 [i_1] [i_1] [i_6] [i_10] = ((/* implicit */short) 0ULL);
            }
            arr_53 [i_1] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
            arr_54 [i_1] = ((/* implicit */signed char) ((arr_43 [i_1] [i_6] [i_1] [i_1]) ? (((/* implicit */int) arr_43 [4LL] [i_6] [i_6] [4LL])) : (((/* implicit */int) arr_43 [(unsigned char)4] [i_1] [i_1] [i_6]))));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
        {
            arr_57 [i_1] = ((/* implicit */unsigned int) var_0);
            arr_58 [i_1] [i_11] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)249);
            /* LoopSeq 2 */
            for (unsigned int i_12 = 1; i_12 < 22; i_12 += 1) /* same iter space */
            {
                arr_62 [i_1] [i_11] [i_12] [i_11] &= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) - ((~(((/* implicit */int) (_Bool)1))))));
                arr_63 [i_1] [14LL] [i_12] = ((((/* implicit */unsigned long long int) arr_10 [i_12 + 1])) + (18446744073709551615ULL));
            }
            for (unsigned int i_13 = 1; i_13 < 22; i_13 += 1) /* same iter space */
            {
                arr_67 [21ULL] [i_13] [i_13] = ((/* implicit */unsigned int) (unsigned char)241);
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    arr_70 [i_1] [i_13] [i_13 - 1] [i_11] [i_13] = ((/* implicit */unsigned short) arr_17 [i_1]);
                    arr_71 [i_11] [i_11] = (-(arr_32 [i_13] [i_13 + 2] [i_13 - 1] [i_13 - 1]));
                    arr_72 [i_1] [(_Bool)1] [i_13 + 1] [i_13] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_13] [i_13 - 1]));
                    arr_73 [i_13] [i_13] [i_13] [i_14] [i_14] = ((arr_42 [(unsigned char)22] [i_13 + 1] [i_13 + 1] [(unsigned char)22] [(_Bool)1] [i_13 + 1]) >> (((arr_42 [i_1] [i_13 + 1] [i_13 - 1] [i_1] [4U] [i_14]) - (10856996476202139114ULL))));
                    arr_74 [i_13] = ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
                }
                arr_75 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
        {
            arr_78 [12] = ((/* implicit */unsigned int) var_8);
            arr_79 [(short)7] [(short)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)8064))));
        }
    }
    for (short i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
    {
        arr_83 [(short)21] [i_16] = ((/* implicit */signed char) (_Bool)1);
        arr_84 [i_16] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (var_7) : (var_2)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (18446744073709551615ULL))))) - (0ULL));
        arr_85 [i_16] = ((/* implicit */long long int) max(((short)31744), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)241)) ? (3ULL) : (((/* implicit */unsigned long long int) -1)))) != (0ULL))))));
        arr_86 [i_16] [9LL] |= ((/* implicit */unsigned char) (_Bool)0);
        arr_87 [i_16] = ((/* implicit */_Bool) max((0ULL), ((-(18446744073709551586ULL)))));
    }
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_90 [i_17] = ((/* implicit */short) max((var_6), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967295U)), (arr_88 [i_17]))))));
        arr_91 [i_17] [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)0))));
        arr_92 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_88 [i_17])) ? (19ULL) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 0U)) : (-1LL))))))));
        arr_93 [i_17] [(short)11] = ((/* implicit */unsigned long long int) arr_88 [i_17]);
    }
}
