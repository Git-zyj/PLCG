/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224079
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) ? (((((/* implicit */int) ((arr_5 [i_2 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [7LL] [2LL])))))) << (((min((((/* implicit */long long int) var_1)), (288230101273804800LL))) - (3248970059LL))))) : (var_7)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        var_20 = ((816383166891857278LL) << (((((((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3] [i_3] [4LL] [(unsigned short)0])) + (36))) - (16))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-28);
                        var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) && (((/* implicit */_Bool) var_18)))), (((arr_7 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */unsigned long long int) var_7)))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_10 [i_0] [i_0] [i_1] [i_2] [8LL]) > (((/* implicit */long long int) ((/* implicit */int) var_15))))))))) ? (35184372088831LL) : (max((((((/* implicit */_Bool) var_7)) ? (-156614167285881683LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 - 1] [(short)12] [i_1]))))), (arr_4 [i_0] [i_0] [i_2]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_23 ^= ((/* implicit */int) (((~(arr_11 [i_2 - 1] [i_4] [i_5] [i_4] [i_5]))) == (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) 3200365030U)), (((/* implicit */unsigned short) arr_6 [i_1] [i_2 - 1] [i_5]))))))));
                            var_24 = ((/* implicit */unsigned int) max((arr_4 [(signed char)14] [i_2 - 2] [i_2 - 1]), (min((arr_4 [i_0] [i_2 - 1] [i_2 - 2]), (arr_4 [i_2] [i_2 - 2] [i_2 - 2])))));
                        }
                    }
                }
            } 
        } 
        var_25 = min((((/* implicit */long long int) ((((unsigned long long int) arr_2 [i_0] [i_0])) != (arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_26 = ((/* implicit */signed char) var_16);
}
