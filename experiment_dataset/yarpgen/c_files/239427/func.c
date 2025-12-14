/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239427
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
    var_14 &= ((/* implicit */signed char) max(((short)32767), ((short)32766)));
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) && (((((/* implicit */int) var_13)) > (((/* implicit */int) (signed char)-48)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)24587))))));
    var_16 = ((/* implicit */unsigned int) (~(var_4)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59674))) / (3574889663692704473ULL))))));
                    arr_9 [i_1 - 2] [i_1] [i_1] [(unsigned char)15] = ((/* implicit */short) (unsigned short)18662);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((max((((((/* implicit */int) (short)-32766)) > (((/* implicit */int) (short)8192)))), (((_Bool) var_0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
