/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225970
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
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)51350))));
                arr_4 [(_Bool)0] [(unsigned char)2] [(_Bool)0] &= ((/* implicit */_Bool) 10463948831553569347ULL);
                var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)5341))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-111)) ^ (((/* implicit */int) (short)-32766)))), (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */long long int) 4294967283U);
    var_18 = ((/* implicit */short) (~(13U)));
}
