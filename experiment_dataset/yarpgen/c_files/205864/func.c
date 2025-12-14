/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205864
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_3] [i_0] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max((arr_4 [i_1 + 4] [i_0 - 2]), (((/* implicit */int) arr_0 [i_1 + 4] [i_1]))))));
                            arr_9 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (1639819681)));
                            var_15 = ((/* implicit */signed char) (-(arr_3 [i_2] [i_3] [(unsigned char)1])));
                            var_16 = ((/* implicit */int) var_14);
                            /* LoopSeq 3 */
                            for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                                var_18 = ((/* implicit */int) var_7);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) 
                            {
                                arr_14 [i_3] [i_3] [i_0] [i_3] [i_5] = ((/* implicit */unsigned long long int) var_10);
                                var_19 += ((/* implicit */int) arr_0 [i_0] [(signed char)11]);
                            }
                            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                arr_17 [i_3] [i_6] = ((/* implicit */signed char) arr_1 [i_1]);
                                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((arr_5 [i_0 - 1] [(signed char)0] [6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) << (((arr_7 [i_3 - 1] [i_0 - 1] [i_0 - 2] [(signed char)7]) - (7374241120751809143ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) ^ ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [14ULL])))))))));
                                arr_18 [i_0] [5] [i_0] [i_0] [i_3] [i_0] [i_0 - 1] = ((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0]);
                                arr_19 [i_0] [i_3] [i_3] [i_3 - 1] [i_6] = min((((int) ((((/* implicit */int) arr_1 [i_0])) + (arr_10 [i_3 + 1] [i_3] [i_3 - 1] [4] [i_3 - 1])))), ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))));
                            }
                        }
                    } 
                } 
                var_21 = arr_4 [i_1] [i_0];
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 4; i_7 < 11; i_7 += 4) 
    {
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_15 [i_8 - 1] [i_8] [i_8] [i_8 + 3] [i_7 - 2] [i_7 - 4] [i_7 - 3]), (arr_15 [i_8 + 1] [i_7 - 1] [i_8 - 1] [i_8 + 3] [i_7 - 3] [8] [i_7 - 1]))))));
                arr_25 [i_7 + 1] [11] = ((/* implicit */signed char) var_8);
                var_23 = arr_20 [i_7 - 2] [(unsigned char)0];
                var_24 = ((/* implicit */unsigned long long int) (-(((int) arr_21 [i_7 - 4] [i_7 - 3]))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                            {
                                var_25 += ((/* implicit */signed char) (unsigned char)43);
                                arr_34 [i_7] [i_7 + 1] [i_11] [i_7 + 1] [0ULL] = ((((/* implicit */_Bool) ((arr_20 [i_8] [i_8 + 3]) | (arr_20 [i_8] [i_8 + 3])))) ? (min((max((((/* implicit */unsigned long long int) (unsigned char)126)), (15360ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_8) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) arr_10 [i_7] [i_8 + 3] [6ULL] [(unsigned char)15] [i_11])));
                                arr_35 [i_11] [(signed char)5] [i_8 - 1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)213)) <= (var_8)))) ^ (((/* implicit */int) (signed char)75))))), (((((/* implicit */_Bool) 18446744073709536256ULL)) ? (((/* implicit */unsigned long long int) 717816499)) : (2147483647ULL)))));
                                var_26 -= ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12445736227517806292ULL)) ? (32767) : (max((1595037692), (237833378)))))));
                                arr_36 [i_7] [7] [i_8] [(unsigned char)11] [i_9] [i_11] [i_11] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [(unsigned char)11]))) * (arr_5 [i_7 - 4] [i_8 + 2] [15]))))) < ((+(arr_7 [i_7] [i_10 + 1] [(signed char)15] [i_7 + 1])))));
                            }
                            var_27 -= ((/* implicit */int) max((arr_11 [i_7 - 1] [i_8] [i_9] [i_8] [i_10] [i_7] [i_9]), (arr_13 [i_7 - 3] [(unsigned char)12] [12ULL])));
                            /* LoopSeq 3 */
                            for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                            {
                                var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_11 [i_7] [i_8] [i_9] [i_10 + 1] [i_8 + 3] [i_12] [i_10 - 1])))));
                                arr_41 [2] [(signed char)5] [i_9] [i_9] = max((((/* implicit */int) (unsigned char)117)), (237833378));
                                var_29 ^= ((int) (~(((/* implicit */int) arr_6 [i_10 - 1] [i_7 - 3]))));
                            }
                            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                            {
                                arr_44 [i_9] [10] [i_9] [8] [7ULL] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_13)))) ^ (-526741613)));
                                var_30 = min((arr_31 [i_13] [i_10 - 1] [i_9] [i_8] [i_7 - 4]), (((/* implicit */unsigned char) var_7)));
                            }
                            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                            {
                                var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) ((unsigned char) (unsigned char)121))) ? (4186112) : (((var_9) - (((/* implicit */int) (unsigned char)117))))))));
                                var_32 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_8 + 3]))))));
                                var_33 = ((/* implicit */int) arr_3 [0ULL] [i_8 + 1] [12ULL]);
                                var_34 -= ((/* implicit */unsigned char) (+(arr_33 [4] [i_8 + 2] [i_9] [i_10 + 1] [i_8 + 2] [i_8 + 2] [i_14])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) var_0);
    var_36 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))))))));
}
