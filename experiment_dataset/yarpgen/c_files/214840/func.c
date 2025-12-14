/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214840
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-3726)), (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (var_4)))));
                arr_6 [i_0] [(unsigned short)20] [(unsigned short)20] |= ((/* implicit */unsigned short) var_6);
                var_10 = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_0 [i_0]), (((unsigned char) (short)16)))))));
            }
        } 
    } 
    var_11 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_1) : (-1))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_2)));
}
