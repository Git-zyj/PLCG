/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220824
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
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65535))))) : (((((/* implicit */unsigned int) var_5)) * (var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) arr_1 [i_0]);
                    var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)40446)))) / (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (var_14)))), (max((((/* implicit */int) var_4)), (arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)49324)), (var_15)))))) || (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)22037))))))))));
}
