/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195565
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
    var_17 += var_12;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_11);
                    var_18 &= ((((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_0])), (var_6))))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
