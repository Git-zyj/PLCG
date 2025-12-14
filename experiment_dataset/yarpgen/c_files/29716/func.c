/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29716
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (unsigned short)37240);
                var_14 -= ((/* implicit */short) (signed char)-16);
                arr_6 [i_0] [i_0] = ((/* implicit */int) (+(var_3)));
                arr_7 [i_1] = (((~(var_8))) % (((/* implicit */unsigned int) (+(((((/* implicit */int) var_12)) | (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)30743))));
}
