/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227415
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
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5858853117085687385LL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((unsigned long long int) 5208159619997436944LL)))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */signed char) (-(var_8)));
}
