/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238110
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4095))))) && (((/* implicit */_Bool) (((-(((/* implicit */int) arr_3 [18ULL] [i_1])))) ^ ((~(((/* implicit */int) (short)-4095)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 3])))), (((_Bool) min(((short)-4095), ((short)4102))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4095))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3])))))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) (short)4102))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */int) var_15)) - (((/* implicit */int) (short)19039)))), ((-(((/* implicit */int) var_13))))))) / (var_12)));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-4095))));
}
