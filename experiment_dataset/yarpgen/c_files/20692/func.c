/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20692
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4181391554U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (var_3) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_6))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 |= ((/* implicit */int) (!(((/* implicit */_Bool) 1362040317U))));
                    var_15 &= ((/* implicit */signed char) (short)-1);
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) ((((_Bool) var_3)) ? ((-(((((/* implicit */_Bool) (short)-1)) ? (var_7) : (((/* implicit */int) (unsigned short)22288)))))) : (min((var_7), ((-(((/* implicit */int) var_10))))))));
}
