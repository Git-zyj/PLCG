/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231710
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0 + 1]);
                    var_13 -= ((/* implicit */int) max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) min(((short)4475), (((/* implicit */short) (unsigned char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~(-1651669179347243077LL)))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */short) ((min((var_0), (((/* implicit */int) (unsigned char)1)))) & ((+(((/* implicit */int) ((_Bool) (short)-4476)))))));
}
