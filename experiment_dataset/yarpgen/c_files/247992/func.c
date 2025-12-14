/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247992
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) max((min((var_4), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 1] [i_2])))), (((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_2] [i_2 + 1]))))));
                    arr_6 [i_0] [i_1] [i_2] [i_2 + 2] |= max((max((max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_4 [i_0] [i_1] [i_2 + 2]))), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(-1719806012)))) : (arr_4 [i_2 + 2] [7] [i_2 - 2]))));
                    var_16 |= ((/* implicit */signed char) arr_2 [i_0] [i_1] [i_2 + 2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(min(((~(6723262763813579023LL))), (((/* implicit */long long int) var_7)))))))));
    var_18 = ((/* implicit */int) ((long long int) ((short) (~(((/* implicit */int) var_13))))));
}
