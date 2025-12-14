/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230353
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) max(((unsigned char)15), (var_3)));
                var_19 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 4278360070770683777LL)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (_Bool)0)))))), (68841207406393563ULL)));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_2 [i_1 - 1]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned short) ((max((var_16), (var_9))) != (((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_21 -= (unsigned char)255;
}
