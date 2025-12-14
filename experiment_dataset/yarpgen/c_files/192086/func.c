/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192086
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0 - 1] [i_1] [i_2] [i_3]) & (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (var_10)));
                        var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_4))));
                        arr_9 [1LL] [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */signed char) (-(12358238458818453126ULL)));
                    }
                } 
            } 
            arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2])));
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_6] [i_0 - 1]);
                            arr_19 [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_13 [i_4] [i_5]);
                            var_13 = ((/* implicit */unsigned long long int) (unsigned short)65512);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    arr_23 [i_0] [i_1] [i_1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4] [i_7 - 2])) ? (((var_1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
                    var_14 = (((!(((/* implicit */_Bool) 12358238458818453126ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_6 [i_0 + 3] [i_1] [i_1] [i_4 + 2] [i_1] [i_1]))));
                }
                arr_24 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [(_Bool)1])) / (-809241434)))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (arr_13 [i_0 - 1] [i_4 - 1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) % (5783471091611132149ULL)))))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) != (((/* implicit */int) arr_11 [i_8] [i_4 - 1] [i_1] [i_0]))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-102)))))))));
                    var_18 *= ((/* implicit */short) (-(((/* implicit */int) (short)50))));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_16 [i_0 - 1] [i_4 + 1] [i_4])));
                }
            }
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) arr_11 [i_0] [i_9] [i_9] [i_9]);
                            arr_35 [2U] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41394)))))));
                        }
                    } 
                } 
                arr_36 [i_0] [i_0 + 2] [2U] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65520)) << (((1180014478U) - (1180014477U)))));
                var_21 = ((/* implicit */unsigned char) var_1);
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (short i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    {
                        arr_44 [i_0] [i_0] [i_0 + 1] [i_0] [i_13 - 2] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [i_12] [i_13 + 2] [i_14]))))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2]))))) : (min((((/* implicit */long long int) arr_22 [i_14])), (var_10))))) & (((/* implicit */long long int) arr_40 [i_0] [i_12] [i_13 + 3]))));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((signed char) ((min((-14LL), (((/* implicit */long long int) (unsigned char)45)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [(unsigned short)1] [i_12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))))));
                            var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-14LL)))) : (6976644578045181121ULL)))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((var_0) << (((var_3) - (749697107)))))));
                            arr_49 [1ULL] = ((/* implicit */long long int) arr_40 [i_12] [i_12] [i_16]);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (min((((/* implicit */unsigned long long int) ((arr_17 [i_0 + 1] [i_13 - 1] [i_14] [i_12]) | (((/* implicit */long long int) var_7))))), (((((((/* implicit */unsigned long long int) 254982615U)) <= (arr_46 [i_12] [i_12] [i_14] [i_14] [i_16]))) ? (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) var_4)) ? (arr_46 [(short)8] [i_12] [i_13] [i_14] [i_12]) : (((/* implicit */unsigned long long int) arr_32 [i_0] [8LL] [i_12] [8LL] [i_13] [i_16]))))))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(min((arr_21 [i_0] [i_0] [i_0] [i_0]), (min((((/* implicit */unsigned int) (signed char)114)), (0U))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_25 [i_0 + 1] [i_0] [(_Bool)1] [i_0 + 1] [i_0 - 1] [i_13 + 1])) & (var_0)));
                            arr_53 [(signed char)6] [(signed char)7] [i_13 - 2] [i_13] [i_13 + 1] = (-(arr_37 [i_0 + 3] [i_13 - 1]));
                        }
                        arr_54 [i_0 - 1] [(_Bool)1] [i_14] = ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        } 
        arr_55 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (short)(-32767 - 1)))))), (min((var_2), (((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0 + 3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_43 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] [(short)1])))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_64 [i_18] [i_18] = ((/* implicit */long long int) arr_34 [i_0] [i_0]);
                        arr_65 [i_0 - 1] [i_18] [i_20] [i_20] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(277223023U)))) ? ((~(((/* implicit */int) var_1)))) : ((+(var_3)))))));
                        var_28 |= ((/* implicit */int) ((var_1) ? (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (+(var_7))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_22 = 1; i_22 < 21; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_72 [i_21] [(signed char)8] [i_21] [i_21] |= ((/* implicit */signed char) arr_67 [i_21]);
                    var_29 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                    var_30 *= ((/* implicit */short) (+(6088505614891098490ULL)));
                    var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_68 [i_22 + 1] [i_22 + 1] [i_22 - 1])) : (((/* implicit */int) var_11))));
                    arr_73 [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_22 - 1] [i_22 - 1] [i_22 + 1])) | (((((/* implicit */int) (short)-15052)) % (((/* implicit */int) arr_71 [i_22 + 1] [i_22]))))));
                }
            } 
        } 
        arr_74 [i_21] [i_21] |= ((/* implicit */unsigned char) var_6);
    }
    for (unsigned short i_24 = 2; i_24 < 7; i_24 += 4) 
    {
        var_32 = max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) (-(var_3)))), (((((/* implicit */_Bool) arr_40 [i_24] [i_24] [i_24 + 2])) ? (((/* implicit */long long int) var_7)) : (arr_14 [(short)9] [(short)9] [i_24] [i_24]))))));
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (-((-(arr_46 [i_24 + 3] [i_24 + 3] [i_24] [i_24 + 1] [i_24 + 3]))))))));
        arr_78 [i_24 + 3] [i_24] = ((/* implicit */unsigned int) var_2);
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_24 + 2] [i_24 + 2] [i_24] [i_24] [i_24]))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_1))) + ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_24] [i_24] [2U])) ? (((/* implicit */int) arr_39 [i_24 + 1] [i_24])) : (((/* implicit */int) arr_0 [(signed char)8]))))))) : (((/* implicit */long long int) ((536870911U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
        arr_79 [i_24] = ((long long int) arr_40 [i_24] [i_24] [i_24]);
    }
    var_35 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 33554431U)) || (((/* implicit */_Bool) (unsigned short)16))));
    /* LoopNest 2 */
    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 3) 
    {
        for (unsigned long long int i_26 = 2; i_26 < 15; i_26 += 4) 
        {
            {
                arr_84 [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)7936)))), (((/* implicit */int) var_5))))) ? ((-(((((/* implicit */int) var_4)) & (var_3))))) : (((((/* implicit */_Bool) (unsigned short)24138)) ? (831835580) : (((/* implicit */int) (unsigned short)13712))))));
                var_36 = ((/* implicit */unsigned short) (((~(var_0))) | (((/* implicit */unsigned long long int) ((arr_69 [i_25]) | (arr_69 [i_26 + 1]))))));
            }
        } 
    } 
}
