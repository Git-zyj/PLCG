/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3815
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [(signed char)4] &= max((arr_1 [i_1 + 1] [i_1 - 3]), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0] [0]))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_1 [i_1 + 1] [i_1 - 3]) << (((((/* implicit */int) var_14)) - (33)))));
                var_19 -= ((/* implicit */short) arr_3 [0U]);
            }
        } 
    } 
    var_20 = (!((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-102)) & (((/* implicit */int) var_2))))))));
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_0))))))) % (var_13)));
}
