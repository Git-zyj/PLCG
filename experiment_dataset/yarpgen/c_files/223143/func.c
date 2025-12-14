/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223143
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_4)), (2949467602772929473ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -469076465857557521LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (2949467602772929458ULL) : (15497276470936622139ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
    var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned char) min(((-(min((((/* implicit */long long int) var_3)), (-469076465857557515LL))))), (((/* implicit */long long int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) (-((+(max((var_10), (((/* implicit */long long int) var_3))))))));
                    arr_8 [i_0] [i_1] [(signed char)9] = ((/* implicit */unsigned long long int) max((-469076465857557514LL), (-469076465857557521LL)));
                }
            } 
        } 
    } 
}
