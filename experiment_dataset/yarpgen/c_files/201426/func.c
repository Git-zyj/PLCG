/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201426
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
    var_20 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_0 [(short)4])), (((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_2] [i_1] [i_2] [2U] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)6] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                                var_22 = ((/* implicit */unsigned int) arr_7 [i_4] [i_1] [i_2] [i_3]);
                                var_23 = (-(min((((/* implicit */unsigned int) var_4)), (arr_10 [i_4] [0ULL] [i_2] [i_1] [i_0]))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (arr_6 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(unsigned short)4])))))));
                        var_26 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_1])), ((~(arr_3 [i_0] [i_0] [i_0])))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_16 [(_Bool)0] [i_6] [2ULL] [i_6] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_8))))));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_0 [i_0])) : (arr_3 [i_0] [i_1] [7ULL])))) : ((+(arr_12 [(signed char)2] [i_6] [i_6] [i_6] [i_6] [i_1]))))))));
                        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)5] [i_1] [i_2] [i_2] [i_6])))))));
                    }
                    var_29 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
}
