/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31987
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) (unsigned short)2044);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27916))) : (1266113669U)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)48))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(var_2))) : (var_2)))), (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) var_7)) : (max((3663663685565777418ULL), (1768962959804866885ULL)))))));
}
