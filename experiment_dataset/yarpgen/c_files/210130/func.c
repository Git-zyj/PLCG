/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210130
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_0 [i_0]) << (((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) - (3655361742U))))))));
        var_19 = ((/* implicit */short) var_11);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_2] [i_2] [i_2]))) : (((int) (signed char)67))));
                arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2]) : (arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2])))) ? ((-(arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]))) : (((arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]) >> (((var_6) - (4233506846U)))))));
            }
            var_20 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-6385)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-6404)) : (var_17))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)95)), (var_9)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)12]))) : (var_12)))) || (((/* implicit */_Bool) arr_2 [i_1])))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3] [i_3]);
        var_22 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [(unsigned char)13] [i_3]))) : (-3412126140543548128LL))))));
    }
    var_23 |= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_14))), (min((((/* implicit */int) var_8)), (((((/* implicit */int) (unsigned char)230)) / (var_17)))))));
}
