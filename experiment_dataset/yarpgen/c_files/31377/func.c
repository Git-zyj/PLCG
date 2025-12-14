/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31377
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (max(((!(((/* implicit */_Bool) var_13)))), (((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned char)173))))))));
    var_15 += var_6;
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_6))));
    var_17 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = (-(((((/* implicit */unsigned long long int) -2066084055)) / (((((/* implicit */_Bool) -430737532)) ? (var_2) : (((/* implicit */unsigned long long int) -2066084053)))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(8423630419399307574ULL))))));
                }
            } 
        } 
    } 
}
