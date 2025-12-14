/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242534
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((min((3224157367337748096ULL), (((/* implicit */unsigned long long int) var_14)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (1851515800U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), (var_15)));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_7);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_10))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) var_11);
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(var_5)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_6);
}
