/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213392
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
    var_13 ^= ((/* implicit */long long int) var_2);
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2] [i_2])))))))))))));
                    var_16 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((max(((~(268435455U))), (((/* implicit */unsigned int) arr_7 [i_1] [i_2 - 1] [i_0 + 2] [i_0 + 2])))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_5)) : (var_4))), ((+(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3]))))), ((~(((/* implicit */int) var_3))))));
        var_18 = ((/* implicit */unsigned short) max((268435455U), (((/* implicit */unsigned int) (_Bool)1))));
        arr_13 [i_3 - 3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) -1)) : (max((((/* implicit */unsigned int) var_4)), (268435451U)))))));
    }
}
