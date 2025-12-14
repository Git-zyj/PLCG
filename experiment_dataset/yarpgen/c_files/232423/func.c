/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232423
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = arr_1 [i_1];
                var_16 = ((((/* implicit */_Bool) arr_2 [i_0] [(short)13])) ? (((int) (signed char)94)) : (((/* implicit */int) (_Bool)0)));
                var_17 = (~(((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_0 [i_1])))) | (arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 3685857492079774966LL))) ? (((/* implicit */int) ((min((var_3), (((/* implicit */int) arr_6 [i_3])))) > (((((/* implicit */int) arr_9 [i_2] [i_2] [i_4])) >> (((arr_3 [i_4] [8LL]) - (3680561141U)))))))) : (((/* implicit */int) ((unsigned short) arr_11 [i_4 - 1] [7U])))));
                    var_19 = ((/* implicit */unsigned short) ((long long int) ((int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4] [i_3])) ? (var_4) : (((/* implicit */unsigned int) -1331430537))))));
                }
            } 
        } 
    } 
}
