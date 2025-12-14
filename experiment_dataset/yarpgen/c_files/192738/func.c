/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192738
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 *= ((/* implicit */unsigned char) var_2);
        var_11 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */long long int) 709732092U)), (max((((/* implicit */long long int) arr_1 [i_1])), (arr_2 [i_1] [i_1]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(arr_4 [i_2 + 1]))))));
            arr_6 [i_2] [i_2] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (signed char)-91)), (arr_0 [i_1]))), (((/* implicit */unsigned int) var_9))));
            var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((arr_0 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (arr_0 [i_2])))));
            var_15 = ((/* implicit */signed char) max((((long long int) max((arr_4 [i_2 - 1]), (((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) ((int) arr_2 [i_2 + 3] [i_2 + 2])))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-81)) - (arr_5 [i_2 + 1] [i_2 + 3])))) - (((((/* implicit */long long int) arr_5 [i_2 + 1] [i_2 + 3])) - (arr_2 [i_2 + 1] [i_2 + 3])))));
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_9 [i_3] = ((/* implicit */signed char) arr_2 [i_1] [i_3]);
            arr_10 [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1])), (min((((/* implicit */int) var_6)), (min((((/* implicit */int) (signed char)-113)), (arr_5 [i_1] [i_3])))))));
        }
    }
    var_17 = var_2;
}
