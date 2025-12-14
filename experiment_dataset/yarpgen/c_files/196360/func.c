/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196360
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (!(arr_1 [i_0])))) ^ (arr_0 [i_0] [i_0 - 1]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) max((((((var_2) & (var_0))) ^ (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_6 [i_1] [i_1] [i_1]))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(var_9))))));
                arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_12)) >> (0U))) / (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                var_17 = ((/* implicit */long long int) arr_9 [i_2 + 1] [i_0]);
                arr_11 [18ULL] [i_0] [i_2] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                arr_12 [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((signed char) arr_2 [i_2 + 3] [i_0 - 1])));
            }
            for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                arr_15 [i_0] [i_1] [(short)21] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_12)))) + (((/* implicit */int) max((var_6), (var_6)))))), (((((/* implicit */_Bool) arr_5 [i_3 + 3])) ? (((/* implicit */int) arr_5 [i_3 - 2])) : (((/* implicit */int) var_12))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((var_9) % (var_5))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((signed char) (+(var_2))))));
                arr_16 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_0] [i_0]))) * (var_15))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 + 1])) ? (var_8) : (((/* implicit */int) var_13)))))))));
            }
        }
        arr_17 [i_0] = max((((((/* implicit */_Bool) var_15)) ? (((arr_6 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)6]))))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                arr_24 [i_4] = ((/* implicit */short) arr_4 [i_4] [i_4]);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((var_1) + (((/* implicit */unsigned long long int) arr_0 [i_4] [i_5])))) : (((/* implicit */unsigned long long int) max((arr_0 [i_4 + 1] [i_5]), (arr_0 [i_4] [i_4 + 2])))))))));
                var_21 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_4 - 2]))) : (var_5))), (((/* implicit */long long int) arr_21 [i_5] [i_4] [i_4 + 2]))));
                arr_25 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_4])) / (var_8)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            {
                arr_33 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) * (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_20 [i_6 + 2]))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 4; i_8 < 8; i_8 += 3) 
                {
                    for (short i_9 = 3; i_9 < 7; i_9 += 3) 
                    {
                        {
                            arr_40 [i_6] [i_6] [9LL] [i_6] [i_6] [i_6] = ((/* implicit */signed char) max(((-(max((((/* implicit */unsigned long long int) arr_9 [i_6] [i_6])), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_35 [i_6])) : (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_6])) * (((/* implicit */int) var_7))))) : (arr_31 [i_6 - 1]))))));
                            arr_41 [i_6] [i_7] [i_8] [i_6] = var_2;
                            arr_42 [i_6] [i_7] [(signed char)1] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (arr_35 [i_6 + 2]))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (arr_35 [i_8 + 2])))));
                            var_23 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((unsigned short) 0U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_35 [i_6]))) * (((/* implicit */long long int) 2U)))), (((/* implicit */long long int) arr_39 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))))));
                            arr_49 [i_6] [i_6] [i_10] [i_11] = (signed char)-14;
                        }
                    } 
                } 
            }
        } 
    } 
}
