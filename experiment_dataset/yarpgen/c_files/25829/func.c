/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25829
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
    var_15 = ((/* implicit */unsigned long long int) (~(var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) ((max((18243838686156982487ULL), ((-(3317497892778535229ULL))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_10 [i_0]))))), (-7491517200254202240LL))))));
                            var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_1])) >= ((+(7491517200254202257LL)))))), (arr_4 [i_1])));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) / (((7491517200254202243LL) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4 + 2] [i_4]))));
                    arr_20 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7491517200254202229LL)) ? (-7491517200254202252LL) : (max((-7491517200254202244LL), (-7491517200254202263LL)))));
                }
            } 
        } 
    } 
}
