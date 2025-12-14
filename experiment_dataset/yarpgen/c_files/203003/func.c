/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203003
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1])) - (((min((1023), (((/* implicit */int) (unsigned short)55085)))) / ((-(1023)))))));
                    var_12 -= ((/* implicit */unsigned char) (-((~(arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (+(var_9)));
}
