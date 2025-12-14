/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36396
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
    var_17 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9371)) ? (((/* implicit */int) (short)32767)) : (1960287979)))) ? (((/* implicit */int) ((-2128498928) >= (var_14)))) : (var_8))), (var_8));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = arr_1 [i_0];
                    arr_7 [14U] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -507625320)) ? (-970577835) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-2101675812)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))));
                    arr_9 [i_0] = ((/* implicit */short) ((((var_15) / (arr_4 [i_0] [i_0]))) * (((/* implicit */int) arr_0 [i_0]))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
        var_19 -= ((/* implicit */int) ((short) var_9));
    }
}
