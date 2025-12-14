/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228354
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) max((var_8), (var_10)))))), (((/* implicit */int) ((signed char) arr_2 [i_0])))));
                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((arr_3 [i_0]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2531038775U))))))));
                var_22 -= ((/* implicit */short) min((((arr_3 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_3 [i_0]))));
                var_23 = ((/* implicit */long long int) (short)32767);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((short)-32763), (((/* implicit */short) var_4))))), (min((((/* implicit */unsigned long long int) var_16)), (arr_5 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (signed char)-113)) ? ((~(arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_3 [(signed char)6]))))))) : (((/* implicit */unsigned long long int) (~(arr_6 [i_0])))))))));
            }
        } 
    } 
    var_25 = var_14;
    var_26 = ((/* implicit */unsigned long long int) var_17);
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-113)))))))))));
}
