/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192514
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
    var_17 = ((/* implicit */unsigned char) var_6);
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1672)) || (((/* implicit */_Bool) max(((unsigned short)63864), ((unsigned short)1676))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */int) max(((unsigned short)13978), (((/* implicit */unsigned short) (_Bool)0))))) * (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned char) (_Bool)0);
                    var_22 ^= ((/* implicit */_Bool) (short)32767);
                    var_23 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    }
}
