/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54431
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
    var_12 = (signed char)-17;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 += ((/* implicit */unsigned short) arr_0 [(signed char)2]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_10 [11] [(_Bool)1] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [4ULL] [i_1 - 1])) ^ (((/* implicit */int) var_3))));
                var_14 = ((/* implicit */long long int) (_Bool)1);
            }
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_15 *= ((/* implicit */unsigned long long int) var_0);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [11ULL] [i_1] [i_1 - 2] [i_1 - 2]))) - (var_7)));
                arr_15 [i_0] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_17 *= ((/* implicit */_Bool) (short)0);
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 4] [i_1 - 4] [i_1 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6791185174958665467LL))))) : (((/* implicit */int) arr_8 [2ULL] [2ULL] [i_4] [i_1]))));
                /* LoopSeq 2 */
                for (signed char i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_19 += ((/* implicit */int) ((arr_25 [i_5] [i_5 - 2] [i_1 - 3]) / (-6791185174958665468LL)));
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)4))) ? ((~(((/* implicit */int) (signed char)-17)))) : (((((/* implicit */int) (unsigned short)54242)) * (((/* implicit */int) (signed char)-17))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_9 [i_1 - 4] [i_1 - 2] [(short)8]))));
                        arr_28 [(unsigned short)12] [(unsigned short)12] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_3);
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_16 [i_1 - 2] [i_5 + 1]);
                    }
                    arr_30 [i_5 + 1] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (6791185174958665467LL)));
                    arr_31 [(signed char)11] [(signed char)11] [i_1] [(signed char)11] [3ULL] = ((/* implicit */unsigned long long int) ((int) -2880497660754125079LL));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)51759);
                }
                for (signed char i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    arr_36 [i_7 + 2] [(signed char)12] [4LL] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_4] [i_7];
                    arr_37 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((arr_5 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_38 [i_0] [13LL] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1] [i_1]))));
            }
            for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_47 [i_1] [i_10] [i_0] = ((/* implicit */unsigned long long int) (short)-30211);
                            arr_48 [i_0] [3ULL] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) var_8);
                            arr_49 [3ULL] [3ULL] = ((/* implicit */signed char) ((arr_19 [i_9] [i_8] [i_0]) != (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_8] [i_0] [i_8])))) : (((/* implicit */int) var_8))));
                arr_50 [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((int) ((((/* implicit */int) (short)-27505)) + (((/* implicit */int) var_9)))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 4; i_11 < 14; i_11 += 3) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_11 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (arr_17 [i_1] [i_1] [1ULL])));
                arr_54 [i_0] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)16)) / (((/* implicit */int) arr_8 [i_0] [(unsigned short)8] [4LL] [i_11]))));
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) (+(arr_25 [i_1 - 4] [i_0] [(signed char)0])));
                    arr_57 [4ULL] [i_0] = ((/* implicit */short) (+(arr_7 [(signed char)4] [i_11 + 1] [i_1 - 4])));
                }
                for (signed char i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                {
                    arr_62 [5ULL] [i_1] [i_11] [i_13] [(signed char)3] = ((/* implicit */int) arr_33 [i_13] [i_0] [i_0]);
                    arr_63 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-12)) ? (14767065214712147993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_64 [i_13] [(signed char)9] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_19 [i_0] [i_1 + 1] [i_11 + 1]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15031)) << (((12340006898004293062ULL) - (12340006898004293062ULL))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_0] [i_11 - 3] [i_0])) ? (((/* implicit */int) ((6791185174958665468LL) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)6])))))) : (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                {
                    arr_67 [i_0] [(signed char)8] [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */long long int) (+(8U)));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (unsigned short)42336))));
                }
            }
        }
    }
}
