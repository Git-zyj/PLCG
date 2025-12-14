/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226360
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
    var_10 = (-(((((/* implicit */_Bool) (+(var_8)))) ? (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4294967283U)))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_4 [i_0] [i_2])), (var_2))), (((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) arr_0 [i_0]))))))))));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_1 [i_1 - 3] [i_1]) < (arr_1 [i_1 - 3] [i_2]))))));
                    arr_8 [i_1] [i_1] [i_1] [i_2] = arr_5 [i_0] [i_1] [i_2] [i_2];
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) + ((~(((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) ((unsigned long long int) (-((-(var_4))))));
}
