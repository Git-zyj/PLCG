/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45964
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] [i_1] = ((0) << (((var_4) - (748514549379475090ULL))));
                                var_12 *= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2]);
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3 - 2] [i_1 - 2] [i_3 - 2] [i_1 + 3])) | (-1)))) ^ (var_2)));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1])), (arr_9 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2] [i_1]))))) ? (((unsigned long long int) arr_11 [(unsigned short)16] [(unsigned short)16])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                arr_13 [i_1 - 2] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38001)) ? (((/* implicit */int) (unsigned short)58329)) : (10)))), (((long long int) arr_3 [i_0] [(unsigned short)19] [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
            }
        } 
    } 
    var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) (+(10)))) ? (((((/* implicit */unsigned long long int) (+(var_7)))) / ((-(var_0))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967295U)) ? (-2659992550604791086LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
}
