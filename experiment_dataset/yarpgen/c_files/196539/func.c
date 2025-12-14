/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196539
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
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    arr_11 [i_2] [i_1 + 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5184)))))));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (var_3)));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~((+(((/* implicit */int) (short)87)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (((2283176218U) * (((/* implicit */unsigned int) arr_3 [i_5]))))))));
                    arr_20 [i_5] [11U] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_0 - 2])) ? (arr_8 [i_1 + 1] [i_1 + 3] [i_0 + 1]) : (((/* implicit */long long int) 2011791081U))))) ? (max((arr_8 [i_1 + 1] [i_1 - 1] [i_0 + 1]), (arr_8 [i_1 + 3] [i_1 - 2] [i_0 + 3]))) : (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_1 - 2] [i_1 + 2] [i_0 + 3])))));
                    arr_21 [i_5] [7U] [i_0] = ((/* implicit */unsigned char) ((max((arr_18 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]), (arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 - 2]))))))));
                }
                var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_0 + 2] [i_0]) : (((/* implicit */long long int) arr_18 [(unsigned short)2] [i_1 + 3] [i_0 - 1] [i_0])))) / (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0] [i_0 + 3])) * ((-(((/* implicit */int) var_5)))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
