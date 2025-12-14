/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212504
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                var_13 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (unsigned char)0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned char)51)))), (((/* implicit */long long int) ((arr_1 [0U] [i_0]) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)103)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)159), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19385))) < (var_2)))))))));
    var_15 = ((/* implicit */int) (-(var_10)));
}
