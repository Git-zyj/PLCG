/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19181
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = var_4;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
            arr_6 [i_0] [(signed char)5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0]))));
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                arr_11 [i_0] [(unsigned short)7] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-25533)) - (((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (arr_1 [(_Bool)1] [i_2])))));
                var_14 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) 926904315765475403LL)))));
                arr_12 [i_2] [(short)0] [i_0] [i_2] = ((/* implicit */unsigned char) var_6);
            }
            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
            {
                arr_16 [(_Bool)1] [i_2] [i_2] = ((/* implicit */signed char) var_6);
                arr_17 [i_0] [i_0] [i_2] [6ULL] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (arr_5 [i_2 + 3] [i_2 + 2]) : (arr_5 [i_2 + 3] [i_2 + 2]))), (((arr_5 [i_2 - 1] [i_2 + 2]) + (arr_5 [i_2 + 1] [i_2 + 1])))));
            }
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((arr_14 [i_0] [i_2] [i_5] [i_5 - 1]) != (((/* implicit */int) arr_10 [i_2] [i_2 + 2] [i_2 + 2])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_0] [10ULL])))));
                var_15 = ((/* implicit */long long int) arr_7 [i_2] [i_2 + 1]);
                arr_21 [6] [(signed char)8] [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) arr_9 [i_5] [8] [(signed char)10])) : (((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_5 + 1]))))));
            }
            arr_22 [i_2] [(unsigned char)5] [i_2] = ((/* implicit */int) ((unsigned long long int) max((((signed char) var_10)), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [(short)8]))))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_28 [i_0] [i_2 + 3] [(unsigned short)0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_0 [i_2 - 1] [i_7]), (arr_0 [i_2 + 3] [i_2])))) : (max((((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1])), (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_0))))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_1))));
                        arr_29 [i_2] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) var_1);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_15 [i_2 + 2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)25523)) : (((/* implicit */int) var_2))))))) ? ((~(max((((/* implicit */unsigned int) var_7)), (arr_27 [(_Bool)1] [i_6] [i_2 + 3] [8ULL]))))) : (arr_27 [i_0] [i_0] [i_6] [i_7])));
                        arr_30 [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_25 [i_2] [i_2 + 2] [i_6]), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))))) ? ((-(((1846623755) - (arr_23 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_15 [0LL])));
                    }
                } 
            } 
        }
        for (signed char i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            var_18 = ((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)0]);
            arr_33 [(short)13] = ((/* implicit */signed char) ((((-926904315765475403LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1023021361)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_2 [i_0] [i_8 + 1])), (arr_23 [i_0] [i_8] [i_0])))))) : (max((926904315765475403LL), (((/* implicit */long long int) (short)-25524))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-12))))) ? (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_8 - 1])))) : (((/* implicit */int) arr_3 [i_8 + 1] [i_8 + 1]))))));
        }
        var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 9595338663182436579ULL)) ? (926904315765475394LL) : (((/* implicit */long long int) -877137772)))), (((/* implicit */long long int) ((((/* implicit */int) max(((signed char)-78), (((/* implicit */signed char) (_Bool)0))))) % (((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_9 = 4; i_9 < 10; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_5 [i_0] [i_9]))));
                        arr_45 [i_0] [i_0] [i_10 + 2] [12LL] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)255)) - (252))))) | (((/* implicit */int) arr_42 [i_9] [i_9 + 1] [(short)6] [i_9] [(signed char)12] [i_9]))));
                        arr_46 [i_10] [i_10] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_9] [i_9 - 3] [i_9 - 2] [i_9]))))) == (((/* implicit */int) arr_13 [i_9] [i_9 + 2]))));
                        var_22 = ((/* implicit */unsigned char) (+(arr_34 [i_9 - 2] [i_9 - 4] [i_10 + 1])));
                    }
                } 
            } 
            arr_47 [i_9] = ((/* implicit */long long int) ((arr_8 [6] [i_9] [i_9 + 1]) >> (((((/* implicit */int) (unsigned short)64512)) - (64455)))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_2)))));
            arr_50 [i_0] [i_12] = ((/* implicit */int) (unsigned char)112);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                arr_57 [i_0] [(short)1] [4LL] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_13] [i_14] [i_13] [i_0] [i_13]))) : (arr_43 [(_Bool)1] [(signed char)6] [(unsigned char)10] [4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_7)))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned char i_16 = 1; i_16 < 12; i_16 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */signed char) var_7);
                            var_25 = arr_49 [(short)5] [i_15] [i_16];
                            arr_62 [i_0] [i_0] [i_14] [i_14] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_0] [i_15] [i_15] [i_15] [i_16 - 1] [i_15]))));
                        }
                    } 
                } 
            }
            arr_63 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_0] [i_13] [i_0])) && (((/* implicit */_Bool) (~(arr_39 [i_0] [i_0] [i_13] [i_0]))))));
            arr_64 [(signed char)12] [i_0] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20309)) ? (((/* implicit */int) arr_49 [i_0] [i_0] [2LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023)))))));
            var_26 = ((/* implicit */unsigned short) ((698883505U) >> (((((/* implicit */int) arr_31 [i_0])) - (173)))));
        }
        arr_65 [7LL] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)49939));
    }
}
