/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5398
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
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) + (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 749262141U)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)6] [(unsigned short)6])))))))));
                var_16 = ((/* implicit */short) ((signed char) var_7));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))));
                arr_5 [3ULL] [3ULL] [3ULL] = ((/* implicit */signed char) arr_4 [i_1] [i_0] [i_0]);
                var_18 *= arr_1 [i_1];
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_9 [i_2])))), (((((/* implicit */_Bool) 13954422554873799799ULL)) && (((/* implicit */_Bool) (signed char)-117))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (arr_8 [i_4] [i_3] [i_2])));
                }
            } 
        } 
    } 
}
