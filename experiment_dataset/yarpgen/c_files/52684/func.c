/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52684
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
    var_10 ^= ((/* implicit */unsigned char) ((var_2) ? (((((/* implicit */_Bool) (short)15100)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)19476))))));
    var_11 &= ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)17] [i_1 - 2] [(unsigned short)17] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32766))));
                var_12 = ((/* implicit */int) ((((min((((/* implicit */long long int) arr_3 [i_1 + 1])), (min((((/* implicit */long long int) var_6)), (-7753519788388866484LL))))) + (9223372036854775807LL))) >> (((arr_3 [i_1]) - (941455415)))));
                arr_8 [i_0] [i_0] [i_0] = arr_6 [i_0];
            }
        } 
    } 
    var_13 = ((_Bool) var_4);
}
