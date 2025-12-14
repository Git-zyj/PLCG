/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34786
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
    var_12 += ((/* implicit */unsigned char) ((unsigned int) ((short) ((signed char) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((long long int) var_0))))))))));
                    var_14 = min((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) var_7)) ^ (var_0))))), (((/* implicit */long long int) var_6)));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */_Bool) (-((+(var_2)))));
}
