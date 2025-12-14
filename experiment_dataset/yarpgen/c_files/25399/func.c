/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25399
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_8);
                    var_20 = ((/* implicit */unsigned char) ((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) > (((((/* implicit */_Bool) (unsigned short)57039)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8495))) : (16721522698189805177ULL)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57029)) & (((/* implicit */int) var_8))))), (var_12)))));
}
