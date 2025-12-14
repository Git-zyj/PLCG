/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217579
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((unsigned int) 3ULL)))))));
        var_14 = (signed char)-82;
        var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (2117430688U)))))) ? (((arr_1 [10] [i_0]) * (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)29771)), (-372385955))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)85)) : (var_0)))))) ? (((/* implicit */long long int) max(((+(arr_8 [i_0] [i_0] [i_0] [i_4 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-85)))))))) : (max((min((var_2), (((/* implicit */long long int) arr_14 [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-75)) && (((/* implicit */_Bool) var_2)))))))));
                                var_17 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 + 1]))) : (var_2)))));
                                var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_2 - 1] [i_1])) ? (1818303287U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 4) 
            {
                {
                    arr_27 [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_20 -= ((/* implicit */long long int) (unsigned char)3);
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_10] [i_9 - 2] [i_9 - 3] [i_9 - 3]) > (((/* implicit */int) var_11)))))) & (((unsigned int) 4294967295U))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */int) var_10);
                        arr_34 [i_11] [i_11] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-((~(((/* implicit */int) var_5))))))), (min((((/* implicit */long long int) ((int) var_2))), (var_3)))));
                        var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [5U])) + (2147483647))) >> (((arr_1 [15] [i_8]) - (2117430697U)))))))) ? (var_9) : ((~(max((((/* implicit */int) arr_22 [i_8] [i_11])), (var_9)))))));
                    }
                }
            } 
        } 
    } 
}
