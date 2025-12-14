/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24785
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
    var_11 += ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1]);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */int) (short)32767))))))) || (((/* implicit */_Bool) max((((/* implicit */int) (short)32767)), (-1472302259))))));
                var_13 ^= max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1]))))), (max((((((arr_2 [i_0 - 1] [i_0]) + (2147483647))) >> (((var_7) - (3915420571U))))), (((((((/* implicit */int) (short)-16650)) + (2147483647))) << (((((/* implicit */int) (unsigned char)36)) - (36))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_1))))) / (min((((/* implicit */unsigned long long int) var_8)), (var_0)))));
    var_15 += ((/* implicit */unsigned short) var_2);
}
