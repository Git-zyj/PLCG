/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202928
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_1), (var_1)));
                var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (var_8)))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_7)))), ((~(arr_4 [i_0] [i_1] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(short)12] [i_1] [i_2]))))) ? ((~(((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_2])))) : (((/* implicit */int) min((var_1), (((/* implicit */short) var_0)))))));
                                arr_15 [i_4] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (((((/* implicit */_Bool) (-(arr_12 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)11] [(unsigned char)11] [(_Bool)1]))))) : (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_11 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1]);
                                var_13 -= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)0] [(signed char)2] [10ULL] [i_5] [i_5 + 2] [i_5])))))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 3] [i_7 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_6 [i_0] [i_7])))))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_5 + 2] [i_5] [i_7 - 1])) : (((/* implicit */int) arr_14 [i_7 + 1] [i_6 + 2] [i_6 + 1] [i_5] [i_1] [(short)16] [i_0]))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (-((~(((/* implicit */int) var_4))))));
}
