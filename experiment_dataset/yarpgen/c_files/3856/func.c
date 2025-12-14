/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3856
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
    var_12 += ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), ((-(var_3))))) < (((/* implicit */long long int) var_11))));
    var_13 = ((/* implicit */short) (+(((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_11)))) | ((~(var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_7)), (min((min((((/* implicit */unsigned int) var_6)), (var_9))), (((/* implicit */unsigned int) var_2))))));
                    var_15 = (-(((((/* implicit */_Bool) var_9)) ? (var_3) : (var_8))));
                }
            } 
        } 
    } 
}
