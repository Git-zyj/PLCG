/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207323
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
    var_15 = ((/* implicit */signed char) (((~(var_11))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((-3377419468733207479LL), (3377419468733207478LL))) : (((((/* implicit */_Bool) 3377419468733207478LL)) ? (-3377419468733207471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_16 |= (~((+(max((-3377419468733207471LL), (-3377419468733207471LL))))));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((int) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 341361659)), (max((3377419468733207478LL), (3377419468733207499LL)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (-341361660)))) ^ (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_19 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((long long int) var_6)));
                    var_20 = ((/* implicit */int) (+((~(((1544661164U) * (536870911U)))))));
                }
            } 
        } 
    } 
}
