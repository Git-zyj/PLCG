/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228795
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
    var_11 = ((((/* implicit */_Bool) ((3019382013301877114ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_0)))))))) ? (5913383485950933846ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((unsigned long long int) min((12533360587758617770ULL), (((/* implicit */unsigned long long int) (unsigned short)45632)))));
                    var_13 = var_1;
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_9))));
    var_15 &= ((/* implicit */unsigned long long int) var_8);
}
