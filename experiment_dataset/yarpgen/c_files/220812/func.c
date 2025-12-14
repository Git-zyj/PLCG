/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220812
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
    var_20 = ((/* implicit */unsigned int) max((max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) 12964005300677388633ULL)) ? (((/* implicit */unsigned int) 899648233)) : (4294967295U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) var_15))))) ? (max((((/* implicit */long long int) var_3)), (var_0))) : (((/* implicit */long long int) max((var_9), (var_17))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [4ULL]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [0U] [i_1])) ? (var_0) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [15ULL] [i_1])) ? (arr_1 [i_0] [(unsigned char)5]) : (((/* implicit */unsigned int) arr_7 [i_0] [13])))), (((/* implicit */unsigned int) var_19)))))));
                            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) 3855071007U)), (16931544331104182303ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_8))))) ? (arr_4 [i_0]) : (min((((/* implicit */unsigned int) (short)-28656)), (14U))))))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned long long int) max((max((arr_9 [i_0] [i_1] [(unsigned char)13] [11ULL] [i_1]), (var_6))), (((/* implicit */int) min((arr_3 [i_0] [(unsigned char)12] [i_1]), (var_10))))));
            }
        } 
    } 
}
