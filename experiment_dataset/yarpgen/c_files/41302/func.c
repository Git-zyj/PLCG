/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41302
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
    var_10 = ((/* implicit */_Bool) ((short) ((7382668005096541252LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) (short)-7576)) || (var_2))) ? (((2229647136357614231LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-19914))))));
                arr_6 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)64936)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) -675887915))))) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
