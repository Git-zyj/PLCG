/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236126
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
    var_13 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((var_6), (((/* implicit */long long int) var_11)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) : (var_9)));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (unsigned char)22))));
                    var_16 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) min(((unsigned char)0), ((unsigned char)4))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)10880)), ((-(((/* implicit */int) (unsigned short)7936))))));
}
