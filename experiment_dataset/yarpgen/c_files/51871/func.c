/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51871
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
    var_13 = ((/* implicit */signed char) var_9);
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((int) arr_0 [i_0])) << (((6060963845429920833LL) - (6060963845429920831LL)))));
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (signed char)-11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))))) : ((+(arr_2 [i_0 + 1] [i_0 + 1])))));
                arr_5 [i_0 + 3] = ((int) ((((/* implicit */unsigned long long int) var_5)) | (((((/* implicit */_Bool) var_6)) ? (20ULL) : (((/* implicit */unsigned long long int) 7LL))))));
            }
        } 
    } 
}
