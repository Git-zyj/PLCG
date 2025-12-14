/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210672
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((-183628586876080368LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44386))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) min((arr_0 [i_1]), (2U)));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (arr_2 [i_1 - 1] [i_1]) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_1 + 2] [i_2] [i_2])), (((((/* implicit */int) arr_5 [i_1 + 2] [i_1] [i_3])) & (((/* implicit */int) arr_5 [i_1 + 2] [i_2] [i_2])))))))));
                            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21161)) ? ((~(arr_2 [i_1 - 1] [i_1 - 1]))) : ((~(arr_2 [i_1 + 3] [i_1 + 2])))));
                            var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))))))));
}
