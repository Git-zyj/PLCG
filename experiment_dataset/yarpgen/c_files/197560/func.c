/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197560
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((var_3) <= (((/* implicit */int) var_8))))) >= (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) * (((((((/* implicit */int) var_1)) & (((/* implicit */int) var_11)))) >> (((((var_2) >> (((((/* implicit */int) var_0)) + (19023))))) - (53786253U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))))) | (arr_3 [i_0])));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (((arr_4 [12U]) - (((/* implicit */unsigned int) var_3)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967271U)) || (((/* implicit */_Bool) 744123523)))))))))));
                    var_17 -= ((/* implicit */unsigned int) ((((int) ((((/* implicit */int) arr_6 [i_0] [2U] [i_0])) >= (((/* implicit */int) var_6))))) >= (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_13 [9] = ((/* implicit */signed char) ((((/* implicit */int) ((((arr_9 [i_3]) & (((/* implicit */int) arr_11 [5LL])))) <= (((int) arr_10 [(short)5]))))) * (((/* implicit */int) arr_10 [i_3]))));
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_10 [i_3])) & (((/* implicit */int) arr_12 [i_3] [i_3]))))));
    }
}
