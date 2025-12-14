/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208240
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
    var_13 = ((/* implicit */unsigned char) min((8750405125959603886LL), (max((-8750405125959603879LL), (-8750405125959603888LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */_Bool) -840340078);
                var_14 = ((/* implicit */unsigned char) max((-1545567702), (((((/* implicit */int) (unsigned short)63993)) - (((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (signed char)-6)) : (1545567714)))))));
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (3185455735U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0])))))), (15575039467996618688ULL)));
                arr_7 [(unsigned char)19] [(unsigned char)19] [(unsigned char)19] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
