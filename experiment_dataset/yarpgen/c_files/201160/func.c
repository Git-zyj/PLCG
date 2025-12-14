/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201160
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = arr_5 [(unsigned short)7];
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((int) -5232798444806850459LL)))) - (((/* implicit */int) ((var_16) <= ((+(var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 22; i_3 += 3) 
        {
            {
                var_20 |= ((/* implicit */_Bool) arr_12 [i_2] [i_3 + 2] [i_2]);
                var_21 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)128)) - (((/* implicit */int) (unsigned char)15)))));
                arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3 - 2] [i_3 - 3])) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3 - 4]))))) : ((-(1521651614620674994LL)))));
                arr_14 [18U] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) arr_10 [(unsigned short)8] [i_3 - 3] [i_3]);
            }
        } 
    } 
}
