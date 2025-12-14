/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30792
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
    var_12 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) % ((+((+(var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -110477907)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), ((-(-110477891))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-28619))) ^ (((/* implicit */int) ((unsigned short) min((arr_1 [9U] [i_0]), (((/* implicit */unsigned long long int) -110477882))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
}
