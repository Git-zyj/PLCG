/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245187
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) max((1899437302U), (((/* implicit */unsigned int) (unsigned char)116))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_2))))) | (((((/* implicit */_Bool) var_0)) ? (10454958990179229419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    var_19 *= ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) var_2)), (var_13)))))));
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
}
