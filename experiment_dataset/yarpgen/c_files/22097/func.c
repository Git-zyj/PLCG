/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22097
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) >> (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)2979))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (signed char)-109))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (var_17)));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            {
                arr_11 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4 + 2] [i_4] [i_4 - 2])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)62))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_4 + 2] [i_4] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)62)) >> (((-9223372036854775799LL) + (9223372036854775804LL))))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_4]))) - (var_1)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) 1822919948)))))));
                arr_12 [i_4] [i_4 + 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (-1822919948) : (max((arr_5 [i_3] [i_4] [i_4] [i_4]), (((/* implicit */int) var_15)))))) ^ (((((/* implicit */_Bool) arr_10 [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_3] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_3] [i_4 - 1]))))));
            }
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) var_2)));
}
