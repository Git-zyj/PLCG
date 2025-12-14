/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231431
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1])))) <= (((((/* implicit */_Bool) arr_5 [i_2] [14])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)61830))))));
                    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 2]))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) 8697356818132434207LL)) ? (min((((/* implicit */unsigned int) -282332679)), (33554432U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0 - 2])) - (((/* implicit */int) arr_6 [i_0 - 2] [(signed char)4] [i_0]))))))), (((/* implicit */unsigned int) max((arr_2 [i_0]), ((+(((/* implicit */int) var_3)))))))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_5 [i_3] [i_3]);
                    /* LoopSeq 4 */
                    for (short i_6 = 2; i_6 < 6; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((signed char) (-(min((((/* implicit */long long int) var_4)), (arr_1 [(short)9] [i_4]))))));
                        arr_20 [i_3] [i_3] [1ULL] [i_5 + 3] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (arr_16 [i_3] [i_3] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) var_8);
                        var_17 = ((/* implicit */long long int) ((((arr_22 [i_4] [i_4] [i_4] [i_7 + 1] [i_7]) == (((/* implicit */int) arr_8 [i_4] [i_5] [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3] [i_4])) * (((/* implicit */int) arr_18 [i_3])))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_3))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        var_19 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (((arr_14 [1] [i_4]) << (((33554433U) - (33554375U)))))))) != (min((max((var_2), (282332678))), (((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                        var_20 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 + 1])) << (((((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 + 1])) - (103))))));
                        var_21 ^= arr_6 [i_5] [i_5] [i_5];
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_11))))));
                        var_23 = ((/* implicit */long long int) arr_26 [i_3] [(signed char)5]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */int) (((+(-1))) != (((/* implicit */int) ((arr_0 [i_3] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [1] [i_5] [i_5]))))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_4]);
                        }
                        var_26 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_4 [i_3] [i_4])))) ^ (((/* implicit */int) arr_23 [i_4] [i_4] [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_5 - 2]))));
                        var_27 = ((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_5] [i_9] [i_9]);
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_3))));
}
