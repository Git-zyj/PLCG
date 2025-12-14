/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207989
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((min((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((arr_1 [(unsigned short)8] [i_1]) + (179611165)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)23888))))), (var_12)))) && ((!(((_Bool) (unsigned short)23884))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8418)) << (((7467591128445935307ULL) - (7467591128445935307ULL)))))), (min((7467591128445935307ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_16)))) / (max((((/* implicit */long long int) (_Bool)1)), (var_2))))))));
    var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) 1425787200U)), (7467591128445935306ULL))) | ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_4)))))));
}
