/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222236
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32760)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned char)54))))) ? (var_4) : (arr_3 [i_0])));
                var_16 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / ((+(var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : ((~(((3004796602208660474LL) - (((/* implicit */long long int) 1006632960))))))));
}
