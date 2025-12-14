/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4220
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
    var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))) : (-1LL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [(short)13] [i_0] = var_4;
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_4)))))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-27)))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)230)) | (((/* implicit */int) var_9)))) | ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0] [(_Bool)1] [(signed char)6]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((long long int) (short)26032))));
            var_19 ^= ((/* implicit */short) var_8);
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (562949952897024LL)));
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (+(arr_16 [i_0] [i_0] [i_0] [i_0])));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [0ULL] [i_4] [i_4 + 2] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2]))));
                            var_23 += ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11572))) : (arr_12 [i_5] [i_2] [(signed char)9] [i_4])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0] [(short)12]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2])))));
                arr_21 [i_0] [i_0] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_0] [i_2]))));
            }
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) var_8);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                for (signed char i_9 = 4; i_9 < 12; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                            arr_34 [i_0] [i_9 + 3] = ((/* implicit */int) ((arr_13 [i_8 + 1] [i_9 + 2] [i_9 - 1] [i_10] [i_8 + 1] [(signed char)6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 + 1] [i_9 + 2] [i_9 - 1] [6ULL])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_37 [(unsigned short)4] [i_11] [i_0] = ((/* implicit */_Bool) ((0U) >> (((/* implicit */int) (signed char)30))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                for (signed char i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */long long int) ((((13295382097085735330ULL) <= (arr_13 [i_0] [i_0] [i_12] [i_11] [(_Bool)1] [i_0]))) ? (((/* implicit */int) ((arr_26 [i_0] [2ULL] [3] [3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [11LL] [i_11] [i_12])))))) : (((/* implicit */int) arr_27 [i_0] [i_12] [i_13 + 1]))));
                        var_28 = ((/* implicit */_Bool) -416272729);
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-10298)) >= (((/* implicit */int) (signed char)-31)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_0))))) : (var_10)));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [(signed char)6] [(signed char)6] [(signed char)6] [13ULL] [3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13] [i_13 - 1] [i_13 + 2]))) : (0ULL)));
                    }
                } 
            } 
            var_31 = ((/* implicit */short) (+(4307128618558131429ULL)));
        }
        arr_45 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_4)))))))) ? (((/* implicit */unsigned long long int) ((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_35 [i_0] [i_0])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_7))))));
    }
}
