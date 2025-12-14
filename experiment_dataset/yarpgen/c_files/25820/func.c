/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25820
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] = (~(((/* implicit */int) var_4)));
                var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) (+(var_2))))), ((+(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63104))) : (var_8)))))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_0))))))))));
                arr_8 [(unsigned short)9] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (+((+(var_3))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) (signed char)-24);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1]))) / ((-(var_8)))));
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned char) ((469762048U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36647)))))), (max((var_5), (arr_9 [i_2 + 1])))))), (((int) arr_9 [i_2 - 1]))));
        var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_0))));
        var_14 = ((/* implicit */int) max(((unsigned short)28897), (((/* implicit */unsigned short) (short)-7118))));
    }
}
