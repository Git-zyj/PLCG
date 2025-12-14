/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216480
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37013))) : (4595750035333983680LL))));
        var_19 *= max((((/* implicit */unsigned int) arr_0 [(_Bool)1])), (((unsigned int) ((arr_0 [(short)4]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_20 = ((/* implicit */int) ((unsigned short) (unsigned char)214));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */signed char) arr_0 [i_0]))))) ? (var_12) : (arr_1 [i_0] [i_0 + 2])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1]))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) ((_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_4 [i_1]))))))))));
            arr_10 [i_2] = ((/* implicit */_Bool) var_8);
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_3] [i_4] [i_5 + 3]);
                        arr_22 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((int) arr_15 [i_1] [i_1] [i_3] [i_1]))) : (((unsigned int) arr_9 [i_5 + 1]))));
                        var_23 ^= ((/* implicit */short) var_16);
                    }
                } 
            } 
            arr_23 [i_3] [i_3] = ((/* implicit */int) arr_14 [i_3] [i_3] [i_1] [i_3]);
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1])))));
        arr_24 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_1] [(_Bool)1] [i_1]))) ? (((unsigned long long int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned char)6] [(unsigned char)6] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_1] [i_1] [i_1])))));
    }
    var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((unsigned int) var_13))));
    var_26 += ((/* implicit */long long int) ((short) var_2));
    var_27 = ((/* implicit */unsigned short) ((long long int) var_13));
}
