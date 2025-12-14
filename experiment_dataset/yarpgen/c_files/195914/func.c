/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195914
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
    var_15 -= ((/* implicit */unsigned long long int) ((long long int) var_4));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned long long int) -2482833609680891700LL)))));
                    var_17 ^= ((/* implicit */unsigned char) arr_8 [i_2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) - (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) var_3)))))))));
}
