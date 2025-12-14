/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23649
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
    var_17 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11123964188056010051ULL)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [1U] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_7))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (3302841568U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) max((var_14), (var_14))))) % (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_0 [11] [i_1]))));
                var_23 ^= ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_2]);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_14))));
                var_25 = ((((/* implicit */int) ((_Bool) (_Bool)1))) * ((+(((((/* implicit */_Bool) 1964604771U)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
