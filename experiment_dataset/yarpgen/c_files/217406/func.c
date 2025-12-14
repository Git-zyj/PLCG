/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217406
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned short)37243), (arr_6 [i_0] [i_0] [i_3] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)0))))) : (0U))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) -7428105180239330759LL)))));
                            var_16 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_13)))), (((((/* implicit */_Bool) (short)-25532)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)-25547)))))))));
                var_17 = ((/* implicit */int) var_8);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */unsigned long long int) 0LL);
}
