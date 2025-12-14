/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26412
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((-3935335504998133662LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))))))));
    var_13 &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)123)))) & (((/* implicit */int) (unsigned short)24081))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
                arr_5 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-16155)) * (((/* implicit */int) arr_1 [i_0]))))), (4271618899U)));
            }
        } 
    } 
}
