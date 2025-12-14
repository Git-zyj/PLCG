/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239261
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
    var_16 = ((/* implicit */int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_17 = ((/* implicit */long long int) ((((var_10) | (((/* implicit */int) var_4)))) ^ (((((/* implicit */int) var_14)) | (((((/* implicit */_Bool) -836248728)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (3846874999741581647LL)));
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
            }
        } 
    } 
}
