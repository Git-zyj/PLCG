/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211466
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((arr_2 [i_0] [(unsigned char)12] [i_2 - 3]), (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])), ((~(((/* implicit */int) var_2)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))), (((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (min((((/* implicit */int) var_7)), ((-(((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3])))))) : (((((/* implicit */int) arr_8 [2LL] [i_1 + 2] [i_2 + 2] [(short)0])) - (((/* implicit */int) arr_4 [i_1 + 4] [i_1 + 1] [i_2 - 3]))))));
                        var_13 = max((2104317430U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [12LL] [i_2] [i_0]))))));
                    }
                    arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) (-(arr_6 [i_2] [i_2 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [9U] [i_1] [i_2]))) : (var_4)))) ? ((-(arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43007))))) : (((long long int) arr_6 [i_1 + 1] [i_1 + 4] [i_1 + 3])));
                    arr_13 [i_1] [i_0] [i_0] [i_0] = (~(((/* implicit */int) var_3)));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */int) arr_8 [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_0])), ((+(((/* implicit */int) arr_9 [(short)6] [i_1 + 4] [(short)6])))))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) -3682634519266787558LL);
    var_16 = ((/* implicit */short) var_11);
}
