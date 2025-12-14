/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28121
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) (~(((/* implicit */int) min((arr_2 [i_0]), (var_2))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_7 [(signed char)2] [i_1 + 3] &= ((/* implicit */signed char) arr_2 [i_0]);
            var_11 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1 + 3])) & (((/* implicit */int) (unsigned short)55466))));
            var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((562949953421311ULL) >> (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) || (((/* implicit */_Bool) var_4))));
        }
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_13 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_10 [i_2 + 3])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_11 [i_3] [i_2] [i_3]))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)76)), ((short)-18169)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))));
                arr_14 [(short)11] [i_3] = ((/* implicit */unsigned short) ((long long int) arr_8 [(_Bool)1] [i_2] [i_3]));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_2) || (((/* implicit */_Bool) arr_12 [i_0] [i_3])))) ? (((arr_3 [i_0] [i_3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-80)))) : (((/* implicit */int) arr_1 [i_0]))))))))));
                var_14 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */short) ((max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_8)))))) | (((/* implicit */int) arr_10 [i_0]))));
                var_16 += ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) (~(arr_9 [i_0] [8U]))))) : (arr_8 [i_2 + 1] [i_2 + 3] [i_4]));
            }
            arr_17 [(short)1] = ((/* implicit */short) ((signed char) ((unsigned short) arr_11 [(short)1] [i_2 - 1] [i_2 - 1])));
            arr_18 [i_2 - 1] [7U] = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (((unsigned long long int) arr_3 [i_0] [i_2 - 1])))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_19 [(short)11])))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) 3082845186U))) >= (((/* implicit */int) arr_11 [i_0] [i_5] [i_0])))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0] [i_5] [i_5])))))));
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
        }
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_4)), (max((((/* implicit */unsigned short) (short)6413)), ((unsigned short)15230)))));
            var_22 += ((/* implicit */unsigned short) ((max((-3966294229859135321LL), (((/* implicit */long long int) (unsigned char)153)))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) ^ (arr_21 [i_0] [i_0] [i_6])))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10068)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_9] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151))))) : (((/* implicit */int) ((short) var_6)))));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_0] [i_7] [i_8]))));
                            arr_35 [i_0] [i_8] [7] [i_9] [i_10] = ((/* implicit */long long int) (((~(((/* implicit */int) var_6)))) % ((+(((/* implicit */int) arr_0 [(_Bool)0]))))));
                            arr_36 [i_0] [i_8] [i_8] [(_Bool)1] [i_10] = ((/* implicit */unsigned int) arr_29 [i_0]);
                        }
                    } 
                } 
            } 
            var_25 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > ((-(arr_30 [i_0] [i_0] [i_0] [i_7])))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_6))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_30 [i_0] [2ULL] [i_0] [i_0]))))))))));
            arr_37 [i_0] [i_7] [i_7] = ((/* implicit */short) var_9);
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_27 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_28 &= ((/* implicit */long long int) var_2);
                arr_42 [i_0] [i_0] [(unsigned short)0] = ((((/* implicit */_Bool) ((long long int) (unsigned char)98))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)95))))) : (arr_26 [i_0] [i_7]));
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12 + 4] [i_12 + 2] [i_12 - 2]))) : (((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_11] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)))));
                    var_29 = ((/* implicit */unsigned int) ((short) arr_3 [i_12 + 4] [i_12 - 1]));
                }
                for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 4) /* same iter space */
                {
                    arr_51 [(short)10] [i_7] [i_11] [i_13] = ((/* implicit */_Bool) ((arr_34 [i_13 + 2] [i_13] [8] [3ULL] [i_13 - 2] [i_13 - 2]) | (arr_34 [i_13] [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 1] [i_13 + 3])));
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [1ULL] [i_11] [i_13] [1ULL])) >= (((/* implicit */int) ((short) arr_47 [i_14] [i_7])))));
                        arr_54 [i_0] [i_14] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)9201)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_50 [i_11] [i_13 + 3] [i_13 + 4] [i_13]))));
                    }
                    for (long long int i_15 = 1; i_15 < 9; i_15 += 2) 
                    {
                        arr_59 [(signed char)8] [i_7] [(unsigned short)5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_0] [i_7] [i_11] [i_15]))));
                        arr_60 [i_0] [i_7] [i_11] [i_13] [i_15] = ((/* implicit */short) var_3);
                    }
                    for (short i_16 = 3; i_16 < 8; i_16 += 1) 
                    {
                        var_31 = (~(17055443904541469978ULL));
                        var_32 = ((/* implicit */short) (!((!(arr_20 [6LL] [i_7] [i_7])))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */short) ((((_Bool) (short)12868)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) arr_64 [i_17] [i_0] [i_11] [i_7] [i_0])))));
                        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_0] [i_7] [i_11] [i_13 + 3])) % (((/* implicit */int) ((unsigned short) var_5)))));
                        var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_64 [i_13 + 1] [i_13 + 4] [i_13 + 3] [i_13 + 1] [i_13 - 1]))));
                        var_36 += ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10062))) : (((unsigned long long int) arr_5 [(_Bool)0] [i_7] [i_13 + 2]))));
                    }
                    arr_69 [i_0] &= ((/* implicit */_Bool) arr_10 [i_7]);
                }
                for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 4) /* same iter space */
                {
                    var_37 &= ((/* implicit */unsigned short) var_2);
                    arr_73 [i_0] [9LL] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_66 [i_0] [10] [i_7] [i_18] [i_18] [i_0]))));
                    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [0LL] [(signed char)1] [(_Bool)1])) ? (arr_31 [i_7] [i_7] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))))));
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_11] [i_18 + 2])) && (((/* implicit */_Bool) var_4)))))));
                }
                for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) || (arr_2 [i_19 + 3]))))));
                    var_41 = ((/* implicit */unsigned int) var_2);
                }
            }
        }
        var_42 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 3966294229859135312LL)) && (((/* implicit */_Bool) 17055443904541469984ULL))));
    }
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                {
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32746)) | (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (signed char)24))))))))))));
                    var_44 = ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) 3966294229859135309LL)) ? (7623727880568030528ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30174))))) : (((/* implicit */unsigned long long int) arr_80 [(signed char)10] [i_21] [i_21]))));
                }
            } 
        } 
        arr_84 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_78 [i_20]), (((/* implicit */short) arr_82 [i_20] [i_20])))))) / ((-(var_7)))))) || (((/* implicit */_Bool) arr_78 [i_20 - 1]))));
    }
    var_45 = ((/* implicit */int) ((_Bool) (!(var_8))));
    var_46 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (short i_23 = 2; i_23 < 16; i_23 += 2) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                arr_89 [i_24] [i_24] [13LL] = ((/* implicit */unsigned char) (~(8884457706267099566ULL)));
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_80 [i_23] [i_24] [i_23])) ? (((/* implicit */int) (unsigned short)55468)) : (((/* implicit */int) (((-(var_0))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32762))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_25 = 0; i_25 < 17; i_25 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_23 - 2] [i_24])))))) ? (arr_77 [i_23 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))))));
                    var_49 = ((/* implicit */unsigned long long int) (-(arr_80 [i_23 + 1] [i_24] [i_24])));
                    var_50 = ((/* implicit */short) (+(((((/* implicit */int) (signed char)-87)) + (((/* implicit */int) (unsigned short)27788))))));
                    var_51 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_83 [8U] [(short)11] [i_24] [(short)1]))) + ((-(var_0)))));
                    var_52 = ((/* implicit */short) ((((/* implicit */int) arr_78 [i_23 + 1])) % (((((/* implicit */_Bool) arr_80 [i_23] [i_23] [i_23])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_87 [i_24]))))));
                }
                for (long long int i_26 = 0; i_26 < 17; i_26 += 3) /* same iter space */
                {
                    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((unsigned short) max(((~(((/* implicit */int) var_8)))), (((int) var_7))))))));
                    var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_4)), (arr_80 [i_23 - 2] [i_23 - 2] [i_23 - 2]))) / ((-(((/* implicit */int) var_9))))))) + (((unsigned long long int) var_4)))))));
                }
                /* vectorizable */
                for (long long int i_27 = 0; i_27 < 17; i_27 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned short) var_7);
                    var_56 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) (~(var_0))))));
                }
                var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9213))) : (((unsigned int) arr_90 [i_23] [6LL]))))) ? (((/* implicit */int) ((short) max(((unsigned short)36976), (((/* implicit */unsigned short) var_6)))))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_76 [(short)21] [(short)21])) : (((/* implicit */int) arr_88 [i_23] [i_24] [(_Bool)1])))), (((/* implicit */int) max((arr_81 [i_23] [i_24]), (((/* implicit */short) (_Bool)1))))))))))));
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 17; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 1) 
                    {
                        {
                            var_59 = ((long long int) arr_90 [i_28] [5ULL]);
                            arr_101 [i_29] [i_24] [i_24] [i_23] = ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), (arr_78 [i_23 - 2]))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12023))))), (arr_77 [15LL]))));
                            var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) var_8))));
                            var_61 = ((/* implicit */_Bool) min((((arr_99 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_23 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) min((((((/* implicit */int) var_3)) % (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)43475)) > (((/* implicit */int) var_9))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
