/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-16875)))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) | (((/* implicit */int) (unsigned char)26))))))));
                }
            } 
        } 
    } 
    var_10 = (~(((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
}
