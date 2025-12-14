/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195005
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_2)), (var_10)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-3654867035242471805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((348550554) >> (((((/* implicit */int) var_8)) + (96)))))) : (8168140721598851651ULL))))))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
            {
                arr_8 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1478472446)) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 + 2]))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_4] [i_4] [i_4] [(short)3] [(signed char)0] [i_1] [9LL] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (3654867035242471805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) >> (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (0LL)))));
                        arr_15 [i_0] [(_Bool)1] [i_2] [i_1] [i_4] &= ((/* implicit */int) (!(((/* implicit */_Bool) 268304384))));
                        var_13 = ((/* implicit */int) ((arr_7 [i_0] [i_2] [i_3 + 3] [i_4]) | (arr_7 [i_3 + 2] [i_3 + 2] [(short)2] [i_1 - 1])));
                        arr_16 [i_0] [i_0] [(short)5] [i_2] [i_2] [i_4] [i_4] |= ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_3 - 3] [i_0])));
                        arr_17 [i_4] [8] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 8168140721598851650ULL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_2] [13ULL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6103427526979001494ULL)) ? (-1LL) : (-5531576594454636476LL)));
                        arr_22 [i_0] [(short)5] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4171264573272247718LL)) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 - 1]))));
                    }
                    arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (!(arr_2 [i_0])));
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) 18446744073709551594ULL);
                    arr_26 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_0])) ? (8734072730597809438LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((3168324994825601376ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_1 - 2] [i_1 - 2] [i_0])))))))));
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_15 += ((/* implicit */unsigned int) var_6);
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) -17LL))));
                        arr_29 [i_0] [i_0] [i_0] [i_1 + 1] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])) : (((/* implicit */int) (unsigned char)195))));
                    }
                    for (short i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        arr_32 [i_1 + 2] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775782LL));
                        arr_33 [i_0] [i_1 - 2] [i_2] [11ULL] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)195));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_19 [i_0] [i_1 - 2]))));
                        var_18 = ((/* implicit */unsigned int) (unsigned char)61);
                        var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))));
                    }
                }
                for (long long int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_20 = ((/* implicit */short) max((var_20), ((short)-26006)));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 523310601U)) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) var_3))))) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                var_22 = ((/* implicit */short) 1691748091U);
            }
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) max((arr_6 [i_0] [i_0] [(unsigned char)9] [i_10]), (((/* implicit */unsigned char) arr_11 [i_0] [i_1 - 1] [i_10] [i_10]))));
                arr_40 [3ULL] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4290772992U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (6103427526979001494ULL)));
            }
            arr_41 [i_0] [i_0] = ((unsigned long long int) 1929567337U);
        }
        for (int i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
        {
            arr_44 [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12LL)) ? (1431342399943256193ULL) : (((/* implicit */unsigned long long int) 13LL))));
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)255), (var_4)))) >> (((((long long int) arr_36 [0] [i_11 + 2] [i_0] [i_11])) + (10967LL)))))) ? (((/* implicit */long long int) (~(611307056U)))) : (((((/* implicit */_Bool) arr_5 [i_11] [i_11] [i_11] [i_11 + 1])) ? (((((/* implicit */_Bool) var_8)) ? (71494644084506624LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11 - 2] [i_11] [i_11] [i_11]))))) : (((((/* implicit */_Bool) -24LL)) ? (-267192197334648267LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 3) 
        {
            arr_49 [i_0] &= ((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)140)));
            var_24 += ((/* implicit */_Bool) -267192197334648278LL);
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_36 [i_12 - 2] [i_12] [i_13 - 1] [i_13 - 1])))))));
                            var_26 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((_Bool) -1936069475)))));
        arr_57 [(unsigned char)7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54)))))));
    }
}
