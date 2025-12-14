/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233055
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
    var_19 = var_13;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_18);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12))));
                            var_22 = ((/* implicit */unsigned short) max((max((arr_8 [i_0] [i_1] [i_3]), (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) min(((unsigned char)251), ((unsigned char)85))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (min((((arr_9 [i_0] [i_1] [i_1] [i_1]) & (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */int) ((1194821930U) <= (((/* implicit */unsigned int) 381093636))))) | (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)27590)))))))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */short) (signed char)-92);
}
