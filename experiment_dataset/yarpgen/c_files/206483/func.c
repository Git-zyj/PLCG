/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206483
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)28988)) ? (((var_17) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) -5673104468452913362LL)) : (31ULL))))))));
    var_20 = ((/* implicit */int) ((unsigned short) var_1));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)0)), (1568208338)))));
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) (~(1568208338)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 1568208338)) ? (((/* implicit */int) (unsigned short)36134)) : (((/* implicit */int) (unsigned short)57510)))) < ((-(-1568208339))))), (((((/* implicit */int) var_14)) <= (((/* implicit */int) var_18))))));
}
