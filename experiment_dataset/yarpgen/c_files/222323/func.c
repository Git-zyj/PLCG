/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222323
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_1 [i_1])) ^ (0ULL))))) & (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)9787))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (unsigned char)126))));
                }
            } 
        } 
    } 
    var_21 = var_15;
}
