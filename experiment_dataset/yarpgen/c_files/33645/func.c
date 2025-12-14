/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33645
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
    var_12 = ((/* implicit */short) var_4);
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_3 [(unsigned char)18]);
                    var_15 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (short)-1)) + (-444579195))) - (-742805228)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) var_10))));
    var_17 += ((/* implicit */unsigned char) max((max((-742805221), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)1))));
}
