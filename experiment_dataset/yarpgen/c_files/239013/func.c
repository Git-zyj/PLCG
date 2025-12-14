/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239013
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (((unsigned long long int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_4] [(unsigned short)6] &= ((/* implicit */unsigned int) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [3ULL] [i_1 - 1] [1U] [i_4])) && (((/* implicit */_Bool) min((max((arr_5 [i_0] [i_4]), (((/* implicit */long long int) (short)-10038)))), (((long long int) var_9)))))));
                        }
                        arr_15 [i_2] [i_1 + 1] [3LL] [i_3] [i_1] [(_Bool)1] = ((/* implicit */short) var_17);
                    }
                    arr_16 [i_2] [i_2 - 2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]) ^ (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))), (((long long int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                }
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (~(min((arr_1 [i_1 + 1]), (((/* implicit */long long int) var_7))))));
                    arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (var_1)))), (min((arr_8 [i_0] [i_0] [i_5 + 2]), (((/* implicit */unsigned int) -1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_12)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (short i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_0 + 2] [i_0] [i_7 + 3] [i_7] [(unsigned short)1] [11LL])), (3U)))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967293U)))))));
                    arr_30 [i_0] [i_1 + 1] [i_8 - 2] [i_0 + 3] = ((/* implicit */unsigned int) ((signed char) 2097743324));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((var_10) < (((long long int) arr_22 [i_8] [i_0 + 3] [i_8 - 2] [i_8 - 2]))))) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))));
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_8 [(signed char)9] [10LL] [i_1 + 1]) / (arr_8 [i_1] [i_1] [i_1 + 1])))), ((~((-9223372036854775807LL - 1LL))))));
                }
                for (short i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        arr_35 [i_0] [i_10 - 1] [i_9] [(unsigned short)9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_31 [i_0] [i_1] [i_0 - 2]) >= (((/* implicit */unsigned long long int) var_8))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))))))));
                        arr_36 [i_0] [(short)4] [(unsigned short)6] [(unsigned short)6] [i_10] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)65535)) : ((~(((/* implicit */int) ((6388882064549730917LL) <= (285978576338026496LL))))))));
                        var_27 *= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_29 [i_9] [i_9])), (arr_18 [i_0] [i_10 - 1])))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_34 [i_1])))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1]);
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_29 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0 + 3] [10LL] [10LL] [i_0 + 3] [i_11])))))))));
                        var_30 &= ((/* implicit */signed char) ((_Bool) var_1));
                    }
                    var_31 *= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((~(var_0))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        var_32 ^= var_16;
                        var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_33 [11ULL]), (((/* implicit */unsigned long long int) var_6))))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_1] [1ULL] [i_9] [i_12 + 2]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 + 1] [i_9 - 1]))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [0LL] [i_1])))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_11 [i_0 + 4] [i_0 + 4] [i_9 - 1] [i_9] [i_9 - 2] [i_9 - 1] [i_1 - 1])))))));
                        var_34 ^= ((/* implicit */_Bool) (-((((+(((/* implicit */int) (signed char)5)))) + (((/* implicit */int) var_7))))));
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_35 ^= ((/* implicit */unsigned long long int) var_16);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) min((((((_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 16ULL)))))), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) var_8)) == (var_11)))))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))) % (max((var_4), (((/* implicit */unsigned int) var_6)))))))));
                        arr_48 [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_29 [(unsigned short)7] [(_Bool)1])), ((unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                        var_38 = ((((((/* implicit */_Bool) ((signed char) var_13))) ? (max((var_2), (var_12))) : (max((((/* implicit */unsigned int) var_13)), (var_12))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_4)))))));
                    }
                }
                for (signed char i_15 = 3; i_15 < 9; i_15 += 2) /* same iter space */
                {
                    arr_52 [i_15] [i_1] [i_1] [4LL] = ((/* implicit */long long int) max((min((((((/* implicit */int) arr_22 [i_15 + 2] [i_1] [i_0] [i_0])) * (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (signed char)-2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0 - 1] [i_15])))))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((unsigned int) 18446744073709551592ULL)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_0 + 4] [4LL] [i_15] [i_0] [i_15])) / (((/* implicit */int) arr_50 [i_0 - 1] [i_1] [i_15 - 1] [i_15]))))))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                    {
                        var_40 = arr_54 [(signed char)10] [i_1] [i_15] [i_16];
                        arr_57 [i_1] [i_0] &= ((/* implicit */signed char) var_4);
                    }
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-22374))));
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2522896666455032966LL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-5)), (var_6))))) : (var_0))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_50 [(unsigned short)7] [9U] [i_15] [i_18]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_66 [i_0] [i_1] [i_15] [i_18] [i_19] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(short)4] [i_0]);
                            arr_67 [i_15] [(short)0] [i_19] = ((/* implicit */int) arr_27 [i_0] [i_15 - 3] [i_18]);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_71 [i_1] [i_15] [i_15 + 3] [i_15] [i_1] [(unsigned short)4] [i_20] = ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_11))))));
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (((!((!(((/* implicit */_Bool) var_9)))))) ? ((~(arr_27 [i_1 + 1] [i_0 - 1] [i_15 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            arr_74 [i_0 + 1] [i_21] [i_0] [i_0] [i_0 + 1] &= ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_24 [i_0 + 4] [i_0 - 2] [i_0 - 1] [i_1 - 1] [i_15 + 2])) >> (((arr_1 [(_Bool)1]) + (3083904677296338853LL))))));
                            var_45 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)-120)))) + (((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            var_46 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (-3965762545593081584LL)));
                        }
                        arr_75 [i_0] [i_1 - 1] [i_15] [(short)1] [(_Bool)1] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((long long int) var_2)), (var_11))))));
                        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (((~(-3965762545593081565LL))) & (((((/* implicit */long long int) arr_32 [i_15 - 3] [i_1 - 1])) - (var_11))))))));
                    }
                    var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                }
                for (signed char i_22 = 3; i_22 < 9; i_22 += 2) /* same iter space */
                {
                    var_49 = ((/* implicit */long long int) max((var_49), (min((-3965762545593081584LL), (-1LL)))));
                    var_50 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)8))) == (-3965762545593081584LL)))), ((~(((/* implicit */int) arr_46 [i_0] [i_0] [i_22 - 1] [i_0]))))));
                }
            }
        } 
    } 
}
