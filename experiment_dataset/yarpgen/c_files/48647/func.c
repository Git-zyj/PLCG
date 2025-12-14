/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48647
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (min((var_2), (var_7)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_8)))) ? (min((var_15), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_2)) : (var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) arr_1 [17U])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(short)15]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])))) / (((/* implicit */int) arr_1 [i_3]))));
                        arr_11 [i_0] [(short)2] [i_2] [23] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [22ULL] [i_3])))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0]))));
                        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_2]))) : (arr_8 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_1]))))));
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
    }
}
