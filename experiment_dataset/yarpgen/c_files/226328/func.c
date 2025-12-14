/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226328
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) 2U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_11)))), ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_4), (var_8)))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [(short)8] &= ((/* implicit */unsigned int) arr_1 [4LL]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_18 *= ((/* implicit */short) ((arr_5 [i_1] [i_1]) / (arr_5 [i_1] [i_1])));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_18 [(short)17] [18U] [(_Bool)1] [i_5])));
                        arr_21 [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_9 [i_2])));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (max((((/* implicit */int) var_6)), (var_1)))))) ? (((var_3) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
    var_22 += ((/* implicit */unsigned int) var_13);
}
