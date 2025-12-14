/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215481
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
    var_17 = ((/* implicit */unsigned long long int) var_3);
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [(short)0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (min((((/* implicit */unsigned long long int) var_4)), (18400744287438547067ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18400744287438547060ULL)) ? (1048568U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 2]))))))))));
                arr_6 [i_0] [i_0 - 1] [(_Bool)1] = ((/* implicit */signed char) min((-488107998747354682LL), (min((((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_3))))), (((long long int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 23; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_2 - 4] [i_3 + 4] [i_3 + 2])) >> (((((/* implicit */int) var_14)) + (23474))))) - (((((/* implicit */int) (unsigned short)35802)) | (((/* implicit */int) (_Bool)1))))));
                var_21 -= ((/* implicit */long long int) ((_Bool) arr_8 [i_2] [i_2]));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_2] [5LL] [i_4] [i_5] |= ((/* implicit */signed char) -1979993137);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(31525197391593472LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
