/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42938
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
    var_18 = ((/* implicit */unsigned int) var_15);
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) var_5)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 1047075118U);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((2147483630) - (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)55907)) || (((/* implicit */_Bool) 5022385886817967192ULL)))) && (var_5))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5022385886817967195ULL)) ? (((/* implicit */unsigned long long int) 1427297418)) : (19ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 900432053)) || (((/* implicit */_Bool) 5022385886817967192ULL))))) : (((/* implicit */int) (signed char)-67)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_3 - 1])) : (((/* implicit */int) arr_4 [i_0 + 2]))))));
                            arr_11 [i_0] [i_0] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(short)0])) ? (((((/* implicit */int) var_11)) - (((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) ((13424358186891584411ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_22 = ((/* implicit */signed char) ((int) ((33554431ULL) < (19ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
