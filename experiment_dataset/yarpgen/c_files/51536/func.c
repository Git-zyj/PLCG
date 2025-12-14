/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51536
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
    var_12 = var_0;
    var_13 *= ((/* implicit */short) ((unsigned short) 280049102U));
    var_14 ^= ((/* implicit */unsigned long long int) ((int) ((var_10) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) (-(1163786254U)))) ? (-1501020066761620584LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) var_7);
                arr_5 [i_1] = ((/* implicit */signed char) var_11);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(-4442442514290336268LL)))))))))));
                arr_6 [i_0] = 0ULL;
            }
        } 
    } 
}
