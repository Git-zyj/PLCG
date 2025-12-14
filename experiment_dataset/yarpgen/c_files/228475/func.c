/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228475
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((long long int) (-2147483647 - 1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [(short)18] [(short)18] [i_2]))))))));
                    arr_9 [i_0] [i_0] [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (var_7) : (((/* implicit */unsigned long long int) 3844162686U)))))));
                    var_19 ^= ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) ((signed char) var_13))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)-29326))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))))))));
}
