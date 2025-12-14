/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233757
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_4 [i_2]);
                        arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3)) << (((((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (unsigned short)47514)) : (((/* implicit */int) (signed char)105)))) - (47500)))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_14 = (i_0 % 2 == 0) ? (((int) ((var_1) << (((arr_3 [i_0] [i_0] [i_4]) - (2920153675219651153LL)))))) : (((int) ((var_1) << (((((arr_3 [i_0] [i_0] [i_4]) - (2920153675219651153LL))) + (1740400212172022392LL))))));
                            var_15 = ((/* implicit */unsigned short) (((-(arr_8 [i_0] [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_16 ^= ((/* implicit */unsigned int) ((arr_16 [i_0] [i_0] [i_2] [i_0] [(unsigned short)1]) <= (((int) var_13))));
                            var_17 = ((/* implicit */int) var_3);
                            var_18 = ((/* implicit */long long int) ((arr_13 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]) >= (8454233374959579965LL)));
                        }
                        for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_6] [i_6] [i_2] [i_3] [i_6]) : (((/* implicit */int) var_13))))) ? (((5993111974142569941LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))) : (((/* implicit */long long int) 3777562551U))));
                            var_20 &= ((/* implicit */unsigned int) var_13);
                        }
                        for (signed char i_7 = 2; i_7 < 6; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((arr_21 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))) : (((/* implicit */unsigned int) (~(var_12)))))))));
                            var_22 |= arr_3 [i_0] [i_2] [(unsigned short)0];
                        }
                        var_23 = ((/* implicit */signed char) arr_14 [i_3 + 1] [i_0] [i_3 - 1] [i_3 - 1]);
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        var_24 = ((/* implicit */signed char) (~(max((arr_24 [i_8 - 1] [i_8]), (arr_24 [i_8 - 1] [i_8 + 2])))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (signed char i_10 = 2; i_10 < 18; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((/* implicit */long long int) min((((var_1) + (536870911U))), (((((/* implicit */_Bool) arr_33 [i_8 + 1] [i_10 + 2] [i_11])) ? (arr_27 [i_8]) : (var_5)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)10)), (0U)))) ? (((((/* implicit */_Bool) var_3)) ? (2677732534206962057LL) : (((/* implicit */long long int) arr_26 [i_9] [i_11])))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), ((signed char)106))))))))))));
                        arr_35 [i_8] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_8))))) / (arr_34 [(signed char)5] [i_8 - 2] [i_10 + 3] [i_10 + 2]))) <= (((/* implicit */int) arr_32 [i_8 + 2] [i_8 + 2] [i_9] [i_10] [14LL] [4U]))));
                        var_26 = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned int) arr_26 [i_9] [i_9])), (arr_27 [i_11]))), (((/* implicit */unsigned int) arr_32 [i_8] [(unsigned short)6] [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_9])))) ^ (((/* implicit */unsigned int) var_6))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_11]))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_12 = 3; i_12 < 18; i_12 += 1) 
    {
        arr_39 [i_12] = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 5993111974142569941LL))))), ((signed char)32)));
        var_28 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */int) ((signed char) arr_25 [i_12] [i_12 - 1])))));
        arr_40 [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)50698), (((/* implicit */unsigned short) (signed char)82)))))));
    }
    /* LoopSeq 3 */
    for (long long int i_13 = 3; i_13 < 17; i_13 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_14 = 3; i_14 < 18; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                arr_47 [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) arr_42 [i_13 - 3]);
                /* LoopSeq 1 */
                for (unsigned short i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_13 - 3] [i_13 - 3] [i_14 - 1] [i_14 - 1] [i_16 - 1] [i_16])) ? (((/* implicit */unsigned int) arr_26 [i_13 - 1] [i_14])) : (var_5)));
                    arr_52 [i_13] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_45 [3LL] [i_13])))) ? ((~(1478673240477122267LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                }
                var_30 = ((/* implicit */unsigned short) arr_43 [i_13] [i_14] [i_13]);
            }
            arr_53 [i_13 - 1] [i_13] = ((((/* implicit */_Bool) arr_23 [i_13])) ? (((/* implicit */int) arr_23 [i_13])) : (((/* implicit */int) arr_23 [i_13])));
        }
        for (unsigned int i_17 = 1; i_17 < 19; i_17 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                var_31 = ((/* implicit */signed char) var_12);
                var_32 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) (~(1256331440U))))), (var_7)));
                var_33 = ((/* implicit */signed char) ((arr_51 [i_18] [i_18] [i_17] [i_17] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_13] [i_13]))) <= (((arr_43 [4LL] [i_17] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_17 + 1] [i_13])))))))))));
                arr_60 [i_13] [i_17] = ((/* implicit */unsigned short) (signed char)120);
            }
            /* vectorizable */
            for (unsigned int i_19 = 3; i_19 < 19; i_19 += 2) 
            {
                var_34 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_13]))));
                var_35 = ((/* implicit */unsigned int) arr_30 [i_13 - 2] [i_13 - 2] [i_19 - 2]);
                var_36 = ((/* implicit */unsigned short) min((var_36), (arr_54 [i_13] [i_17] [i_17])));
            }
            for (signed char i_20 = 2; i_20 < 16; i_20 += 1) /* same iter space */
            {
                arr_65 [i_13] [i_13] = ((/* implicit */int) 2358946407599730576LL);
                var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_13] [i_17 + 1] [i_13] [i_17 + 1] [i_13 - 3] [i_17])) ? (arr_28 [i_20 - 2] [0LL] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13 + 2] [i_13 + 3] [i_17 - 1] [i_17 - 1] [i_13 + 2] [i_20]))))) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                arr_66 [i_17] [i_13] = ((/* implicit */unsigned int) ((((int) arr_31 [i_13 + 3] [i_20 + 3] [i_13] [i_17 - 1] [i_13])) % ((-(((/* implicit */int) arr_44 [i_13 + 3] [i_13]))))));
                arr_67 [i_13] = ((/* implicit */signed char) arr_50 [i_13] [i_17]);
            }
            for (signed char i_21 = 2; i_21 < 16; i_21 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_46 [i_13 + 1]))));
                arr_70 [i_13] [i_17] [i_13] [(signed char)18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_21] [i_17 - 1]))) == (((arr_64 [i_13 - 3] [i_17 + 1] [i_21 + 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_21 + 4] [i_17 - 1] [i_13 + 2])))))));
                arr_71 [(signed char)16] [i_13] [i_13] = ((/* implicit */unsigned short) max((-2LL), (((/* implicit */long long int) -2))));
            }
            var_39 -= ((/* implicit */unsigned int) var_11);
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (arr_64 [i_17] [i_17] [i_13 + 1]))))))) ? (((((((((/* implicit */long long int) arr_45 [(unsigned short)8] [i_17])) + (arr_28 [i_13 - 1] [i_17] [i_17 - 1]))) + (9223372036854775807LL))) << (((max((var_4), (((/* implicit */unsigned int) -674227484)))) - (3862868182U))))) : (((/* implicit */long long int) min((((((/* implicit */int) arr_69 [i_13] [i_13 + 2] [i_13])) << (((var_4) - (3862868170U))))), (((/* implicit */int) var_13)))))));
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_13])) ? (arr_64 [i_13] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_17] [i_17 + 1] [i_13 - 3])))));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_23 = 1; i_23 < 19; i_23 += 2) 
            {
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) var_7))));
                var_43 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) / (-5381433630810323907LL));
                var_44 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2358946407599730557LL)) ? (780544562396313592LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23988))))) / (((((/* implicit */_Bool) var_3)) ? (var_7) : (arr_64 [7U] [i_22] [i_22])))));
            }
            arr_76 [i_13] = ((/* implicit */signed char) ((arr_41 [i_13 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_13] [i_22])))));
            arr_77 [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_30 [i_13] [i_22] [i_22])) ? (arr_59 [i_13]) : (((/* implicit */long long int) arr_45 [i_13 - 2] [i_22])))) * (((/* implicit */long long int) ((/* implicit */int) ((1948894973) != (((/* implicit */int) arr_69 [i_13] [i_13] [14LL]))))))));
            arr_78 [i_13 + 1] [i_13 - 2] [8U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_13 + 2] [i_13 - 2] [i_13])) ? (((unsigned int) 5993111974142569923LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
        arr_79 [i_13] = ((/* implicit */signed char) arr_58 [i_13] [i_13]);
        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) min((((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-81))))))), (((((/* implicit */_Bool) -850144428)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_69 [i_13] [5LL] [i_13 + 1]))))) : (var_9))))))));
        /* LoopSeq 1 */
        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)40076)))))));
            arr_84 [i_13] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4)))))) < (min((((/* implicit */long long int) arr_41 [i_13])), (var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_29 [i_24] [i_24] [i_13 + 2]))))))) : (((((/* implicit */_Bool) arr_80 [i_13 + 1])) ? (((8LL) % (((/* implicit */long long int) 914029664)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65527), (var_0)))))))));
            arr_85 [i_13] [i_13] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (signed char)92))));
        }
    }
    /* vectorizable */
    for (signed char i_25 = 1; i_25 < 6; i_25 += 3) 
    {
        var_47 = ((((((arr_8 [(signed char)7] [i_25]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_1 [i_25])) + (72))) - (28))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_37 [i_25])))));
        arr_88 [i_25 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-3605676661296614838LL) / (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_25] [i_25] [i_25 + 2])))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_36 [i_25 + 3]))));
    }
    for (unsigned short i_26 = 0; i_26 < 25; i_26 += 4) 
    {
        arr_92 [i_26] = ((/* implicit */unsigned short) (~(var_5)));
        arr_93 [i_26] = ((((/* implicit */_Bool) arr_89 [i_26])) ? (((((/* implicit */_Bool) arr_90 [i_26])) ? (((((/* implicit */long long int) var_4)) & (arr_89 [i_26]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))))) : (((/* implicit */long long int) 0U)));
        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) (signed char)35))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 0)), (3171460408U)))) ? (((((/* implicit */_Bool) arr_89 [10LL])) ? (arr_89 [16]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_91 [i_26])) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) (signed char)70)) ? (((((/* implicit */long long int) var_4)) / (arr_89 [i_26]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30))))))))));
        arr_94 [i_26] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_10)), (-5993111974142569941LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) & ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_6)) : (arr_90 [i_26])))))));
    }
}
