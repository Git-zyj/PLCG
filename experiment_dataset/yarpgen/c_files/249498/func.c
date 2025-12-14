/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249498
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((7461272777948198028LL), (((/* implicit */long long int) arr_0 [i_0]))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)32763)))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)0)))))) || (((/* implicit */_Bool) (short)32767))));
            var_21 = ((/* implicit */int) arr_1 [i_0]);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */int) arr_1 [i_0]))))), (586045014835070277ULL)))) || (((/* implicit */_Bool) (~(arr_3 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_23 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [2] [i_0 - 1] [i_1])) ? (max((((/* implicit */unsigned long long int) 2147483647)), (arr_5 [i_0]))) : (((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (arr_4 [i_3] [i_2] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [(short)11] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-31235)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_1 + 1]))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (128)))) ? (((/* implicit */int) ((arr_0 [(unsigned short)6]) || (((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_1] [i_2] [i_1] [i_1 + 1]))))) : (((/* implicit */int) ((_Bool) 1198265428)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1]))))) : ((~(((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28084)) ? (4294967295U) : (23U)))))), (((/* implicit */unsigned long long int) (signed char)100))));
}
