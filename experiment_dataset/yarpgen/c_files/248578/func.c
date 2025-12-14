/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248578
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
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((((((/* implicit */int) var_15)) - (arr_5 [i_0] [i_0] [i_1]))) > (((/* implicit */int) arr_1 [i_0])))))));
                var_19 = ((/* implicit */_Bool) (~(((int) (~(13154082503274720655ULL))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] [i_3] = (~(min((((((/* implicit */_Bool) -1507165283)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))), (((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_12)))))));
                var_22 = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_10)))) | (((int) var_5)))));
                arr_13 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_3] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            }
        } 
    } 
}
