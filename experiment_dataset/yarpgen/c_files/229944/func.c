/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229944
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (short)-13875)), (var_2))))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) (short)13874))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~(min((((int) (short)4376)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)4376))))))));
                    arr_9 [i_0] [(unsigned char)4] [i_0] [i_0] = ((/* implicit */short) ((int) (+(var_16))));
                }
            } 
        } 
    } 
}
