/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22433
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) (unsigned char)255))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) var_6);
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) -134217728);
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) (unsigned char)191)))) ? (4095U) : (((unsigned int) var_0))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_10) / (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6538926777341157480LL)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_16)))))))) && (((/* implicit */_Bool) min((((unsigned long long int) (unsigned char)206)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))))));
}
