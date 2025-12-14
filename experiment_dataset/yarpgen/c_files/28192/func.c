/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28192
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
    var_11 *= ((/* implicit */unsigned long long int) (short)32765);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) 127)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (var_8))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 8000560161148186826LL)) ? (((/* implicit */int) (signed char)-1)) : (var_7))))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) 105)) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26206)) || (((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned char) (signed char)-121)))))));
                }
            } 
        } 
    } 
}
