/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232485
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
    var_17 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = (_Bool)1;
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(_Bool)0])) ? ((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1])))))) : (((int) (_Bool)1))));
            }
        } 
    } 
}
