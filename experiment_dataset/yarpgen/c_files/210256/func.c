/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210256
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
    var_19 *= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)29102)), (1216266999)))) : ((+(13186657164082083960ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) var_14);
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1]))) >= (max((min((11859847300588570737ULL), (5260086909627467663ULL))), (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_15))));
}
