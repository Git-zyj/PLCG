/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24034
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
    var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : ((+(5558955722473113733ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) >> (((/* implicit */int) (short)0))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((unsigned int) var_16)) - (8U))))))));
                    arr_11 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (_Bool)0);
                }
            } 
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
    var_20 *= ((/* implicit */unsigned long long int) var_8);
}
