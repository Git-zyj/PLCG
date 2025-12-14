/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33908
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_10)))) ? (((/* implicit */unsigned int) ((int) 3002900182U))) : (1292067113U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 3002900182U)) && (((/* implicit */_Bool) var_3))));
        arr_2 [i_0] = ((/* implicit */int) ((805306368) <= (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_1]);
            arr_6 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (-(((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0 - 3]) <= (arr_3 [7ULL])));
            arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3002900182U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8188))) : (11491643453957735455ULL)));
            var_13 = ((/* implicit */_Bool) max((var_13), (arr_4 [(short)6])));
        }
        arr_9 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [(unsigned char)10])) ? (1292067114U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) - (var_9)));
    }
    var_14 = ((/* implicit */unsigned short) 1443312842);
    var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((int) 18127569637629943491ULL))) ? (var_9) : (var_9)))));
    var_16 = ((/* implicit */short) (-(-805306368)));
}
