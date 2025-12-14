/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52095
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (1ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_12))))))));
                var_17 &= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_10)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (-(var_13)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) 11ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((max((var_4), (var_12))) > (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))), (var_1)));
    var_20 |= var_12;
}
