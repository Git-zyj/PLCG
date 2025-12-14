/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31705
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) (short)-5855)) + (((/* implicit */int) (unsigned short)926))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_17)))))))));
    var_23 = ((/* implicit */long long int) ((unsigned short) max((max((var_17), (var_17))), (((/* implicit */unsigned long long int) (unsigned short)0)))));
}
