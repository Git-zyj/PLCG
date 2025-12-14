/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44807
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) (short)-32760);
                arr_5 [i_1] = ((/* implicit */_Bool) arr_1 [(short)16] [i_0]);
            }
        } 
    } 
    var_14 *= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_9)))))), (min((((/* implicit */int) min(((unsigned short)47896), (((/* implicit */unsigned short) (signed char)7))))), (((((/* implicit */int) (unsigned short)27675)) | (((/* implicit */int) var_3))))))));
}
