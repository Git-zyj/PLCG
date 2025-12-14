/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18988
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
    var_11 = ((/* implicit */unsigned short) 1024526301U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_3)));
                arr_7 [(short)1] [i_0] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
        var_13 = ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned short)65535)));
        var_14 = ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)39111), (((/* implicit */unsigned short) var_2))))) ? (max((((/* implicit */long long int) (unsigned short)2)), (2901897094526150371LL))) : (var_1))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))))))));
            var_16 *= ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)21))));
            arr_14 [9LL] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((min((((/* implicit */short) arr_12 [i_2] [i_3])), ((short)-16522))), (arr_9 [i_3] [i_2])))), (max((var_1), (((/* implicit */long long int) var_7))))));
        }
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (short i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_11 [i_5] [i_5]))))))));
                            var_18 &= ((/* implicit */unsigned short) var_4);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16361)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned short)65518))));
                        }
                    } 
                } 
            } 
            arr_28 [i_4] = ((/* implicit */unsigned char) (+((((_Bool)1) ? (max((((/* implicit */unsigned int) var_7)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [1U] [1U])))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48013)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (_Bool)1))))))))))));
        }
        arr_29 [(signed char)5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) max((((short) var_1)), (((/* implicit */short) arr_11 [i_4] [(unsigned short)8])))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 4; i_9 < 9; i_9 += 1) 
        {
            for (signed char i_10 = 3; i_10 < 9; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 3; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) var_6);
                            var_22 = ((/* implicit */short) var_0);
                            var_23 = ((/* implicit */long long int) (unsigned char)132);
                            arr_42 [i_4] [2LL] [2LL] [6] [i_11] [i_11] [i_12] = ((unsigned short) arr_23 [i_11 - 3] [i_11] [i_9 - 4]);
                        }
                        var_24 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65378)) || (((/* implicit */_Bool) 9223372036854775797LL)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_14 = 2; i_14 < 8; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((short) (short)3098));
                            var_26 = ((/* implicit */long long int) min((var_26), ((~(((arr_38 [0LL] [i_10 - 3] [i_9]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19)))))))));
                            var_27 = ((((/* implicit */int) arr_39 [i_14 + 2] [i_13] [i_13] [i_13] [i_9 + 1] [i_4])) != (((/* implicit */int) var_2)));
                        }
                        var_28 = ((/* implicit */_Bool) arr_32 [i_10] [i_4]);
                        var_29 *= ((/* implicit */signed char) arr_5 [i_4] [i_9] [i_10]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        arr_51 [i_15] [i_10] = ((/* implicit */_Bool) (signed char)-44);
                        var_30 = var_3;
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_15] [i_4] [i_4] [i_4]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_57 [i_4] [i_4] [(unsigned short)7] [1LL] [i_10] [(unsigned short)7] [(unsigned short)10] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) -27)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned short)65535)))) ^ (((/* implicit */int) arr_39 [i_17] [4] [(_Bool)1] [(_Bool)1] [i_9] [i_4]))))), (min(((~(var_0))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_6)))))))));
                                var_32 *= ((/* implicit */unsigned int) (-((+(max((((/* implicit */long long int) var_5)), (var_1)))))));
                                arr_58 [i_9] [10] [i_9] = ((/* implicit */long long int) ((max((arr_0 [i_10 + 2]), (((/* implicit */unsigned int) arr_35 [i_10] [i_10] [i_10 + 2] [i_9 - 4])))) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17534), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (4050605964U))))))))));
                                arr_59 [i_4] [i_9] [i_9] [i_16] [i_17] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (4219926183U)))), (9937283181284499360ULL))), (((((/* implicit */_Bool) arr_46 [(signed char)0] [i_10 - 3] [i_10 - 3] [i_16 + 1] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)55897)))))) : (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    arr_60 [i_10 - 3] &= ((/* implicit */unsigned short) (+(var_3)));
                    arr_61 [i_4] = ((/* implicit */signed char) (unsigned short)7);
                }
            } 
        } 
    }
    for (int i_18 = 3; i_18 < 9; i_18 += 3) 
    {
        arr_64 [i_18] = ((/* implicit */int) var_6);
        arr_65 [i_18] [(unsigned short)7] = arr_38 [i_18] [i_18 - 1] [i_18];
    }
    for (signed char i_19 = 4; i_19 < 17; i_19 += 1) 
    {
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_19 - 3] [i_19 - 3])) + (((/* implicit */int) min(((short)22369), (((/* implicit */short) arr_11 [i_19 - 4] [i_19 - 1])))))));
        /* LoopNest 3 */
        for (long long int i_20 = 2; i_20 < 17; i_20 += 3) 
        {
            for (short i_21 = 1; i_21 < 16; i_21 += 3) 
            {
                for (unsigned short i_22 = 2; i_22 < 16; i_22 += 3) 
                {
                    {
                        var_33 = (~((+(75041112U))));
                        arr_81 [i_19] [i_19] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)4445)), ((~(((/* implicit */int) (_Bool)1))))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_21 - 1] [i_19]))) : (4018289066U)))))));
                        arr_82 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_2), (arr_72 [i_21] [i_21] [4]))))) ^ (min((((/* implicit */long long int) 0U)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56017))) ^ (var_3)))) ? (((((/* implicit */long long int) var_4)) & (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [(signed char)13])))))));
                    }
                } 
            } 
        } 
        arr_83 [i_19] [i_19] = ((/* implicit */int) max((min((((/* implicit */long long int) arr_79 [i_19 - 3] [i_19 - 1] [i_19 - 4] [i_19 - 1])), (((-3697117893682357940LL) + (((/* implicit */long long int) arr_66 [4LL])))))), (min((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_19] [i_19]))))), (var_0)))));
    }
}
