/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42249
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_1])), (2476581260823943065ULL))), (((unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-57)), (794734675U))))));
                var_15 = ((/* implicit */signed char) max((arr_3 [i_0 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 2476581260823943062ULL)) ? (-170789711) : (((/* implicit */int) (unsigned char)131)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((/* implicit */unsigned char) max(((~((~(((/* implicit */int) (short)-1)))))), (var_9)));
}
