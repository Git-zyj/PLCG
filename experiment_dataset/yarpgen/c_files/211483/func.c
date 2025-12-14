/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211483
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (signed char)95))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_0 [i_1]))))) : (max((var_0), (((/* implicit */int) (signed char)-95))))));
                var_12 -= ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) 2155981910U)), (var_2))) >> (((arr_3 [i_0] [i_1]) + (553035375))))))));
                var_14 = ((/* implicit */int) min((var_14), (((((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_5 [i_0] [i_0])))) < (((/* implicit */long long int) var_3)))) ? ((~(((/* implicit */int) (signed char)-98)))) : ((+(((/* implicit */int) (signed char)-95))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (-1) : (arr_3 [i_0] [i_0]))) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : ((-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
}
