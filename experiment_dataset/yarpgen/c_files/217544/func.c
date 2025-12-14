/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217544
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_0 [i_2])), (var_8))) | (((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (max((((/* implicit */int) (unsigned short)25974)), (arr_6 [i_2] [i_2 + 4] [i_2]))) : ((~(arr_6 [i_0] [i_1] [i_2 + 3])))));
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)30301)))))), ((~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-1580)), (((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4865793338699942557ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((15ULL) == (10915264311678324912ULL)))))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-6))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_3))));
}
