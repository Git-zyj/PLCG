/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215016
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
    var_20 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_3 [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1])))))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [4ULL] [i_1 - 2])) ? (1201331310) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_2])) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))), (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2])))))))))));
                    var_23 = ((/* implicit */signed char) min(((~(arr_5 [i_0] [i_1 - 1] [i_1 - 1]))), (((arr_5 [i_1] [i_1 - 2] [i_1 - 1]) >> (((arr_5 [i_1] [i_1 - 2] [i_1 - 1]) - (1322501632)))))));
                    arr_7 [(signed char)3] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((arr_3 [i_1 + 1]), (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (short)896)) : (-87721948)))));
                }
            } 
        } 
    } 
}
