/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31912
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
    var_13 = (((_Bool)1) || ((_Bool)1));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 + 3] [i_3 - 1])) ? (arr_7 [i_1 - 1] [i_2 + 2]) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) var_11)) : (max((arr_6 [i_1 + 1] [i_2 + 1] [i_3 - 1]), (arr_7 [i_1 - 1] [i_2 + 3]))));
                                var_15 = ((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1]);
                                var_16 = ((/* implicit */unsigned char) arr_3 [i_3 + 1] [i_2 + 3] [i_1 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_6 - 1] &= ((/* implicit */short) (((!((_Bool)0))) ? (arr_19 [i_6] [i_5]) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_3))) - (((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 1])))))));
                var_18 = ((/* implicit */int) arr_19 [i_6 - 1] [i_5]);
                arr_21 [8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_19 [i_6 - 1] [i_6 - 1]) + (9223372036854775807LL))) << (((((var_10) + (2009132662))) - (53)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_4))))) : (arr_19 [(unsigned short)18] [i_6])));
            }
        } 
    } 
}
