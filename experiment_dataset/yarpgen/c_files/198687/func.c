/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198687
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((int) var_3));
                var_16 -= ((((/* implicit */_Bool) min((arr_2 [10U] [i_0 - 1]), (arr_2 [3U] [i_0 - 1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (17025576462831392836ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 3])))) <= (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */int) (signed char)127)));
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (short)18512)))));
                var_19 = ((/* implicit */int) max((var_19), (min(((~(arr_10 [i_2] [i_2]))), (((((/* implicit */int) arr_8 [i_2])) & (((/* implicit */int) arr_8 [i_3]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            {
                var_20 ^= ((/* implicit */long long int) ((min((arr_13 [i_4] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((_Bool) var_14))))) >> (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */signed char) var_1);
                var_22 = ((/* implicit */short) arr_15 [i_5] [i_4] [i_4]);
                arr_16 [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_14), (arr_12 [i_4])))) ? (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) arr_12 [i_4])), (12314713806407415138ULL))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) var_3)) * (arr_13 [i_4] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) var_6))))));
            }
        } 
    } 
}
