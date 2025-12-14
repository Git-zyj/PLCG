/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235061
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (unsigned short)22770))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_9) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)22] [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_7 [4] [4] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) arr_1 [i_2]);
                    var_19 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */int) (signed char)-86))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (signed char)-87))));
}
