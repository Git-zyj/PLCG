/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207211
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 188400821U)) ? ((-(4106566466U))) : (min((188400825U), (((/* implicit */unsigned int) (unsigned char)184)))))), (188400830U)));
                    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((188400801U), (((/* implicit */unsigned int) (short)6939))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3795113867U)) ? (188400801U) : (4106566466U)))) ? (((unsigned int) arr_3 [i_0] [i_1])) : ((~(499853428U))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 188400821U)) && (((/* implicit */_Bool) (unsigned char)0)))));
}
