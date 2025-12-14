/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249486
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
    var_13 = ((/* implicit */unsigned long long int) ((((long long int) (unsigned char)192)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) min(((unsigned char)193), (((/* implicit */unsigned char) (signed char)47))))) - (47)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = (unsigned char)83;
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)172)) >= ((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-89)), ((unsigned char)51))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (unsigned char)228);
}
