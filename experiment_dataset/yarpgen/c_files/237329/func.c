/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237329
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
    var_12 = ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10624)) ? (((/* implicit */int) (short)-7111)) : (((/* implicit */int) (unsigned char)116))));
        var_14 -= ((/* implicit */long long int) ((unsigned char) var_6));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (unsigned char)17)))));
                        var_16 = var_6;
                    }
                } 
            } 
        } 
    }
}
