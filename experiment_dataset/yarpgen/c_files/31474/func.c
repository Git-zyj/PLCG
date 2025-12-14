/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31474
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((+(var_2))) : (var_1)));
    var_11 = ((/* implicit */unsigned int) ((unsigned short) var_0));
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-9439))));
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (3676000323U)))) ? (min((618966960U), (((/* implicit */unsigned int) var_3)))) : ((+(3676000323U))));
                    var_14 = ((/* implicit */short) min(((signed char)-112), ((signed char)-9)));
                }
            } 
        } 
    } 
}
