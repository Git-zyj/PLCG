/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199990
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
    var_13 -= ((/* implicit */int) var_8);
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) ((short) (signed char)88))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1])) ? (((((/* implicit */_Bool) (signed char)88)) ? (-823471720) : (((/* implicit */int) (signed char)83)))) : ((~(1763257315)))))));
                var_15 = ((/* implicit */long long int) max((((/* implicit */signed char) arr_3 [i_0])), (max(((signed char)-81), ((signed char)88)))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_3 [(signed char)10]))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (signed char)-86);
            }
        } 
    } 
}
