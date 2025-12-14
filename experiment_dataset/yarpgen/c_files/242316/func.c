/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242316
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
    var_12 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (min((var_5), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_3] [i_2 - 1]);
                                var_13 = ((/* implicit */unsigned short) var_9);
                                arr_13 [i_3] [i_1] [(short)4] [(signed char)1] [i_4] = ((/* implicit */unsigned int) ((short) 3032898520U));
                            }
                            var_14 = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) ((short) arr_5 [i_1] [i_1]))), (((((/* implicit */long long int) var_1)) + (var_9))))));
                            var_15 += ((/* implicit */signed char) ((unsigned int) var_4));
                            var_16 &= ((/* implicit */short) ((unsigned int) 3032898520U));
                            arr_14 [i_0] [i_3] [7LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))) + (arr_5 [i_3 - 1] [i_2 - 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_6] [i_1] [i_1] [i_6] [(signed char)5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22755))) : (1262068786U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) / (var_11)))))) ? (((((/* implicit */unsigned long long int) arr_15 [i_0] [i_5 + 2])) | (arr_4 [i_0] [i_5] [i_5 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [2ULL] [i_1] [i_5] [(_Bool)1] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5])))))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_5]))) ? (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) arr_17 [i_0] [i_6] [i_1] [i_6] [i_0] [i_1]))))) : (((3032898520U) << (((arr_1 [i_0]) - (5407052765080403463LL)))))))) ? (min((((var_3) + (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))), (((/* implicit */long long int) ((_Bool) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            arr_19 [i_0] [i_0] [i_5] [i_0] = max((((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_5 + 1] [i_0] [i_6] [(_Bool)0]), (arr_11 [i_0] [i_5 + 1] [i_5 + 1] [i_6] [i_0])))), (max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */_Bool) arr_6 [i_0] [9U] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))));
                            var_19 = max(((-(((arr_7 [i_6] [i_5] [i_5 + 2] [i_0] [9]) >> (((arr_7 [i_0] [i_0] [i_5] [i_0] [i_0]) - (49855693))))))), (((/* implicit */int) ((var_10) <= (arr_16 [i_0] [i_5 + 2] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
