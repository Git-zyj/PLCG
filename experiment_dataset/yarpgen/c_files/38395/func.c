/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38395
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
    var_17 = var_1;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_12 [i_0 + 1] [i_0] [i_0] = ((((arr_5 [i_0 + 2] [i_1]) ^ (arr_5 [i_0 - 2] [i_1]))) & (arr_5 [i_0 - 2] [i_1]));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (arr_8 [i_0] [i_0] [9ULL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [0U]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [2U])) ? (arr_4 [i_0] [15] [i_3]) : (var_11)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [12U] [i_1] [i_2]), (((/* implicit */unsigned int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) < (arr_4 [i_1] [i_1] [i_1]))))))))))));
                        var_19 = arr_11 [i_0] [i_1] [11U] [(unsigned char)7] [(signed char)1] [i_0];
                    }
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) 1116334040U)) || (((/* implicit */_Bool) -2103071629)))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17433))) != (((unsigned long long int) (_Bool)1))));
    var_22 = ((/* implicit */short) var_8);
}
