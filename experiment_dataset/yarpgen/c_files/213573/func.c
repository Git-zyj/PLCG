/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213573
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (min((((/* implicit */unsigned int) (_Bool)0)), (var_10))) : (var_12)))) != (max((((/* implicit */unsigned long long int) ((691280192U) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (arr_3 [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] = ((/* implicit */int) (((~(arr_4 [i_2] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_2]) < (((/* implicit */unsigned long long int) var_8))))))));
                            arr_12 [i_0] [4] [12] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((max((3430392356U), (((arr_9 [i_3] [(_Bool)1] [(_Bool)1] [i_0]) << (((arr_9 [i_0] [i_1] [4] [i_3]) - (389168484U))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2145257997)) ? ((+(((/* implicit */int) arr_2 [i_0])))) : ((+(((/* implicit */int) var_13)))))))));
                            var_15 -= ((/* implicit */unsigned long long int) (!(((((long long int) (unsigned short)55897)) < (((/* implicit */long long int) ((1052233544) & (-641006797))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) (((_Bool)0) ? ((-(max((var_3), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3430392356U)), (6531574512184733493LL)))) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_6);
}
