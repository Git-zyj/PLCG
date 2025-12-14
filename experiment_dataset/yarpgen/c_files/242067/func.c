/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242067
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
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 2] [i_1] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) -77057817684136886LL)))));
                    arr_9 [i_1] [(signed char)5] [i_2] = ((/* implicit */_Bool) max(((~(arr_1 [i_0 - 1]))), ((~(((/* implicit */int) (signed char)-90))))));
                }
            } 
        } 
    } 
    var_11 = (!((!((!(var_2))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) - (((((/* implicit */long long int) ((/* implicit */int) var_6))) + ((~(4672010030660705184LL)))))));
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
}
