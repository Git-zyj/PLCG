/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/531
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)255))))))) + (22ULL)));
                var_11 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_0 + 3] [i_1])) | (((/* implicit */int) (signed char)25))))) ? (((unsigned long long int) (short)-24377)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)95), ((unsigned char)233))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) / (max((((/* implicit */unsigned long long int) var_1)), (11938984667201368129ULL)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 16286290457668792190ULL)) && (((/* implicit */_Bool) min(((signed char)-11), ((signed char)-11))))))), (((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_7))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)139)) < (((/* implicit */int) var_4)))))))));
}
