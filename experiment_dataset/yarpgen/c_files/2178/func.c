/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2178
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((unsigned long long int) (signed char)63))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (max((arr_1 [(signed char)6]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0] [i_0])), ((-(((/* implicit */int) var_8)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_2)), (arr_2 [i_1] [i_1 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) min(((signed char)63), ((signed char)1)))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))) : (var_3)));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [(signed char)12] = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) arr_0 [i_0]))), (((arr_9 [i_2 - 1] [i_1 + 1] [i_2 - 1] [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9919))) : (arr_10 [i_2] [i_2] [i_2 - 1] [i_2])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            var_14 |= ((/* implicit */int) ((unsigned long long int) (!(arr_9 [i_4] [i_2 - 1] [i_4] [i_2 - 1]))));
                            var_15 = ((/* implicit */unsigned char) 255);
                            arr_15 [13LL] [13LL] [i_2] [i_2] = ((/* implicit */int) min((((unsigned long long int) var_10)), (((unsigned long long int) var_7))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_16 -= ((/* implicit */short) 255);
                            arr_20 [10U] [i_2] [i_2] [9LL] [i_5] = (!(((/* implicit */_Bool) (short)15)));
                            arr_21 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_2] [(unsigned short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_2 - 1] [i_1] [i_2 - 1] [i_2] [i_5 - 1])) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2] [i_2])))))));
                        }
                        arr_22 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) (signed char)69))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3002268977344922285ULL)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) : (arr_19 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))));
                    }
                } 
            } 
        }
        var_17 = ((/* implicit */unsigned short) var_0);
    }
    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (1356394355U))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) (signed char)63))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_6]))) : (var_6)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) max((255), (((/* implicit */int) (signed char)-1))))), (var_5)))) : (var_3)));
        var_19 ^= ((/* implicit */unsigned long long int) arr_24 [i_6 + 2] [i_6 - 1]);
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-8)), (-1LL)));
    }
    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) arr_18 [i_7] [i_7 + 2] [i_7] [i_7 - 1] [i_7]);
        var_21 = ((/* implicit */unsigned int) max((var_21), (min(((+(((((/* implicit */_Bool) 4092084887565511515ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (1238781969U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)233)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) arr_38 [i_9]));
                        arr_42 [i_8 - 2] [i_8] [i_8 - 2] [i_8] = ((/* implicit */signed char) var_11);
                        var_23 = ((/* implicit */_Bool) ((unsigned int) var_1));
                        var_24 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_9] [(signed char)15] [i_9])) ? (((/* implicit */int) arr_16 [i_8] [i_9] [i_10] [i_10 + 1] [i_9] [i_11])) : (((/* implicit */int) (signed char)-16)))));
                    }
                } 
            } 
            arr_43 [i_8 - 1] [i_9] = ((signed char) arr_12 [i_8] [i_8 - 1] [i_9] [i_9] [(signed char)14]);
            var_25 = ((/* implicit */unsigned char) (signed char)-7);
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_49 [i_13] [i_12] [i_12] [i_12] [i_9] [i_8] = ((((/* implicit */_Bool) var_13)) ? (arr_39 [i_9] [(signed char)2] [i_9] [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                        arr_50 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_12] [10U])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (unsigned char)1))));
                        var_26 = ((/* implicit */unsigned long long int) var_1);
                        arr_51 [i_8] [i_12] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_40 [6U] [6U] [i_9] [i_8])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_25 [i_13] [(signed char)1]))));
                    }
                } 
            } 
            arr_52 [3LL] = ((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_8 + 2] [i_8 - 1])) & (var_13)));
        }
        for (int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((unsigned char) arr_32 [i_14] [i_14]));
            var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14]))) < (((6355494736970877526LL) - (var_13)))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 4) 
        {
            var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 2])) ? (262) : (((/* implicit */int) arr_33 [i_15 + 1]))));
            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [(unsigned char)0]))));
            arr_58 [i_8] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8] [4ULL])) << (((((/* implicit */int) (unsigned short)4148)) - (4133)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (7771601636045039177ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_8] [(_Bool)1])))));
        }
        var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_8] [i_8] [(signed char)6] [i_8])) < (((/* implicit */int) var_11))));
    }
    var_32 = ((/* implicit */unsigned long long int) 2133410057U);
}
