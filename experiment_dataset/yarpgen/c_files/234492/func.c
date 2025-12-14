/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234492
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (-1148460579)));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))), (min((((/* implicit */unsigned int) var_7)), (arr_3 [i_0 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 6; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-26)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)25579)))) ? (min((var_13), (((/* implicit */unsigned long long int) var_17)))) : (((((/* implicit */_Bool) (signed char)-52)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) -1652806045))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) (unsigned char)104);
        var_22 |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))));
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_3 - 1])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) arr_12 [i_3] [i_3]))));
                        arr_23 [i_3] [i_3] [i_3] [i_6] [i_4] = ((/* implicit */unsigned short) arr_19 [i_3] [i_3]);
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4 - 1])) ? (var_8) : (((/* implicit */unsigned int) -626083844))));
                        arr_24 [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 2] [(short)9] [i_3] [i_4 - 1] [i_3] [i_4 + 3]))) : (3378524924U)));
                    }
                } 
            } 
        } 
        arr_25 [i_3] [i_3] = ((/* implicit */signed char) arr_14 [i_3]);
        arr_26 [(short)6] &= arr_21 [i_3];
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_25 ^= ((/* implicit */signed char) arr_13 [i_7] [i_7]);
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (max((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : (8151937707788772814ULL))), (((/* implicit */unsigned long long int) max((arr_29 [i_8]), (arr_29 [i_7]))))))));
            var_27 *= ((/* implicit */unsigned long long int) (unsigned char)158);
            arr_33 [(unsigned short)12] |= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_13 [i_7] [i_8])), (arr_32 [i_8]))), (((/* implicit */unsigned int) arr_14 [i_8]))));
        }
        for (int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_28 = ((/* implicit */long long int) min((((arr_14 [i_9]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_9])))), (((/* implicit */int) arr_14 [i_7]))));
            var_29 = max((max((3236632287U), (arr_19 [i_9] [i_9]))), (((/* implicit */unsigned int) var_10)));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_19 [i_7] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [3] [i_10]))) : (arr_32 [i_10]))), (max((((/* implicit */unsigned int) (unsigned char)123)), (4294967295U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                arr_43 [i_11] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) arr_41 [(unsigned short)0] [i_10] [i_10] [i_11]);
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (arr_18 [i_11] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_10]))) : (arr_17 [i_11] [i_10] [i_7])));
            }
            var_32 = max((((/* implicit */int) min((arr_14 [i_7]), (arr_14 [i_10])))), ((-(((/* implicit */int) (signed char)51)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                arr_47 [i_7] [i_10] [i_12] = max((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-18)), ((unsigned char)97)))), (((((/* implicit */_Bool) arr_42 [i_7] [i_10] [i_12] [(short)0])) ? (((/* implicit */int) arr_42 [(signed char)7] [i_10] [(short)10] [(_Bool)1])) : (((/* implicit */int) (unsigned char)0)))));
                var_33 |= arr_20 [i_7] [i_7] [i_7] [i_10] [i_10] [i_12];
            }
            /* LoopNest 2 */
            for (signed char i_13 = 3; i_13 < 12; i_13 += 4) 
            {
                for (unsigned char i_14 = 2; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_34 = ((/* implicit */int) max((((/* implicit */long long int) min((min((arr_42 [i_14] [i_7] [i_10] [i_7]), (((/* implicit */unsigned short) (signed char)26)))), (arr_28 [i_13 + 2] [i_14 - 2])))), (min((-690323360881328235LL), (((/* implicit */long long int) var_8))))));
                        var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) 141863388262170624LL)) ? (arr_37 [i_13 - 3] [i_14] [i_14 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20519)))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    {
                        var_36 |= ((/* implicit */long long int) arr_50 [i_7] [(unsigned short)0] [(unsigned short)0] [i_17]);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) (signed char)106)), (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_56 [i_7]), (arr_56 [(signed char)1])))))));
                    }
                } 
            } 
            arr_63 [i_15] = ((/* implicit */short) arr_32 [i_7]);
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) arr_59 [i_15 - 2] [i_18] [i_19] [i_20]);
                            var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_15] [i_15] [9ULL])) ? (((/* implicit */int) arr_54 [6ULL] [6ULL] [i_18] [i_20] [i_19] [i_18])) : (((/* implicit */int) var_7))))), (0U)))) ? (((((/* implicit */_Bool) (signed char)106)) ? (7226384792658142820ULL) : (((/* implicit */unsigned long long int) 3310806524U)))) : (min((((/* implicit */unsigned long long int) arr_28 [i_15 - 1] [i_15 - 1])), (var_2)))));
                            var_40 += ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_15 - 2] [i_15 - 1] [i_15 - 2] [i_15 - 1]))) : (max((arr_59 [i_15 - 3] [i_15 - 3] [i_15 + 1] [i_15 - 3]), (arr_59 [i_15 - 2] [i_15] [i_15 - 1] [i_15 - 2])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_21 = 4; i_21 < 13; i_21 += 1) 
            {
                for (short i_22 = 1; i_22 < 13; i_22 += 3) 
                {
                    {
                        arr_77 [i_7] [i_7] [i_21] [i_22] &= min((min((arr_55 [i_15 - 3] [i_22 + 1] [i_22]), (arr_55 [i_15 - 3] [i_22 - 1] [1U]))), ((~(arr_55 [i_15 - 3] [i_22 + 1] [7LL]))));
                        var_41 = ((/* implicit */unsigned char) arr_70 [(short)5] [(short)5] [(short)1] [i_22] [i_7] [i_15 + 1]);
                        var_42 += ((/* implicit */int) var_7);
                    }
                } 
            } 
        }
        for (short i_23 = 0; i_23 < 14; i_23 += 2) 
        {
            var_43 *= ((/* implicit */_Bool) var_12);
            var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104)))), (((((/* implicit */_Bool) 13653951895857043661ULL)) ? (-7079341753412269282LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)87)))))));
            var_45 = (signed char)-60;
        }
        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_0))));
    }
    /* vectorizable */
    for (signed char i_24 = 0; i_24 < 21; i_24 += 3) 
    {
        var_47 = ((/* implicit */unsigned int) (_Bool)0);
        var_48 = ((/* implicit */long long int) arr_80 [i_24]);
        arr_83 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_24] [i_24]))) : (4792792177852507954ULL)));
    }
}
