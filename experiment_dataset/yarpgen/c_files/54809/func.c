/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54809
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
    var_18 = var_2;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
                                var_19 = ((/* implicit */short) var_15);
                                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1])), (arr_7 [i_1 - 2] [i_1] [i_1 + 1])))) ? (((var_1) / (((/* implicit */unsigned long long int) 1814606212U)))) : (((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (arr_7 [i_1 - 3] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 - 2] [i_1 - 2] [16U] [i_1 + 1] [i_1] [i_1])))))));
                                arr_17 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (0LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 + 1]))))) : (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-3763))))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((max((var_13), (((/* implicit */unsigned int) var_16)))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 - 2] [(signed char)7] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) (+(arr_20 [i_0] [i_1])))), (((((/* implicit */_Bool) 4285897161584113465ULL)) ? (arr_7 [i_0] [i_1 - 1] [i_5]) : (((/* implicit */unsigned long long int) var_7)))))))))));
                    var_22 |= ((/* implicit */unsigned int) 3485962817938102296LL);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */short) min(((~(((var_13) << (((((/* implicit */int) var_9)) - (21989))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                                var_24 = ((/* implicit */unsigned int) var_16);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3485962817938102296LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (4285897161584113444ULL))))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57895)) ? ((-(((/* implicit */int) arr_28 [i_8] [i_9] [i_10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [9] [i_9] [i_9])))))))) / (((var_2) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_9 - 2]))))))))));
                    var_27 = ((unsigned short) (~(arr_7 [i_9 - 1] [i_9] [i_8 - 1])));
                }
            } 
        } 
    } 
}
