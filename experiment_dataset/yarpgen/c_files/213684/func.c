/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213684
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) arr_0 [i_0] [i_0]);
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [(unsigned char)9] [i_0 - 1])) * (((/* implicit */int) (signed char)-2))))))) ? (((/* implicit */int) (unsigned short)8191)) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((/* implicit */int) (signed char)-11)) : ((((_Bool)1) ? (var_11) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            var_14 = (~(((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_11 [i_0] [i_2 - 3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) ? (18446744073709551615ULL) : (18446744073709551615ULL)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((unsigned short) arr_2 [i_0 - 1]));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_5] [i_5])) << (((((/* implicit */int) arr_9 [i_0] [i_2] [i_3] [i_4] [i_5] [i_4])) - (112)))))) | (arr_13 [(unsigned short)3] [i_2] [(signed char)11] [i_3] [i_4 - 1] [i_5])));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((((((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 2] [i_0 + 4] [i_0] [i_0] [i_0] [(signed char)17])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))))) + (9223372036854775807LL))) >> (((((((arr_3 [i_0 + 1] [i_4 - 1] [i_6]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_4] [i_6])) - (181))))) - (414364LL)))))));
                            var_18 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_7 [i_2 - 2] [i_3] [i_2 - 2] [i_0])))) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-2)) != (((/* implicit */int) (unsigned short)8191)))))));
                        }
                        for (short i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            var_19 += ((/* implicit */short) 1ULL);
                            arr_19 [14LL] [6U] [6U] [i_4] [i_7] = (signed char)-26;
                            arr_20 [i_0] [i_0] [i_0] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 588202977)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0] [i_0] [i_0 + 3])) && (((/* implicit */_Bool) 35481397))))) : (((/* implicit */int) arr_9 [i_0] [i_2] [5ULL] [i_0 + 1] [i_4 - 1] [i_3]))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_3] [i_7 - 1] [4ULL] [i_4 + 1] [i_7 - 1])) ? (1023) : (((/* implicit */int) (unsigned short)44064)))))));
                            var_21 = ((/* implicit */unsigned short) ((signed char) arr_0 [i_0] [i_2]));
                        }
                        arr_21 [i_0] [i_0] [12ULL] [18ULL] [i_4 + 1] [i_4 - 1] = ((/* implicit */int) ((arr_13 [i_0] [i_0 + 4] [i_2 - 2] [i_4 - 1] [i_4 + 1] [(_Bool)1]) << (((arr_13 [i_0] [i_0 + 4] [i_2 - 3] [i_4 - 1] [i_4 - 1] [i_0 + 4]) - (6308681719385560980LL)))));
                        var_22 = ((/* implicit */short) arr_13 [i_4 + 1] [i_2 - 2] [i_3] [i_4] [i_2 - 3] [i_0 + 3]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_23 += ((/* implicit */short) 9223372036854775776LL);
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0 + 3] [i_2] [i_2] [i_0] [i_2 - 3] [i_0] [i_2])) + (((/* implicit */int) arr_14 [i_0 + 3] [i_2] [i_0 + 3] [i_8] [i_2 - 1] [i_0] [i_0 + 4]))));
            }
            /* LoopSeq 1 */
            for (signed char i_9 = 4; i_9 < 20; i_9 += 2) 
            {
                arr_27 [(signed char)8] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1] [i_2 - 1] [(unsigned short)13]) | (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0 + 3])))));
                arr_28 [(_Bool)1] [6LL] [i_2 - 1] [i_9 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_2 [i_0]))))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(short)7] [i_0] [i_0] [(short)7] [i_0 + 4])))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_9] [i_9] [i_11] [i_0]);
                            arr_34 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) arr_16 [(signed char)11] [i_2] [i_2] [i_10] [i_11] [i_2] [i_2]);
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15150)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))) : (arr_6 [i_0 + 1] [i_2 - 2])));
                            var_28 = ((/* implicit */unsigned char) 0U);
                            arr_35 [i_0] [i_2] [i_9] [i_2] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 3] [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 2]))));
                        }
                    } 
                } 
            }
            arr_36 [i_0 + 2] [i_2 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (signed char)1)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            arr_40 [i_0 + 4] [i_12] = ((/* implicit */_Bool) 18446744073709551596ULL);
            var_29 = (+(((((/* implicit */int) (!(((/* implicit */_Bool) 2305834213120671744LL))))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)-64)))))));
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        arr_43 [i_13] = ((/* implicit */unsigned char) 846170524U);
        var_30 = ((/* implicit */unsigned char) ((long long int) arr_41 [i_13]));
    }
    for (int i_14 = 4; i_14 < 20; i_14 += 2) 
    {
        arr_46 [i_14 - 1] [i_14 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [(unsigned char)13] [(signed char)11]))));
        var_31 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_14] [i_14 + 1])) && (((/* implicit */_Bool) arr_0 [i_14] [i_14])))))) <= ((+(3091517220539421634ULL)))))));
    }
    var_32 = ((/* implicit */long long int) (+(var_8)));
}
