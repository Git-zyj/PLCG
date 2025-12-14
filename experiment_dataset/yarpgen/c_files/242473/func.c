/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242473
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
    var_12 ^= ((/* implicit */_Bool) ((short) 2717819639U));
    var_13 = ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */signed char) (~(1577147656U)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) (~((~(((var_0) ? (((/* implicit */unsigned long long int) 2717819628U)) : (arr_1 [i_2] [i_3])))))));
                        arr_11 [i_3] [i_1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)28923))));
                        arr_12 [i_3] = ((/* implicit */unsigned short) var_7);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) (+(2717819625U)));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) 2717819609U);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0])) + (((/* implicit */int) arr_10 [i_1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                        arr_17 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) * (((/* implicit */int) var_3))));
                    }
                    arr_18 [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 1]), (arr_8 [i_0 - 2] [i_1] [i_0 - 2] [i_0 + 1]))))));
                    arr_19 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 8882039397331021174ULL)) ? (((/* implicit */long long int) 2717819614U)) : (-4130599987872149429LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]))) * (var_11))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_7);
}
