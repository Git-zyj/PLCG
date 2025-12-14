/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46686
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 4] [5LL] [i_1] [i_0 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [(short)14] [2U])))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned short) ((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_13) : (((/* implicit */int) var_10))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) : (-1LL)));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) var_0))));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 15; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (var_13))))))));
                            var_21 = ((((((/* implicit */_Bool) 12654866045662881891ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [0LL]))) : (var_1))) % (((/* implicit */long long int) ((/* implicit */int) var_5))));
                            var_22 = ((unsigned short) (-(((/* implicit */int) (unsigned short)15403))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))))));
                var_24 = ((/* implicit */unsigned long long int) (unsigned short)58065);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((long long int) var_5)))));
                            var_26 = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_8))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_36 [i_11] [12LL] [i_10 - 1] [i_10 - 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_10] [i_10 - 1] [i_10] [i_10] [(_Bool)1] [(unsigned char)4])) ? (arr_23 [i_3] [i_10 + 3] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_37 [(unsigned short)14] [7LL] [i_9] [i_10] [i_9] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_10 - 1] [i_10 + 3] [i_10 + 3])) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_10 - 2] [i_10 - 1] [i_10 + 2])));
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_3] [i_9])) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_0))))));
                        arr_38 [i_0] [i_0] [12] [i_3] [(_Bool)1] [i_10 - 1] [i_11] = ((/* implicit */unsigned char) var_12);
                    }
                    var_30 = ((/* implicit */short) var_11);
                    var_31 -= ((/* implicit */unsigned int) ((int) arr_1 [i_0 + 1]));
                }
                for (long long int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    var_32 |= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107))));
                    var_33 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_45 [(unsigned char)1] [i_3] [i_13] [i_12] [i_13 - 1] [i_0 + 3] = ((/* implicit */signed char) ((((_Bool) (signed char)-46)) ? (var_13) : (((/* implicit */int) (unsigned short)15403))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_3] [i_9] [i_9] [i_13])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)50133)) : (arr_13 [(unsigned short)4] [i_3] [(unsigned char)14]))) : (((/* implicit */int) var_11))));
                        arr_46 [i_0] [i_3] [i_9] [i_13] [7ULL] = arr_4 [i_13];
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_10))))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((_Bool) var_10)))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)15422))));
                    }
                }
                for (long long int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                {
                    arr_53 [i_15] [i_3] [i_3] [i_3] = ((/* implicit */short) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_27 [i_0 - 1] [i_3] [i_0 - 1] [i_15]))))));
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_10))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) ((int) arr_41 [i_0] [i_0 - 2] [7ULL] [i_0 - 1] [i_0 - 2]));
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((signed char) ((arr_28 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                            var_42 = ((/* implicit */unsigned long long int) (-(arr_3 [i_0 - 1] [i_0 + 1])));
                            var_43 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (signed char)112))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 1) 
            {
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        {
                            arr_69 [i_18] [i_18] [i_20] [i_19] [i_20] [i_18] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4176204399U))))));
                        }
                    } 
                } 
                arr_70 [i_18] = ((/* implicit */_Bool) var_3);
            }
            /* LoopNest 3 */
            for (long long int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_43 [i_3] [i_21] [i_3] [i_3] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) % (((/* implicit */int) var_6))));
                            arr_77 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)52694));
                            var_47 -= ((/* implicit */unsigned char) arr_28 [i_0 + 2] [i_3] [i_3]);
                            arr_78 [i_23] [i_22] [i_21] [(short)14] [i_0] [i_0] = var_0;
                            var_48 = ((/* implicit */unsigned char) ((_Bool) 1374967632198665210LL));
                        }
                    } 
                } 
            } 
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_59 [i_0] [i_3] [i_3] [i_3] [15ULL] [i_3])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_3))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_24 = 1; i_24 < 15; i_24 += 1) 
    {
        for (long long int i_25 = 3; i_25 < 14; i_25 += 2) 
        {
            {
                arr_85 [i_24] [i_24] [i_24] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)15266)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)61063), (((/* implicit */unsigned short) var_4)))))) : (((((/* implicit */_Bool) (short)0)) ? (-5972975558217055394LL) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_24 + 2] [i_24 + 1])))))));
                /* LoopNest 3 */
                for (signed char i_26 = 2; i_26 < 14; i_26 += 4) 
                {
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 2) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (14594683404224764120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_26])))));
                                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((unsigned long long int) ((_Bool) var_3))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    for (unsigned int i_30 = 0; i_30 < 17; i_30 += 1) 
                    {
                        for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 4) 
                        {
                            {
                                var_52 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2161951488U)) ? (3001974701U) : (((/* implicit */unsigned int) var_9)))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_13)) ? (((((/* implicit */_Bool) var_3)) ? (7797004297304489888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13786))))))))) ? (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)6)))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) <= (min((var_9), (((/* implicit */int) (unsigned short)20))))))))))));
                                var_54 = ((/* implicit */_Bool) ((signed char) (!(arr_98 [i_25 + 1] [i_29] [i_29]))));
                                var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
