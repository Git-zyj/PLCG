/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219837
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned int) (+(max((4385079545432793975LL), (((/* implicit */long long int) (signed char)-55))))));
            arr_7 [i_1] = ((/* implicit */short) max((((arr_6 [i_0 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))))), (((unsigned int) -1))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_0 [i_0 - 2] [i_0 + 3]) : (arr_1 [i_0 - 1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_6 [i_0 - 1])) != (arr_12 [i_0 + 2] [i_2] [i_3] [i_3])));
                arr_14 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_3]))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                arr_18 [i_0] [i_2] [i_0] = ((/* implicit */int) (+(arr_13 [i_0 + 1] [i_2] [i_4 + 2] [i_4 + 1])));
                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) -1));
            }
            for (short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_4 [5LL] [i_0] [i_0 + 2]);
                    arr_25 [i_6] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_0 + 2] [i_0] [i_0 - 1] [i_0]));
                }
                arr_26 [i_0] [8ULL] [(signed char)9] [i_2] = ((/* implicit */signed char) arr_0 [i_0] [i_0 - 2]);
            }
            for (short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
            {
                var_22 += ((/* implicit */unsigned int) (~(arr_16 [i_0 + 2] [i_0 + 3])));
                arr_30 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_17 [i_0 - 1] [i_0 + 3] [i_2] [i_2]) >> (((arr_17 [i_0 - 2] [i_0 - 1] [(_Bool)1] [i_2]) - (13589167617627140567ULL)))));
            }
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0 - 2] [i_9 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0 + 3] [0] [0]))))))))));
                            arr_39 [0] [0] [i_0] &= ((/* implicit */int) (-(arr_34 [i_9 - 1] [i_9 - 1] [i_9])));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [10LL] [i_10])) ? (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_22 [i_0] [i_2] [i_8] [i_9] [(signed char)12] [i_10]))) : (((/* implicit */unsigned int) arr_15 [i_9 - 1] [i_2])))))));
                        }
                        var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [i_0 - 2] [(_Bool)1])) : (((/* implicit */int) arr_24 [14LL] [i_0 - 2] [(unsigned char)13]))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_11 = 2; i_11 < 13; i_11 += 4) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_11 + 3] [i_11 + 3]), (var_11)))) ? (arr_15 [i_11 + 2] [i_11 + 1]) : (((((((/* implicit */int) arr_5 [i_11] [i_11] [i_11])) + (((/* implicit */int) arr_5 [i_11 + 3] [i_11 - 1] [i_11])))) + (((/* implicit */int) arr_2 [i_11 - 2] [i_11 + 1]))))));
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned char) arr_37 [i_11] [i_11] [9ULL] [i_11] [i_11 + 1]);
    }
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) var_8);
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_50 [(signed char)1] = ((/* implicit */_Bool) var_2);
                    var_29 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_49 [i_14] [i_13] [i_12] [i_12])) ? (((/* implicit */int) arr_49 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_49 [i_14] [i_13 - 1] [i_12] [i_12])))), (((((/* implicit */int) arr_49 [i_12] [i_12] [i_12] [i_12])) ^ (((/* implicit */int) arr_49 [i_14] [i_13 - 1] [i_13 - 1] [3ULL]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            {
                                arr_59 [i_15] [(unsigned short)6] [i_13] = ((/* implicit */int) ((arr_20 [i_12] [3U] [i_15] [i_16]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_16] [i_15 + 1] [i_13] [i_13] [i_13] [i_12])) ? (((arr_20 [(signed char)10] [i_13 + 1] [i_13] [15ULL]) ? (((/* implicit */int) (unsigned char)255)) : (var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_14] [i_15 - 2] [i_12])))))))) : (((min((((/* implicit */long long int) var_14)), (arr_47 [i_12] [i_13] [i_12]))) | (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_12])))))));
                                arr_60 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) arr_52 [i_16] [i_15] [i_14] [i_13] [5ULL]);
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */short) arr_44 [i_12] [i_12]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((int) var_10))));
}
