/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39963
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
    var_18 = ((/* implicit */unsigned char) ((-4492094793604139105LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) arr_1 [i_0]);
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59417)) ? (-1920320719961054126LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6132)))))) * (((var_7) ? (arr_2 [(unsigned short)8] [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) arr_0 [10LL])) : (var_16)));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) (-(arr_9 [i_0]))))));
            }
        } 
    } 
}
