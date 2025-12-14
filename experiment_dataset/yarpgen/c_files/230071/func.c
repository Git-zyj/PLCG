/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230071
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
    var_19 = ((15428020607524844302ULL) % (15428020607524844282ULL));
    var_20 = min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3018723466184707334ULL), (((/* implicit */unsigned long long int) 4246523586U)))))))));
    var_21 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [10] = (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (16773120U))), (((/* implicit */unsigned int) (-(arr_1 [i_0])))))));
                arr_6 [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned int) ((unsigned char) 15428020607524844282ULL));
                var_22 = max((((((/* implicit */_Bool) ((arr_2 [i_0]) << (((2979908354U) - (2979908333U)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((arr_3 [i_1] [4U]) ? (((/* implicit */int) arr_3 [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_0])) <= (((((/* implicit */_Bool) arr_2 [(short)0])) ? (-4062191298479781025LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)6] [(short)6])))))))));
                arr_7 [6U] = min((758594448U), (((((/* implicit */_Bool) min((arr_4 [i_0]), ((short)21469)))) ? (2979908349U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [12U])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
            }
        } 
    } 
}
