/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193988
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(((((/* implicit */int) ((unsigned short) var_8))) | ((~(((/* implicit */int) arr_1 [(signed char)16])))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
    }
    var_17 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) arr_4 [(signed char)10] [i_1 + 2]);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38725)) ? (((/* implicit */int) (unsigned short)3260)) : (((/* implicit */int) (unsigned short)3259))))) ? (arr_2 [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_14))));
        var_19 = ((/* implicit */unsigned short) ((long long int) arr_5 [i_1 + 3]));
        var_20 = arr_0 [i_1];
        var_21 = ((/* implicit */unsigned short) arr_0 [i_1]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_22 |= max((((((/* implicit */_Bool) ((signed char) 3430019524801436483ULL))) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)62285)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) max((((unsigned int) var_4)), (((/* implicit */unsigned int) max((arr_9 [(signed char)3]), ((unsigned short)3264))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_5] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [1LL]);
                    var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3604946171274522889LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_4]))) : (arr_7 [i_3] [(signed char)7])));
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_2] [i_5] [i_4] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_2] [(signed char)5] [(signed char)5] [i_4] [(signed char)5] [i_5]))));
                        var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_12 [i_2])))));
                    }
                    for (short i_7 = 1; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        arr_28 [i_2] [i_3] [i_4] [(signed char)14] [i_7 + 1] [i_3] [i_5] = ((/* implicit */long long int) arr_8 [4ULL] [(short)10]);
                        arr_29 [1U] [i_3] [(signed char)7] [i_7] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1510487415U))));
                    }
                    for (short i_8 = 1; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        var_25 = (unsigned short)35115;
                        var_26 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [(unsigned short)7] [i_5]))) / (arr_2 [i_8] [i_3]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_36 [i_2] [i_2] [(unsigned short)3] [i_5] [i_9] [12LL] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_6))) | (((/* implicit */int) arr_27 [i_3] [i_3] [i_4] [i_5] [i_9] [i_5] [i_2]))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_11))));
                        arr_37 [(unsigned short)0] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned long long int) (~(1510487427U)));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                {
                    arr_41 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-81)) % (((/* implicit */int) arr_18 [i_2] [i_4] [i_3] [i_3] [i_3] [i_2]))));
                    var_28 = ((/* implicit */unsigned short) (-(arr_7 [i_2] [i_2])));
                }
                for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        arr_48 [i_12] [i_3] [i_4] [i_4] [i_12] = ((/* implicit */short) ((4342693518434670674LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))));
                        arr_49 [i_12] [(unsigned short)7] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)26))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_11] [i_2] [i_2]))) & (var_2))))));
                }
                for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 2) 
                {
                    arr_53 [i_13] [i_13] [i_3] [i_13] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62272))));
                    var_30 = arr_26 [i_2] [i_2] [i_4];
                    arr_54 [14LL] = ((signed char) var_15);
                }
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)6] [2ULL])) ? (((long long int) arr_44 [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_2] [i_2] [i_2] [8LL] [i_4]))))))));
            }
            for (short i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_2] [i_3])) ? (((/* implicit */int) arr_57 [i_2] [i_3])) : (((/* implicit */int) arr_57 [i_14] [i_2]))));
                arr_59 [i_2] [(signed char)15] [i_2] = ((/* implicit */signed char) arr_22 [i_14] [(signed char)11] [i_3] [i_3] [i_2] [i_2]);
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_2])))))));
            }
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_34 = ((/* implicit */long long int) arr_60 [i_15] [(short)7] [i_2] [i_15]);
                arr_62 [i_15] [i_15] [i_15] = ((/* implicit */signed char) (unsigned short)62280);
            }
            var_35 = ((/* implicit */unsigned short) var_5);
        }
        var_36 &= ((/* implicit */long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) <= (min((((((/* implicit */_Bool) (short)-11994)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_55 [i_2] [i_2] [(signed char)9])))), (((/* implicit */int) ((short) var_2)))))));
        arr_63 [(unsigned short)3] [2U] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_42 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_42 [i_2] [i_2] [i_2] [i_2] [i_2])))) >> (((((/* implicit */int) min((arr_42 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_42 [i_2] [i_2] [i_2] [i_2] [i_2])))) - (22595)))));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 13; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                var_37 = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) arr_32 [i_2] [i_2] [(unsigned short)14])) > (arr_2 [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [(unsigned short)5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [i_2] [i_16 + 3] [i_16 + 2] [i_17]))))) : (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(signed char)3] [i_17] [i_16 + 3] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_2] [i_16 + 1])) - (((/* implicit */int) arr_51 [i_2] [i_16 + 3])))))));
                var_38 &= ((/* implicit */unsigned short) ((signed char) min(((signed char)59), ((signed char)(-127 - 1)))));
                arr_68 [i_2] [(unsigned short)9] [i_17] [(unsigned short)9] = ((/* implicit */long long int) (-(max((arr_58 [i_2] [i_2] [i_16 + 3] [i_2]), (((/* implicit */unsigned int) var_0))))));
                arr_69 [i_17] [(signed char)11] [i_17] [i_2] = ((/* implicit */signed char) ((arr_58 [i_16 - 1] [2ULL] [i_16] [i_17]) >> (((((((/* implicit */_Bool) arr_58 [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 3])) ? (var_3) : (arr_58 [i_16 - 1] [3U] [i_17] [(short)5]))) - (666116628U)))));
            }
            arr_70 [i_2] = ((/* implicit */signed char) min((max((arr_5 [i_2]), (((/* implicit */unsigned long long int) 6341238301056569414LL)))), (((/* implicit */unsigned long long int) var_6))));
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((~(var_11))) != (((((/* implicit */long long int) ((/* implicit */int) (short)23413))) | (var_2))))))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_2] [i_16] [(unsigned short)8] [i_2] [(signed char)10])) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_16 - 1] [i_2] [i_16 + 2]))) : (-9078981419824632381LL))))))))));
        }
    }
    for (signed char i_18 = 2; i_18 < 21; i_18 += 1) 
    {
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_18 - 1])) ? (((/* implicit */int) ((unsigned short) arr_71 [i_18 - 1]))) : ((-(((/* implicit */int) arr_71 [i_18 - 2]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 3) 
        {
            for (short i_20 = 1; i_20 < 20; i_20 += 4) 
            {
                {
                    var_41 = ((/* implicit */short) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)18))));
                    var_42 = ((/* implicit */unsigned short) (~(var_1)));
                    arr_78 [(unsigned short)18] [(short)22] |= ((/* implicit */signed char) (+(min((min((2915522150850119771LL), (((/* implicit */long long int) (unsigned short)5)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)12003)))))))));
                }
            } 
        } 
        var_43 = ((/* implicit */unsigned short) ((short) ((unsigned short) arr_71 [i_18 + 3])));
        arr_79 [9ULL] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_72 [i_18 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (arr_72 [i_18 + 1]))));
    }
    var_44 = ((/* implicit */long long int) var_3);
}
