/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19013
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_11 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_12 -= var_2;
        var_13 = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_1] [i_3] [i_4])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) >> (((((/* implicit */int) var_2)) + (26350)))));
                        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_16 [i_1]) : (arr_16 [i_3])));
                        var_16 += ((/* implicit */_Bool) var_3);
                        var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_1] [i_2]))));
                    }
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned short) arr_3 [i_1] [i_5]);
            var_19 = ((/* implicit */unsigned char) ((_Bool) arr_15 [i_1] [i_1] [i_5] [i_1] [i_5]));
            var_20 *= ((unsigned int) (unsigned char)14);
            arr_20 [i_1] [i_1] [(unsigned char)0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [i_5] [i_5] [i_5]))));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
            arr_23 [i_1] [i_6] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 3) 
                {
                    arr_32 [i_1] [i_1] [i_9] [i_8] [i_8] [i_9 - 3] = ((/* implicit */unsigned char) ((unsigned short) (short)11626));
                    arr_33 [i_9] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_9] [i_8] [i_7] [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)25815)))))));
                }
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_11 - 1])) ? (((/* implicit */int) arr_8 [i_11 - 2])) : (((/* implicit */int) arr_8 [i_11 + 1]))));
                        arr_39 [5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_37 [i_11] [i_7] [i_8] [i_10] [i_10] [i_11] [i_11 - 3]))));
                        var_24 = ((/* implicit */unsigned short) var_4);
                        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_8] [i_10] [i_1] [i_11 - 2] [3ULL])) && (((/* implicit */_Bool) var_4))));
                    }
                    var_26 += ((/* implicit */long long int) var_0);
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((_Bool) (signed char)-102)))));
                }
                for (short i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */int) arr_37 [i_1] [i_7] [i_8] [i_8] [i_13] [i_12] [i_1]);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34189)) - (((/* implicit */int) arr_7 [i_13] [i_7]))));
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775785LL)))));
                        var_30 -= ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_5))));
                        arr_53 [i_15] [i_15] = ((/* implicit */unsigned int) var_2);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_1] [i_7] [i_15] [i_12] [i_15])) ? (arr_50 [i_1] [(unsigned short)5] [i_1] [i_1] [i_1]) : (arr_50 [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    arr_54 [i_1] [i_1] [i_7] [i_8] [3] = ((/* implicit */long long int) var_2);
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_14 [6ULL] [i_7] [i_8] [i_12] [i_12]))));
                    var_34 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                }
                for (unsigned short i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) (+(arr_6 [i_16 + 2])));
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_35 [i_1] [i_7] [i_8] [i_8] [i_16] [i_16])))))))));
                }
            }
            arr_57 [i_1] [i_7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) var_6))) - (var_9)));
        }
        /* LoopSeq 3 */
        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
        {
            var_37 *= ((/* implicit */short) ((((8053063680ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))));
            arr_61 [i_1] [i_1] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -651155312)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_17] [i_17])) : (((/* implicit */int) arr_11 [i_1] [i_17] [i_17] [i_17]))));
            arr_62 [i_1] [i_17] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_17])) ? (arr_28 [i_17] [7]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
            var_38 = ((/* implicit */unsigned short) (+(arr_50 [i_17] [i_1] [i_17] [i_1] [i_1])));
        }
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                for (unsigned int i_20 = 2; i_20 < 9; i_20 += 2) 
                {
                    for (unsigned short i_21 = 2; i_21 < 7; i_21 += 1) 
                    {
                        {
                            arr_76 [i_1] [i_18] [i_19] [i_20 + 1] [i_21] = ((/* implicit */unsigned short) var_6);
                            var_39 = ((/* implicit */unsigned char) var_3);
                            arr_77 [i_1] [i_18] [i_19] = ((/* implicit */long long int) var_4);
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_20 + 1] [i_18] [i_19] [i_21 + 3] [i_21 + 1] [i_19] [i_18])) ? (((/* implicit */unsigned long long int) arr_71 [i_20 + 1] [i_21] [i_19] [i_21 - 1])) : (arr_38 [i_20 - 2] [i_18] [i_19] [i_21 - 2] [i_21])));
                            arr_78 [(_Bool)1] [i_21] [i_20] [i_19] [i_18] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_74 [i_1] [i_18] [i_20 - 1] [i_20] [i_21]))));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))));
        }
        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
        {
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)34))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_80 [i_1] [i_22]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) var_8))))))));
            arr_81 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) var_6);
            var_43 ^= ((/* implicit */unsigned int) ((arr_47 [i_1] [i_1] [i_22] [i_22] [i_22] [i_22] [i_1]) / (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)34)))))));
        }
        var_44 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) ? (var_4) : (arr_26 [i_1] [i_1] [i_1])));
        arr_82 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) > (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))))));
        var_45 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)7))));
    }
    for (short i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
    {
        var_46 -= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_1)))), ((-(((/* implicit */int) arr_83 [i_23] [i_23]))))));
        var_47 -= (+(((unsigned int) (~(((/* implicit */int) var_6))))));
        arr_85 [i_23] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_83 [i_23] [i_23]))));
    }
    for (short i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
    {
        arr_90 [(unsigned short)2] [i_24] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_87 [i_24]))))), (((((/* implicit */_Bool) arr_84 [i_24])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) << ((((((+(((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) arr_0 [i_24])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) - (18)))));
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_83 [i_24] [i_24])))))));
        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) var_2))));
        arr_91 [i_24] = ((/* implicit */_Bool) arr_87 [i_24]);
        var_50 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_2 [i_24])))) ? (max((arr_2 [i_24]), (arr_2 [i_24]))) : ((~(arr_2 [i_24])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_25 = 3; i_25 < 18; i_25 += 4) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_51 += (((!(((/* implicit */_Bool) arr_100 [i_25 - 1] [i_25 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_100 [i_25 - 1] [i_25 + 1]))) : (arr_95 [i_25 - 1] [i_25 + 1] [i_25 - 1])))));
                    var_52 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_95 [i_25] [i_26] [i_25])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_25 - 3])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_28 = 0; i_28 < 19; i_28 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_100 [2] [i_25 + 1])) ? (((/* implicit */long long int) var_8)) : (var_3))))));
                        arr_104 [i_27] [i_26] [i_27] [i_28] [i_27] [i_27] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_94 [i_25 - 1]))));
                        arr_105 [i_25] [i_26] [i_27] [i_28] = ((/* implicit */int) (+(arr_101 [i_25 - 2] [i_27] [i_25 - 2])));
                        var_54 ^= ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)1)) - (((/* implicit */int) var_2))))));
                    }
                    for (short i_29 = 0; i_29 < 19; i_29 += 1) /* same iter space */
                    {
                        var_55 += ((/* implicit */int) (unsigned char)229);
                        var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_102 [i_27])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_27]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)94)))))))) ? ((((+(arr_2 [(unsigned char)5]))) << (((/* implicit */int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_30 = 2; i_30 < 15; i_30 += 1) /* same iter space */
                    {
                        var_57 = arr_101 [i_25] [i_27] [i_27];
                        arr_110 [i_25] [i_27] [i_27] [i_30] = (-(var_3));
                    }
                    for (unsigned short i_31 = 2; i_31 < 15; i_31 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_32 = 0; i_32 < 19; i_32 += 1) 
                        {
                            arr_117 [i_25] [i_26] [i_27] [i_27] [i_32] = ((/* implicit */_Bool) arr_102 [i_27]);
                            var_58 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_116 [i_26] [i_27] [i_31 + 1] [9LL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))));
                            var_59 = ((/* implicit */signed char) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_25 - 2] [i_26])))));
                            var_60 = ((/* implicit */unsigned short) arr_1 [i_31 - 1]);
                        }
                        var_61 = max((((/* implicit */unsigned long long int) arr_92 [i_25])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_97 [i_25 - 2] [i_26] [i_27] [i_31 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_108 [i_25]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (var_9))));
                    }
                }
                var_62 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)118)), ((unsigned short)65524)))) ? (max(((+(arr_115 [i_26] [i_26] [i_26] [(short)3] [i_25] [i_25]))), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_100 [i_26] [i_26]), (((/* implicit */unsigned short) arr_109 [i_25] [i_25 + 1] [i_25 - 1] [i_25]))))))));
            }
        } 
    } 
}
