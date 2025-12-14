/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21309
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2)))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 6904121597945679704ULL)))))))), (max((((/* implicit */unsigned int) var_8)), (4294967295U)))));
    var_11 = ((/* implicit */signed char) (-((-(((int) (unsigned char)202))))));
    var_12 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (var_4)))) < (var_8))))));
    var_13 = max((var_0), (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (arr_5 [i_0])));
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0]))) ? (min((7507513053602479342LL), (((/* implicit */long long int) (~(var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
        } 
    } 
}
