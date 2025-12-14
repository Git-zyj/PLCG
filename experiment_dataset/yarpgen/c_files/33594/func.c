/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33594
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(2952864172U)))), (var_1)));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_8))));
    var_12 += ((/* implicit */short) (-(((int) ((((/* implicit */_Bool) 2185080148311337068LL)) ? (var_4) : (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = var_7;
        arr_2 [i_0] = ((((/* implicit */_Bool) var_3)) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((int) var_6))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_14 += ((short) (unsigned short)28501);
        var_15 = ((/* implicit */long long int) (~(max((arr_5 [i_1]), (arr_5 [i_1])))));
        var_16 = ((/* implicit */long long int) ((int) ((arr_0 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    }
    for (long long int i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) arr_6 [i_2]);
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        var_18 ^= ((/* implicit */long long int) ((unsigned short) var_6));
                        var_19 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_4 - 3] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26906)) ? (((/* implicit */int) arr_12 [i_5] [i_2] [i_3 + 2] [(signed char)19] [i_2])) : (544492977)))) : (arr_11 [17] [i_3] [(unsigned short)8])))) : (arr_6 [i_2])));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((short) ((long long int) arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 + 1]))))));
    }
}
