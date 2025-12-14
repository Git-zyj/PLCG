/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196265
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [18ULL])))));
        var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_15 = ((unsigned long long int) ((short) arr_1 [i_1] [i_1]));
        var_16 = ((/* implicit */int) arr_0 [i_1]);
        var_17 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)0))))) : ((~(16777215ULL))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_18 = arr_4 [i_4];
                        var_19 = ((/* implicit */short) (+((-(((/* implicit */int) (_Bool)1))))));
                        var_20 ^= (((-(((/* implicit */int) arr_6 [6ULL] [i_2] [i_4])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) (-2147483647 - 1)))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (8167939297936213014ULL))) & (((/* implicit */unsigned long long int) ((int) var_2))))));
    var_22 = ((/* implicit */int) (+(var_8)));
}
