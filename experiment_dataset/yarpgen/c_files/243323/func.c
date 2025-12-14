/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243323
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_0))))), (((((/* implicit */int) var_9)) >> (((/* implicit */int) var_8))))))) ? ((~((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) != (((/* implicit */int) max((var_0), ((_Bool)0)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) max((max((arr_1 [(_Bool)1] [(_Bool)1]), (arr_1 [i_0 - 1] [i_0 - 1]))), ((_Bool)1))))));
        var_13 ^= var_3;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_8)))))) | (((/* implicit */int) (_Bool)1))));
        var_15 = ((_Bool) (-(((/* implicit */int) max((var_10), (arr_4 [i_1]))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) >> (((/* implicit */int) var_3))))))) ? (((var_8) ? ((+(((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) max((var_0), (arr_3 [i_1])))))) : (((min((var_7), ((_Bool)1))) ? (((/* implicit */int) var_6)) : (((arr_3 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) min((var_4), (((((/* implicit */int) arr_7 [i_2] [i_2 + 1])) < (((/* implicit */int) var_6))))))))))));
        arr_8 [(_Bool)1] = ((((min((var_3), (arr_7 [i_2] [i_2]))) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2])) : (((/* implicit */int) ((_Bool) (_Bool)0))))) >= (((arr_5 [i_2] [i_2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max(((_Bool)1), (var_8)))))));
    }
}
