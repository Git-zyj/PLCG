/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22141
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned short) var_8))))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))), (min((var_18), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned short) var_18));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((int) ((((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_9 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)8190), (arr_7 [i_2] [i_2] [i_2]))))))));
                var_23 = ((/* implicit */unsigned short) 2171654831U);
            }
        } 
    } 
}
