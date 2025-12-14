/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208617
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 += max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) % (4733794356499488058LL))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)44)), ((short)28949)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) ^ (((-1434086681) & (((/* implicit */int) (short)16315)))))) % (((((/* implicit */int) (short)28937)) % (((/* implicit */int) (signed char)11))))));
                var_16 = ((/* implicit */unsigned short) (+(var_6)));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)126)) % (((/* implicit */int) (unsigned char)63))));
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1073937166U)) ? (1710933065479150712ULL) : (((/* implicit */unsigned long long int) 781610549)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
