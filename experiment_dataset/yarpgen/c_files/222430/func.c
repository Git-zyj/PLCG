/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222430
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
    var_17 = var_15;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((int) ((arr_5 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))));
                    var_19 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_1 [1] [(short)10])))))) * (var_8))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0]))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (arr_6 [i_2] [i_1] [i_1] [(signed char)6]))), (((/* implicit */unsigned int) (+(var_9))))))) && (((arr_5 [i_0] [i_1] [i_0]) >= (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)26))))), (var_8))))));
    var_21 = ((/* implicit */int) var_5);
}
