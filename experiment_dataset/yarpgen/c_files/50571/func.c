/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50571
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(arr_2 [i_0] [(signed char)1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) ((short) arr_2 [(unsigned short)5] [i_1])))))));
            var_15 = ((/* implicit */unsigned int) max((max((arr_3 [i_0 + 2] [i_0 + 1] [i_1 - 1]), (arr_0 [i_0 + 3]))), ((-(arr_1 [i_0 + 1])))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_0 [i_0]))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [(unsigned char)4] [i_0 + 2] [i_0])))) ? (max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_0]))) : (arr_3 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])));
        var_17 = arr_1 [i_0];
    }
    var_18 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_19 &= ((/* implicit */signed char) arr_8 [i_2]);
        var_20 = ((/* implicit */long long int) ((short) arr_8 [i_2 - 1]));
        arr_9 [i_2] = ((/* implicit */signed char) arr_7 [i_2]);
        var_21 = ((/* implicit */unsigned int) arr_7 [i_2]);
    }
}
