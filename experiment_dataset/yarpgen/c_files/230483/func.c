/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230483
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
        var_17 = ((/* implicit */signed char) (((+(((/* implicit */int) var_11)))) != (((/* implicit */int) arr_3 [i_0]))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29))))) + (((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))))) & (((/* implicit */int) (short)-8898))))));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)-29)), (arr_3 [i_1])))) % (((/* implicit */int) arr_3 [i_1 + 1])))))));
        arr_6 [(signed char)2] = ((/* implicit */short) arr_5 [i_1] [i_1]);
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)-1)));
        arr_10 [(short)7] = ((/* implicit */signed char) (-(((/* implicit */int) min((((signed char) arr_2 [i_2])), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-10))))))))));
        var_21 = ((short) (short)6440);
    }
    var_22 = ((/* implicit */short) (-((-(((/* implicit */int) ((signed char) (short)(-32767 - 1))))))));
}
