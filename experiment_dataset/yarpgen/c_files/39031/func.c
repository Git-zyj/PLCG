/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39031
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) max((max((var_1), (((/* implicit */unsigned long long int) 3673489844U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)177)))))));
                    var_16 ^= ((/* implicit */unsigned int) ((unsigned char) max((max((((/* implicit */unsigned long long int) 3028180552U)), (18029087997749498424ULL))), (min((5295541959110628090ULL), (((/* implicit */unsigned long long int) arr_1 [i_2])))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((signed char) var_8))), (min((var_1), (((/* implicit */unsigned long long int) var_5)))))), (max((((/* implicit */unsigned long long int) ((unsigned int) var_6))), (max((((/* implicit */unsigned long long int) var_3)), (var_7)))))));
    var_18 = ((/* implicit */unsigned int) max((min((min((var_9), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2263406540U)), (-6810989892191656325LL)))))), (((/* implicit */unsigned long long int) min((((long long int) var_4)), (min((((/* implicit */long long int) var_5)), (-6810989892191656317LL))))))));
}
