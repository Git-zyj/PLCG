/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46236
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) : (((/* implicit */int) ((566361838) < (((/* implicit */int) (_Bool)1))))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) (signed char)-122)) / (((/* implicit */int) (signed char)(-127 - 1)))))))) - (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != (((int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned char)240)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */short) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) (short)18583))))));
}
