/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19766
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_11))));
    var_20 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), ((unsigned short)36500)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) max(((short)10376), (((/* implicit */short) (signed char)93))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4032)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((long long int) var_9))))));
                arr_7 [i_0] = ((/* implicit */int) ((signed char) var_10));
                var_22 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */_Bool) (short)-17517)) || (((/* implicit */_Bool) var_12))))) >> (((((/* implicit */int) var_6)) + (87))))), ((-(((/* implicit */int) min(((short)17526), (var_2))))))));
}
