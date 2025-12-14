/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230650
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
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6158959726366777006LL)) ? (max((((/* implicit */long long int) var_12)), (-1856888931973681490LL))) : (((/* implicit */long long int) max((4294967275U), (((/* implicit */unsigned int) (short)873)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * (((/* implicit */int) var_9))))) : (var_17)));
    var_20 = var_13;
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967275U)))) ? (((((/* implicit */_Bool) 1856888931973681477LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30287))) : (1856888931973681494LL))) : (arr_1 [i_0 - 2])))) ? (1856888931973681484LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (arr_0 [i_0 + 1]))))));
        var_22 |= ((/* implicit */short) ((((arr_0 [i_0 - 1]) >= (1972793677U))) ? (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)17289))));
                        arr_15 [14U] [14U] [i_3] [i_2] [0] = ((/* implicit */long long int) (-(4294967295U)));
                        arr_16 [i_1] [i_3] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned short) (signed char)31);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [6]))), (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_12 [(short)2] [(short)2] [(short)2] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_17 [i_1] [i_1] |= ((/* implicit */short) max((arr_10 [i_1]), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
    var_24 = ((/* implicit */unsigned int) var_13);
}
