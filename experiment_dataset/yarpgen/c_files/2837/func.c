/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2837
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_10))))) ? ((+(var_9))) : (((/* implicit */int) (unsigned char)150))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = ((((/* implicit */_Bool) (unsigned short)23902)) ? (((((long long int) arr_1 [i_0] [i_0])) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [(signed char)14] [i_2] [i_0])) >= (((/* implicit */int) var_11)))))) >= (((unsigned int) (short)-7011)))))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((((((1629672268554452598ULL) / (var_12))) | (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_7))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_10))))), (var_2)))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) var_4)) : (var_12)));
}
