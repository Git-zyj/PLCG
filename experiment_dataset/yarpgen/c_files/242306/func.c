/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242306
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = (-(((/* implicit */int) var_14)));
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_2 [17] [1LL] |= (+(((/* implicit */int) arr_1 [1U] [i_0])));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((int) var_0)) : (((/* implicit */int) var_9))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            {
                arr_7 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)42)), ((short)0)))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [18LL] [i_1]))) : (2190123401U))))) << (((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-18)))) : (((/* implicit */int) min(((signed char)90), ((signed char)-27))))))));
                var_20 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) != (((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_21 = (~(((/* implicit */int) ((signed char) max((var_7), (((/* implicit */short) var_14)))))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 3095451083U))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned short) var_15)))));
    }
}
