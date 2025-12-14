/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218219
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
    var_20 = ((var_4) & (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) (unsigned short)54038)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [13] [6ULL] = arr_4 [i_0];
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54038)) ? (((/* implicit */int) (unsigned short)54038)) : (((/* implicit */int) (unsigned short)54038))))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1 - 2]);
                    var_21 = ((/* implicit */signed char) (unsigned short)42625);
                }
            } 
        } 
    } 
}
