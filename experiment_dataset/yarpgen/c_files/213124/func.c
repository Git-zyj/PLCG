/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213124
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
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_11))));
    var_14 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_3)), (((var_7) ^ (((/* implicit */unsigned long long int) var_6)))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */long long int) (-(((((/* implicit */int) var_11)) / (var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned short) var_5);
                arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) min(((unsigned short)10147), (((/* implicit */unsigned short) (signed char)82))))) : (((/* implicit */int) min((var_11), (((/* implicit */signed char) arr_4 [i_1])))))))) ? (((((/* implicit */_Bool) (signed char)82)) ? (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)58), ((signed char)-115))))))) : (((/* implicit */unsigned int) (((!((_Bool)0))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) 8388607LL)))))));
                var_16 += ((/* implicit */signed char) arr_2 [i_1]);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)0))))))))));
                var_18 += ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) ((short) (signed char)-82)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
}
