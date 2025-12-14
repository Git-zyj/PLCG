/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23830
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-17274)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_12))))) ? (max((((/* implicit */int) (signed char)(-127 - 1))), ((-(((/* implicit */int) (signed char)-35)))))) : (((/* implicit */int) ((_Bool) var_8)))));
                    arr_8 [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_0 [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((int) var_4)), (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_1))))))) > (((((((/* implicit */_Bool) var_12)) ? (15909568756048441136ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_0))))))))))));
    var_18 = ((/* implicit */int) var_10);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (var_8))) : ((~(((/* implicit */int) ((_Bool) var_13))))))))));
}
