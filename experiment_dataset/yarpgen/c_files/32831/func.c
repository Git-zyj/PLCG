/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32831
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (4294967288U))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = arr_8 [i_0] [i_1] [i_1];
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_8)) <= (((unsigned long long int) 16023890966087327170ULL))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36118)) ? (((/* implicit */unsigned long long int) -1419631907)) : (6814148022953489531ULL)));
                }
            } 
        } 
    } 
}
