/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238576
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_10);
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)56433))) ? ((~(var_0))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4201613022U)))))));
                    arr_7 [i_0 - 1] [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned char) min(((unsigned short)56424), ((unsigned short)43773)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_4))));
}
