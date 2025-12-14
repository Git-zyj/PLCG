/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204307
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) | (var_0)));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = (~(((unsigned int) max(((unsigned short)57946), (((/* implicit */unsigned short) (unsigned char)129))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) (short)304)))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)68)), (arr_1 [i_1 + 1]))))));
            }
        } 
    } 
}
