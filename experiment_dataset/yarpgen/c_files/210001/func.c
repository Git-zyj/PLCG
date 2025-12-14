/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210001
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 4611123068473966592ULL))));
                    arr_8 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)64093);
                    var_21 = ((((/* implicit */_Bool) -2147483640)) ? (2147483645) : (831440522));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((var_18) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10))))), ((-(var_18)))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 1428167099U)) ? (((/* implicit */int) (short)-21215)) : (((/* implicit */int) (short)15636))));
    var_24 = ((/* implicit */unsigned int) ((unsigned short) var_13));
}
