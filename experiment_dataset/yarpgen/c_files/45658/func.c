/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45658
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) / (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0]))))))), (arr_5 [i_0] [i_1] [i_1])));
                    var_21 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_0]);
                    var_22 *= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((289813362U) != (289813362U)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_2 [i_2]))))), ((~(arr_2 [i_2])))));
                }
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) (!(((((8269461591760650160LL) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) > ((+(8269461591760650156LL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((max((((var_3) ^ (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_17))))))));
}
