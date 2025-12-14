/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/490
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
    var_19 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)50)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (short)-1627);
                            var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)2514)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 850797862)))), (((/* implicit */long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) var_5)))))));
                            arr_14 [17ULL] [17ULL] [i_2] [i_3] [i_3] [(signed char)18] [i_4 + 1] = ((/* implicit */_Bool) ((7528858466701543194ULL) - (((/* implicit */unsigned long long int) arr_6 [i_3]))));
                        }
                    } 
                } 
            } 
            var_22 -= (signed char)50;
        }
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) ((_Bool) (short)14912));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_7 + 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    arr_25 [19LL] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1]);
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) ((_Bool) (short)2528)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        var_26 = arr_24 [i_0] [i_6] [i_7 - 1] [i_8];
                        arr_29 [i_7] [i_8] = ((/* implicit */long long int) arr_21 [i_0] [i_5 + 1] [i_6] [i_7 + 1] [i_8] [i_0]);
                    }
                    var_27 = ((/* implicit */long long int) var_16);
                }
                var_28 = var_5;
                var_29 ^= ((/* implicit */short) ((_Bool) arr_23 [i_0] [i_5] [i_6]));
                var_30 = ((/* implicit */short) arr_20 [i_0] [i_0] [(short)7]);
            }
            var_31 ^= ((/* implicit */long long int) (+(((17542623304552779279ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))))));
        }
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
        {
            arr_34 [(short)7] = ((/* implicit */_Bool) var_14);
            arr_35 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_0])) & (((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) / (-5)))))));
        }
        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
        {
            arr_39 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) * ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
            arr_40 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [4ULL]))))) ? (((/* implicit */int) arr_15 [i_10] [i_0] [i_0])) : (((((/* implicit */int) (signed char)-85)) % (((/* implicit */int) (_Bool)1))))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 850797862)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777200)) ? (((/* implicit */long long int) arr_6 [(_Bool)1])) : (9223372036854775779LL)))) ? (var_8) : (((/* implicit */long long int) ((arr_24 [i_10] [i_10] [i_0] [i_0]) ? (var_0) : (((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))))));
            arr_41 [10ULL] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)109)), (850797867))))));
            arr_42 [i_0] [13] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-35)))))) : ((-(arr_28 [i_10] [i_10] [i_10] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-2515)), ((-(-850797868))))))));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_8 [i_0] [i_11] [i_11]))));
            arr_47 [i_0] [14LL] = ((/* implicit */long long int) ((((unsigned long long int) 2147483642)) >> (((850797862) - (850797837)))));
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((arr_28 [(short)7] [i_11] [i_11] [i_0] [i_0]) - (arr_28 [i_0] [i_11] [i_0] [i_11] [i_0]))))));
        }
    }
    for (signed char i_12 = 4; i_12 < 15; i_12 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 887704947028833450ULL)))))))) > ((+(arr_5 [i_12 + 3] [i_12 - 3])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            var_36 = ((/* implicit */_Bool) ((unsigned long long int) ((((3352391054412269060LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-2520)))))));
            arr_54 [i_13 - 1] = ((/* implicit */long long int) arr_19 [i_13 + 1] [i_13] [i_12 - 2]);
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */int) ((_Bool) (signed char)-99))) << (((((/* implicit */int) ((signed char) arr_1 [i_13 + 2] [i_13 + 1]))) - (89)))))));
                var_38 += ((/* implicit */long long int) (_Bool)1);
            }
            var_39 = ((/* implicit */unsigned long long int) arr_20 [i_13 + 1] [i_13] [i_13 - 2]);
        }
        arr_57 [i_12] [i_12 + 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_12] [i_12]) & (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))) - (var_9)));
    }
    for (signed char i_15 = 4; i_15 < 15; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_17 = 3; i_17 < 15; i_17 += 3) 
            {
                arr_67 [i_15 + 3] [i_16] = ((/* implicit */signed char) ((min((((850797878) / (((/* implicit */int) arr_49 [i_17] [i_16])))), (((/* implicit */int) var_10)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (16777215ULL)))) ? (((((/* implicit */int) arr_4 [i_15])) - (((/* implicit */int) (signed char)27)))) : (((/* implicit */int) ((signed char) arr_66 [i_15 - 1] [i_15] [i_15 + 2] [i_15 + 1])))))));
                arr_68 [i_15] [i_16] [i_15] = (_Bool)1;
                arr_69 [i_16] [i_16] [i_17] = ((/* implicit */_Bool) ((((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> ((((!(((/* implicit */_Bool) (signed char)-58)))) ? (-509439948) : (((/* implicit */int) ((signed char) 0ULL)))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                var_40 = ((/* implicit */signed char) ((-850797866) | (((/* implicit */int) (!(((/* implicit */_Bool) 4LL)))))));
                var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_46 [i_15 - 4] [i_15 - 2])) ? (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (_Bool)1))))) : (((arr_66 [i_15] [i_16] [7ULL] [7ULL]) ? (var_18) : (((/* implicit */long long int) arr_51 [11] [i_16])))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-104)))));
            }
            for (short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_15 [i_15 - 3] [i_16] [i_19])) : (((/* implicit */int) (short)2523)))) & (((((/* implicit */_Bool) arr_15 [i_15 - 1] [i_16] [i_15 - 1])) ? (((/* implicit */int) arr_15 [i_15 - 2] [(signed char)18] [i_19])) : (((/* implicit */int) arr_15 [i_15 - 1] [i_19] [i_15]))))));
                var_43 = arr_44 [i_15] [i_15] [i_15];
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_48 [i_15 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_15 - 2]))))) : (((((/* implicit */_Bool) arr_48 [i_15 - 4])) ? (((/* implicit */int) arr_48 [i_15 - 3])) : (((/* implicit */int) arr_48 [i_15 + 1]))))));
            }
            var_45 |= ((/* implicit */_Bool) (signed char)-117);
            arr_77 [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_15 - 3] [i_15 + 3])))) - (var_15)));
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                arr_81 [(signed char)8] [i_15] [i_15] [i_16] = (_Bool)1;
                var_46 = (_Bool)1;
                var_47 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_15 - 1] [i_20] [i_20]))) | (11734896915286263514ULL))))));
                var_48 *= ((/* implicit */signed char) arr_19 [14ULL] [i_16] [(_Bool)1]);
            }
            for (int i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
            {
                var_49 *= ((/* implicit */long long int) (+(((((/* implicit */int) arr_27 [i_15 - 4] [i_15 + 1] [i_21] [i_15] [i_15] [i_15])) / (((/* implicit */int) arr_27 [i_15 - 4] [i_15 + 1] [i_15] [i_15] [i_15 - 4] [i_15]))))));
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11)))) >> (((/* implicit */int) var_10))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (signed char i_23 = 4; i_23 < 16; i_23 += 3) 
                    {
                        {
                            arr_88 [(signed char)17] [i_16] [i_21] [i_16] [i_23 + 1] [i_22] = ((/* implicit */unsigned long long int) var_13);
                            arr_89 [i_15 - 4] [i_16] [i_16] [i_21] [i_22] [i_23] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_17 [i_15 - 3] [i_15 - 3] [i_23 - 3])) ? (((/* implicit */int) (unsigned short)6682)) : (((/* implicit */int) arr_17 [i_15 + 1] [i_16] [i_23 + 1])))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-24719)) : (((/* implicit */int) arr_17 [i_15 - 3] [i_16] [i_23 - 3]))))));
                        }
                    } 
                } 
            }
            for (int i_24 = 0; i_24 < 18; i_24 += 4) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) min((2147483620), (((/* implicit */int) (signed char)42))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32749))) : (-4LL))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(signed char)3] [(signed char)3] [16] [i_16] [(signed char)3])) || (((/* implicit */_Bool) var_0))))) % ((+(((/* implicit */int) arr_15 [(signed char)10] [i_16] [i_16])))))))));
                var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (~(((/* implicit */int) var_2)))))));
            }
        }
        arr_94 [i_15 - 4] [i_15] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_38 [i_15 - 2] [i_15 + 2])))) * (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (short)-566)) : (((/* implicit */int) (signed char)-117))))));
        arr_95 [i_15] [i_15 + 2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((arr_36 [3ULL] [i_15] [i_15 + 3]), (((/* implicit */unsigned long long int) -1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_15] [i_15 - 1] [16LL]))) : (((arr_87 [i_15 - 3] [i_15]) | (((/* implicit */unsigned long long int) -8LL))))))));
    }
    var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (var_0) : (2147483647)));
}
