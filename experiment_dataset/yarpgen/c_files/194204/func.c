/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194204
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
    var_13 = ((/* implicit */unsigned short) 750441484U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */long long int) max((750441458U), (((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_3 + 2] [i_2 + 3] [i_0 - 1]))))), (((long long int) var_11)))))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned int) var_0)))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) 4032999480U)) - (2679205838905212256ULL))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) 4032999480U);
}
