/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213646
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_0)), (max((28ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 3] [i_1] [9U] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_4)))), (((((/* implicit */unsigned long long int) 1683966414U)) | (18446744073709551605ULL)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)254)), (var_11)))), (arr_4 [i_0 - 1] [3LL] [3LL])))) : (((/* implicit */int) ((unsigned char) -3434077820856162531LL)))));
                var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))));
                var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) var_14))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))), (((((/* implicit */int) arr_1 [i_0] [4LL])) - (((/* implicit */int) arr_0 [i_0])))))) : ((-((-(-812358254)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((50ULL) >> (28ULL))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_1))));
}
