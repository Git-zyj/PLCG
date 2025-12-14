/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231803
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
    var_13 = ((unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 1549027920)) || (((/* implicit */_Bool) var_3)))))));
    var_14 = ((/* implicit */int) var_11);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_8)), (var_12)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_16 = arr_1 [i_0];
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            var_18 |= ((/* implicit */short) ((arr_5 [i_0]) != (var_1)));
        }
        arr_6 [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [(short)14]))));
        arr_9 [i_2] = arr_0 [i_2];
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_20 = ((arr_4 [i_3]) | (min((((/* implicit */int) ((unsigned char) arr_7 [i_3]))), (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)22481)))))));
        arr_13 [i_3] = ((/* implicit */short) ((unsigned char) min((arr_8 [i_3]), (arr_4 [i_3]))));
    }
}
