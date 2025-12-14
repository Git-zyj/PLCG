/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238560
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)-3274)), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)132), (((/* implicit */unsigned char) (signed char)-2)))))) % (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
                var_16 = arr_4 [(signed char)14];
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_9)) ? (-417243904) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_4)))) - (((/* implicit */int) ((unsigned short) var_3)))));
}
