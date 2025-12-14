/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45706
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_3 [i_0])))))), (var_1)));
        arr_5 [(short)7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((short) 2080374784U))) & (((/* implicit */int) (short)-1))))) < (max((var_7), ((+(2214592512U)))))));
        var_14 = ((/* implicit */short) ((min((arr_2 [i_0]), (arr_2 [i_0]))) << (((min((((((/* implicit */_Bool) (short)10)) ? (2080374790U) : (2080374790U))), (((2080374791U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) - (243U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_15 += ((/* implicit */short) max((((/* implicit */unsigned int) (short)32591)), (((((/* implicit */_Bool) 2080374783U)) ? (2214592488U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2214592529U))))))));
        var_16 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2080374784U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((short) arr_0 [i_1])))))), (((((/* implicit */_Bool) max((arr_6 [(short)0]), (arr_0 [i_1])))) ? (((((/* implicit */_Bool) (short)31885)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_7 [i_1] [6U]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 6; i_2 += 3) 
        {
            var_17 = min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (4294967295U))));
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
            var_18 ^= min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (2214592527U)))) ? (((unsigned int) arr_2 [i_1])) : (arr_3 [i_2 + 1]))));
        }
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_20 |= ((/* implicit */unsigned int) var_11);
}
