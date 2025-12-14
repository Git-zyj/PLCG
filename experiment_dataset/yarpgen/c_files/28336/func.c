/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28336
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
    var_20 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    var_21 = (((-((+(14734516193001143453ULL))))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))), ((+(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1])) ? (arr_3 [i_1] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1]))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_23 = var_10;
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */long long int) ((arr_3 [i_2] [i_1 + 1]) - (min((((/* implicit */unsigned int) (short)9483)), (arr_7 [i_0] [i_1] [i_2] [i_0])))))), (min((arr_5 [i_2] [i_0] [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))))))))));
                    arr_8 [7LL] [i_1] = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) 3170831984U))))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_4);
    var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) var_17))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (var_14)))) + (((var_6) >> (((/* implicit */int) var_18))))))));
}
