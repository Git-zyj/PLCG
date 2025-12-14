/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224877
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    arr_9 [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) ^ ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_22 ^= (-(((/* implicit */int) ((signed char) arr_14 [i_4] [i_3] [i_3]))));
                arr_16 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35927))) : (var_19)))));
}
