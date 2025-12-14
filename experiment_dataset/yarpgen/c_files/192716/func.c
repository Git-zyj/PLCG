/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192716
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
    var_15 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)106)), ((unsigned short)59668)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (signed char)-8)) ^ (336352862))))));
    var_16 -= ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_0] [i_0]))) ? ((((-(var_5))) >> (((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_9)))) + (762338898))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)127))))) <= (((arr_3 [2LL] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))))) : ((~(1729447137)))));
                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (signed char)-14)) % (arr_0 [i_0]))))), (arr_0 [i_1])));
            }
        } 
    } 
}
