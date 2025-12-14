/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230295
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))));
                var_11 = ((/* implicit */signed char) 14376553285099575819ULL);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((14376553285099575824ULL), (max((min((var_7), (((/* implicit */unsigned long long int) arr_1 [6ULL] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1])), (arr_2 [i_0]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_8))));
}
