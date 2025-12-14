/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51125
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) var_1));
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) min(((short)-28), ((short)-1))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? ((+(8166436344307671709ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_2] [i_2] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_2)) == ((+(((/* implicit */int) (short)32767)))))))));
                    var_16 = ((/* implicit */unsigned short) (+(((arr_3 [i_0] [i_0]) + (arr_3 [i_0] [i_0])))));
                    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_6 [i_2])) - (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
}
