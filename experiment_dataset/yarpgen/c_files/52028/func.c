/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52028
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_4 [i_0] [i_1 - 2]) & (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(short)10]))) : ((~(var_9))))) | (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) max((min((arr_3 [i_1 + 3] [i_1] [i_1 + 1]), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) & (arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8791798054912LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) : (var_15)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)65)))))));
                            var_19 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 *= ((/* implicit */short) (+(var_9)));
    var_21 = ((/* implicit */long long int) var_17);
}
