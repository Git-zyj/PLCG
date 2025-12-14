/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211031
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)89)) / (((/* implicit */int) (unsigned char)170))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                    var_20 -= (!(((((/* implicit */int) (unsigned short)9615)) < (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (signed char)42)))))));
                }
            } 
        } 
    } 
}
