/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214164
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) (-(((((/* implicit */int) arr_0 [i_1 + 3])) / (((/* implicit */int) arr_0 [i_1 - 1]))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (unsigned short)65519);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_0] [i_1 + 3]) < (var_0)))) * (arr_4 [i_4] [i_1] [i_2])));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_12 [i_4] [i_3 - 1] [i_2] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((~(var_0))))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)10)) & (((/* implicit */int) (signed char)22))))), (arr_11 [i_3 + 1] [i_3] [i_3 + 2] [i_1 + 3] [i_1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (short)3);
}
