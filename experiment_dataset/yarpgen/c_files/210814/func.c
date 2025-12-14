/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210814
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (~(4294967295U)));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)6] [i_2]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (684513685U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3)))))))))));
    var_15 = ((/* implicit */unsigned short) (+(min((1U), (((/* implicit */unsigned int) (signed char)25))))));
}
