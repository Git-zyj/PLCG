/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212959
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
    var_10 = ((/* implicit */short) max(((unsigned short)5), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (((long long int) ((var_4) != (var_4))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)122))))) % (var_5)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [7ULL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (short)14479))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))) : (min((arr_3 [i_1]), (arr_3 [i_1])))));
                arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) 2588406475U);
                arr_6 [i_0] [i_1] [i_1] = (~(max((var_5), (1043673794U))));
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */long long int) (-(arr_3 [i_1])))) | (((long long int) (signed char)105)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_1);
}
