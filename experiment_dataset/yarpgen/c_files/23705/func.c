/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23705
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [6ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)66)), (2574550243U)));
                    var_20 = ((/* implicit */int) (((-(max((arr_10 [i_0] [(unsigned short)23] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_18)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [(_Bool)1] [i_0]) ? (-187809841) : (((/* implicit */int) var_19)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((arr_14 [15LL] [(short)4] [i_3] [i_3 - 1] [i_4] [(signed char)17]), (((/* implicit */unsigned short) (_Bool)1))))), ((+(arr_3 [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1768440500)), (335322295U))))));
                                arr_18 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [18LL] &= min((max((((/* implicit */int) min(((unsigned short)13187), (((/* implicit */unsigned short) (signed char)60))))), (min((((/* implicit */int) arr_5 [i_4] [i_1])), (-1768440501))))), ((~(((/* implicit */int) (signed char)70)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+(min((min((var_14), (((/* implicit */unsigned long long int) (unsigned short)13161)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (var_18))))))));
}
