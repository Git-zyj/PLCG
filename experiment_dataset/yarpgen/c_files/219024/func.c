/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219024
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1 + 1] [18LL] [(short)19] = ((/* implicit */int) max((((unsigned short) min((((/* implicit */long long int) 1620930729)), (arr_0 [i_0])))), (((/* implicit */unsigned short) (_Bool)1))));
                arr_6 [i_1] [(short)18] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (-4902994360587644065LL) : (((/* implicit */long long int) (-2147483647 - 1))))))), (max((var_10), (((/* implicit */unsigned long long int) ((2147483647) & (((/* implicit */int) var_6)))))))));
                var_13 |= ((/* implicit */unsigned int) min(((-(-737697427))), (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_10);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_1)), (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_4)), (16789119252138846882ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))) ? (max((8344546053007126309LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) var_6))))))))));
}
