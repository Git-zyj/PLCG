/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197788
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)48261), (((/* implicit */unsigned short) arr_0 [i_0 + 1])))))));
                arr_8 [i_0 + 1] [i_1] = ((/* implicit */signed char) (unsigned char)221);
            }
        } 
    } 
    var_17 = ((/* implicit */short) (unsigned short)4747);
    var_18 = ((/* implicit */short) var_6);
    var_19 = var_12;
    var_20 &= ((/* implicit */long long int) var_9);
}
