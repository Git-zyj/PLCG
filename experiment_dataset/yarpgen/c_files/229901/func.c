/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229901
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-((~((~(var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [2U] [i_2] [i_3] = min((((((unsigned int) var_5)) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]))))) ? (max((((/* implicit */int) arr_4 [14LL] [i_3] [i_1] [i_0])), (var_2))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_5)))));
                                arr_13 [i_2] [i_2] [i_2] [i_3] [i_2] [5U] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) var_1)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [7U] [i_2] [i_4])))))), (max((((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (max((((/* implicit */unsigned long long int) (unsigned char)54)), (3527359601498211124ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_12 = ((/* implicit */int) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_22 [i_6] [i_6] [i_7] |= var_4;
                    arr_23 [i_6] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_19 [i_6])));
                }
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (short)-19))));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_10 = 4; i_10 < 12; i_10 += 4) 
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (arr_29 [i_10] [i_5] [i_9] [i_10 - 4] [i_10 - 1])))) ? (((/* implicit */unsigned long long int) var_5)) : (arr_15 [i_8 - 1]))))));
                                var_15 = ((/* implicit */long long int) var_7);
                            }
                            /* vectorizable */
                            for (unsigned short i_11 = 1; i_11 < 11; i_11 += 2) 
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_21 [i_5] [i_5] [i_5] [(unsigned char)3]) - (((/* implicit */int) arr_8 [i_8 - 1] [i_11 + 1] [i_11 + 3])))))));
                                arr_34 [i_5] [i_5] [i_11] [i_9 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_9] [i_11])) + (((/* implicit */int) arr_25 [i_5] [i_9 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4))))) : (((/* implicit */int) arr_10 [i_11] [i_6] [i_11] [i_9 + 1] [i_11 + 2] [i_11]))));
                            }
                            arr_35 [i_5] [i_6] [i_8 - 1] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9]))) : (min((arr_19 [i_9]), (((/* implicit */unsigned long long int) var_2))))))) || (((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_5] [i_8 + 1])) / (((/* implicit */int) arr_0 [i_9 + 1] [i_6])))), (((/* implicit */int) min((arr_18 [(unsigned char)10]), (arr_5 [i_5]))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (~(var_8)));
            }
        } 
    } 
}
