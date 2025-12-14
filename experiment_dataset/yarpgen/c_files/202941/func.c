/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202941
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
    var_10 &= ((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (var_3)));
                    var_12 = ((/* implicit */signed char) ((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9)))));
                }
            } 
        } 
    } 
    var_13 |= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) < (((((/* implicit */_Bool) (~(var_0)))) ? (6835762950290677843LL) : (max((var_0), (9223372036854775806LL))))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) -1079105951)), (((long long int) -9223372036854775805LL))));
}
