/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203976
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (~(arr_2 [i_1] [i_1 + 2])))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_8)))))));
                arr_5 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_1 - 1]), (arr_0 [i_0 - 1] [i_1 + 3]))))));
                var_12 = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_8))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned int) min((-7257737521231786765LL), (((/* implicit */long long int) (short)6283))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((var_2) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5940210532799601939LL)) ? (((/* implicit */int) var_5)) : (var_7)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_9)) & (var_6))))))));
}
