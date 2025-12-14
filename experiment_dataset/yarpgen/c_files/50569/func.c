/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50569
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
    var_17 = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)18)), ((unsigned short)2698)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))));
    var_18 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))))) >> (((((/* implicit */int) ((unsigned char) var_8))) - (135))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_6)))) < ((-(-3220180450909289654LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!((_Bool)1)));
                var_19 = ((/* implicit */long long int) (((!((_Bool)1))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_3)))))))));
            }
        } 
    } 
}
