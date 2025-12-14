/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39934
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)149)) ? (-1311286617) : (((/* implicit */int) (unsigned char)253)))));
                arr_6 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) max((2147482624LL), (((/* implicit */long long int) 3372810139U))));
                var_11 &= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) ((var_1) && (((/* implicit */_Bool) 9223372036854775807LL))))), (9223372036854775788LL))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((int) ((((_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-11685)) : (-116072266))));
}
