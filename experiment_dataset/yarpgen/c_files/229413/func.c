/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229413
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)-32)))) & (((/* implicit */int) ((signed char) arr_0 [i_0 + 1] [i_0 - 1])))));
        arr_3 [i_0 - 1] = ((/* implicit */int) var_13);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [5LL] [i_0 + 2])) > (var_12))))));
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((min((((/* implicit */int) (_Bool)1)), (var_15))) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_2 [3] [3])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])))))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned int) arr_5 [i_1] [1LL]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_15 [i_1] [i_2] [13] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)38))));
                    arr_16 [i_3] [21] [i_2] [i_1] = ((/* implicit */signed char) (unsigned char)34);
                    arr_17 [i_3] [i_2] [i_2] [17] = ((/* implicit */signed char) max((((arr_9 [i_1]) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_5)))), (((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) arr_9 [i_3]))))));
                }
            } 
        } 
        arr_18 [i_1] [i_1] = ((int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)119)))) || (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_7 [i_1]))))));
        var_19 -= min((((long long int) var_11)), (((/* implicit */long long int) ((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [12])))) | (((/* implicit */int) ((((/* implicit */int) var_9)) >= (arr_14 [i_1] [i_1] [i_1]))))))));
    }
    var_20 &= ((/* implicit */long long int) ((int) var_9));
}
