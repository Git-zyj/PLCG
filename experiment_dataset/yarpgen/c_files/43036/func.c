/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43036
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_6);
        var_14 = var_9;
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) var_4);
        arr_7 [i_1] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))), (((/* implicit */unsigned long long int) var_11))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_3)), (var_0)))), (min((var_10), (var_10))))) : (((/* implicit */unsigned long long int) var_11))));
        /* LoopSeq 1 */
        for (long long int i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((var_0), (var_6)))), (var_12)));
            arr_12 [i_1] [i_2 - 4] [15] = ((/* implicit */unsigned long long int) var_12);
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (min((var_12), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_1)), (var_7)))), (((((/* implicit */_Bool) 4117758432069890268LL)) ? (-4117758432069890269LL) : (((/* implicit */long long int) 4294967295U))))))) : (((var_8) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        }
    }
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_16 ^= ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) var_5);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_1))))), (min((((/* implicit */unsigned long long int) var_12)), (var_4))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_6 - 1] [i_4] = ((/* implicit */signed char) var_13);
                            arr_27 [(_Bool)1] [13] [i_5] [(signed char)9] [i_7] = ((/* implicit */int) var_0);
                            var_19 = ((/* implicit */int) ((var_3) ? (var_2) : (((/* implicit */unsigned long long int) var_12))));
                        }
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            arr_31 [8U] [8U] [i_5] |= ((/* implicit */int) var_0);
                            arr_32 [i_3] [i_8] [i_5] [6LL] [i_5] = ((/* implicit */unsigned char) min((var_1), (var_1)));
                            var_20 ^= ((/* implicit */_Bool) var_7);
                        }
                        for (int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) var_3);
                            arr_37 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_12)), (var_2))), (((var_1) ? (var_10) : (var_10)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((max((var_4), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_9)))))));
                            arr_40 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) max((var_9), (var_3)))) : (((/* implicit */int) var_7))))), (max((var_10), (((/* implicit */unsigned long long int) var_6))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))), (((/* implicit */int) max((var_6), (var_0))))));
                        }
                        var_24 &= ((/* implicit */int) min((min((var_10), (((/* implicit */unsigned long long int) var_7)))), (min((var_2), (((/* implicit */unsigned long long int) var_13))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 20; i_11 += 1) 
    {
        arr_43 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_25 = ((/* implicit */long long int) var_6);
            var_26 |= var_6;
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_54 [i_11 + 1] [i_12] [i_13] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)));
                            arr_55 [i_11] [6U] [i_14] [i_11] [i_11] [i_11] &= ((/* implicit */unsigned char) var_9);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_8)) : (((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
                            var_28 = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((var_3) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                arr_58 [i_11] [i_16] [i_11] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                arr_59 [i_11] [i_12] [i_16] [(signed char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
                /* LoopSeq 3 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    arr_63 [i_11] [i_17] [17LL] [i_12] [i_11] = ((/* implicit */int) var_11);
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        arr_66 [i_11] = ((/* implicit */long long int) var_4);
                    }
                    for (int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1040187392ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (643068319U))))));
                        arr_69 [(_Bool)1] [i_12] [i_11] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned int) var_6);
                        var_33 = ((/* implicit */int) var_13);
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_11)));
                        var_35 = ((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)));
                    }
                    arr_70 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_36 ^= ((/* implicit */int) var_2);
                        var_37 = ((/* implicit */long long int) var_0);
                        var_38 = ((/* implicit */signed char) var_11);
                        arr_73 [i_11] [i_12] = ((/* implicit */unsigned char) var_11);
                    }
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        arr_76 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_5);
                        arr_77 [i_11 + 1] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)));
                        arr_78 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
                        arr_79 [i_11] = ((/* implicit */unsigned long long int) var_12);
                    }
                }
                for (signed char i_22 = 1; i_22 < 19; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_23 = 1; i_23 < 18; i_23 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))));
                        var_40 += ((/* implicit */unsigned char) var_6);
                    }
                    for (unsigned int i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        var_41 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
                        arr_87 [i_11 - 1] [i_12] [i_16] [i_11] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (var_11)));
                        arr_88 [i_11] [i_12] [i_11] [i_22 + 2] [i_24] = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_13)));
                    }
                    arr_89 [(signed char)19] [i_12] [i_11] [i_16] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)));
                    var_42 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned long long int) var_13)) : (var_2)));
                    /* LoopSeq 1 */
                    for (unsigned int i_25 = 3; i_25 < 19; i_25 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) var_11))));
                        var_44 &= ((/* implicit */unsigned int) var_3);
                    }
                }
                for (int i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_27 = 2; i_27 < 20; i_27 += 1) 
                    {
                        arr_97 [i_11] [i_11] [i_16] [i_26] [i_16] = ((/* implicit */long long int) var_10);
                        arr_98 [i_11] [i_12] [i_16] [0U] [i_27 + 1] = ((/* implicit */int) var_1);
                    }
                    for (int i_28 = 0; i_28 < 21; i_28 += 3) 
                    {
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_8))));
                        var_46 = ((/* implicit */int) var_2);
                    }
                    for (int i_29 = 0; i_29 < 21; i_29 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                    var_49 = var_11;
                }
            }
            for (signed char i_30 = 0; i_30 < 21; i_30 += 2) /* same iter space */
            {
                var_50 = ((/* implicit */signed char) var_12);
                var_51 = ((/* implicit */unsigned char) max((var_51), (var_7)));
            }
            arr_105 [i_11] [i_11] [i_12] = ((/* implicit */_Bool) var_7);
        }
        for (unsigned char i_31 = 1; i_31 < 19; i_31 += 2) 
        {
            var_52 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_12)) : (var_4)));
            var_53 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4)));
        }
        var_54 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
    }
    var_56 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((max((var_12), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */signed char) var_3)))))))) : (min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
}
