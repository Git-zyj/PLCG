/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209337
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_10), (((/* implicit */short) var_1)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (short)-2))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) (short)-2))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (short)5588)) : (((/* implicit */int) arr_3 [i_0 - 1] [(_Bool)1]))))) ? (((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) ((short) (short)-4026)))));
        var_13 ^= ((/* implicit */signed char) (short)-15);
    }
    for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */short) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_5 [(signed char)5]), ((short)-35))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((arr_6 [i_1 - 2]) ? (((var_7) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1 - 1])))) : (((/* implicit */int) arr_5 [i_1 - 2])))) : ((~(((/* implicit */int) max(((_Bool)0), (arr_6 [i_1 + 1]))))))));
    }
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)-35)))) ? ((-(((/* implicit */int) max((var_5), (var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_8), ((_Bool)1)))) : (((/* implicit */int) (short)9)))))))));
    var_16 = ((((/* implicit */int) ((short) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))))) <= (((/* implicit */int) var_1)));
}
