/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51961
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((var_18) & (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)1)))) : (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                var_21 = ((((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((min((((/* implicit */int) (_Bool)1)), (1263864858))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_13))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) var_11)), (var_3)))))) : (var_13)));
}
