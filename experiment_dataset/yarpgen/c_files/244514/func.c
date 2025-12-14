/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244514
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
    var_16 = ((/* implicit */signed char) max((min((7313909146627931911ULL), (((/* implicit */unsigned long long int) 2254507124U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_2);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) ? (min((min((arr_2 [i_2] [i_1]), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (!(arr_4 [i_0 - 4] [i_0 - 1])))))) : (arr_2 [i_0 - 2] [i_2])));
                    arr_7 [i_0 - 4] [(unsigned char)19] [2U] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-7491)))))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_14))))) ^ (var_9)))) ? (((/* implicit */unsigned long long int) var_6)) : (min((((((/* implicit */_Bool) (short)-7502)) ? (3245344989036975517ULL) : (11132834927081619686ULL))), (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) var_2)))))))));
}
