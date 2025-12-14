/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235733
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 4]) && (((/* implicit */_Bool) var_6))))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((short) min(((short)0), (var_9))))) & ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (short)-17)))))))));
    var_16 = ((/* implicit */int) var_6);
    var_17 = ((/* implicit */unsigned int) min((var_17), (var_4)));
    var_18 -= ((/* implicit */unsigned long long int) var_8);
}
