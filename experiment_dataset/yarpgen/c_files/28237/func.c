/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28237
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [4] [4] &= ((/* implicit */unsigned char) (+(var_6)));
                arr_6 [(short)6] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)27904)) && (((/* implicit */_Bool) (unsigned short)27904)))) ? (((((/* implicit */_Bool) -2147483629)) ? (((arr_0 [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)27915), (((/* implicit */unsigned short) (unsigned char)176)))))))) : (3261742343507511791ULL)));
            }
        } 
    } 
    var_11 += ((/* implicit */short) (((((-(var_0))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)37605))))))) + (((/* implicit */unsigned long long int) var_6))));
    var_12 = ((/* implicit */unsigned long long int) (~(613283519U)));
    var_13 -= ((/* implicit */long long int) (~(((15185001730202039824ULL) & (((/* implicit */unsigned long long int) 2438471588U))))));
}
