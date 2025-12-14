/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244018
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
    var_17 = ((/* implicit */unsigned long long int) ((short) 3187455808U));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4819)) ? (((/* implicit */int) (short)4819)) : (((/* implicit */int) (signed char)35))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_9 [(unsigned short)13] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (2944136431U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191)))))) ? (((/* implicit */int) (short)8209)) : (((/* implicit */int) (signed char)111)))))));
                    arr_10 [i_0 + 4] [i_0] [i_0 + 4] [13LL] = ((/* implicit */signed char) (+((+(((3381253744U) >> (((/* implicit */int) arr_0 [i_2 - 1]))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) 1884147234U)), (-1466820305768360246LL))), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) var_16);
        var_21 |= ((/* implicit */unsigned int) (signed char)-33);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21800)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (max((((/* implicit */short) var_15)), ((short)8191)))));
}
