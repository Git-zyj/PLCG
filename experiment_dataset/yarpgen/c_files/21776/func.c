/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21776
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) 511));
    var_18 = ((/* implicit */short) max((((unsigned long long int) 925726787U)), (((/* implicit */unsigned long long int) (unsigned short)16617))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) max(((unsigned short)48940), (((/* implicit */unsigned short) (signed char)64)))));
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-9)))) : (925726787U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (-((~(-1LL)))));
    var_21 = var_5;
}
