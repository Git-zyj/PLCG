/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214839
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) ((long long int) ((long long int) arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_7))))) ? (min((var_5), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_4] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))))));
                        arr_13 [i_1] = ((_Bool) arr_7 [i_4 - 2] [i_3] [i_2]);
                    }
                } 
            } 
        } 
        var_18 = var_10;
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_19 = arr_14 [i_5 + 1];
        arr_16 [i_5 + 1] = var_12;
    }
    for (long long int i_6 = 3; i_6 < 7; i_6 += 2) 
    {
        var_20 = ((_Bool) ((long long int) var_4));
        arr_19 [4LL] = ((/* implicit */long long int) var_7);
    }
    var_21 = ((_Bool) ((_Bool) var_10));
    var_22 = var_11;
}
