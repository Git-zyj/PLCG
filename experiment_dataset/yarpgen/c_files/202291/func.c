/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202291
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
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-63), ((signed char)-101)))) ? (((/* implicit */int) max(((signed char)58), (var_13)))) : (((/* implicit */int) ((signed char) var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-84), ((signed char)-46))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((signed char) var_1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_2 [i_0 + 1]), (var_11))), (arr_3 [i_1 + 1] [i_3 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)45))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_2 - 1])))) : (((/* implicit */int) min((var_1), (max((arr_2 [i_0 + 1]), (arr_4 [i_0] [i_1 + 1] [i_1 + 1]))))))));
                        var_18 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_1 [i_1 + 1])))), (((/* implicit */int) max((arr_1 [i_1 - 1]), (arr_5 [i_0 + 2] [i_1 + 1]))))));
                    }
                } 
            } 
        } 
        arr_9 [(signed char)2] |= ((signed char) ((((/* implicit */_Bool) (signed char)24)) ? (((((/* implicit */int) (signed char)-104)) & (((/* implicit */int) (signed char)12)))) : (((/* implicit */int) (signed char)92))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)73)) ^ (((/* implicit */int) (signed char)51))))) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0] [(signed char)14])) : (((((/* implicit */int) max((arr_6 [i_0] [(signed char)20] [i_0]), (arr_4 [i_0 - 1] [i_0] [i_0])))) ^ (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_11)))))))))));
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(signed char)23])))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) arr_6 [(signed char)2] [(signed char)2] [i_0 + 1])) : (((/* implicit */int) arr_1 [(signed char)22]))))) ? (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))))))));
    }
    var_21 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)42)) - (((/* implicit */int) (signed char)51))));
}
