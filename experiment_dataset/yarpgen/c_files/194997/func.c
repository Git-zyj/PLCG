/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194997
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)54))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((short) 655507608));
                    arr_8 [i_0] [i_1] [11ULL] [(signed char)13] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0 - 1]))) & (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4355))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */long long int) max((((/* implicit */short) ((unsigned char) var_8))), (min((((/* implicit */short) min(((unsigned char)66), (((/* implicit */unsigned char) var_10))))), (((short) (unsigned short)54611))))));
    var_19 = ((/* implicit */long long int) var_8);
}
