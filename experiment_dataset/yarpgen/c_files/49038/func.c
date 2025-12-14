/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49038
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 3]))));
                var_13 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_1 [(unsigned short)8] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                var_14 = ((/* implicit */short) var_3);
            }
        } 
    } 
    var_15 = (signed char)-21;
    var_16 = ((/* implicit */unsigned short) (+(((7657826000670708576ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32256), (((/* implicit */unsigned short) var_7))))))))));
}
