/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24688
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
    var_14 &= ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */long long int) var_6)) : (var_13));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned char)38)) : (1140114259)));
                    arr_7 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
