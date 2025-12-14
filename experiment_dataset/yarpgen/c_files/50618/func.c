/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50618
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_0 + 1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((2046U), (((/* implicit */unsigned int) var_8))))), (var_5)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((arr_8 [i_2] [(short)9] [i_2 - 1] [i_3 + 1] [i_0 + 2]), (((/* implicit */long long int) max((4294965250U), (4294965249U)))))), (((/* implicit */long long int) ((short) 2047U))))))));
                        var_21 = ((/* implicit */int) arr_6 [i_0] [i_1] [(short)9]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 3]))));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [(signed char)4] [i_2] [10U] [i_0 - 1] [i_4] [12LL]))));
                    }
                    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((signed char) 144080003703767040LL))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)7), (arr_7 [i_0] [i_1] [i_2] [i_0]))))) : (-144080003703767040LL)))));
                    arr_13 [i_2] = min((144080003703767056LL), (max((((/* implicit */long long int) (signed char)-64)), (-144080003703767040LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(var_5))))));
                        arr_17 [i_2] = ((((/* implicit */_Bool) var_3)) ? ((+(0))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((4294965227U), (((/* implicit */unsigned int) arr_7 [7U] [i_1] [i_2 + 1] [i_5])))))))));
                        arr_18 [i_0] [i_0] [i_1] [i_0] [7LL] [i_2] = ((/* implicit */int) var_1);
                    }
                }
            } 
        } 
    } 
}
