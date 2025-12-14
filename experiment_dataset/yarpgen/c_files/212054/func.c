/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212054
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((arr_0 [i_0]) % (((/* implicit */unsigned int) -1565160967))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_1])) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) 1565160967)))) : (((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)14574))))))));
                    var_14 = ((/* implicit */int) (+(arr_1 [i_1])));
                }
            } 
        } 
        arr_7 [i_0] = ((((/* implicit */_Bool) arr_4 [(unsigned char)8] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) arr_4 [(short)8] [i_0] [i_0])));
        var_15 = ((/* implicit */short) arr_4 [2] [i_0] [i_0]);
    }
    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_3 + 1])), (((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43805)))))))), (min((((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3])))))), (var_6)))));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_3 + 3])) && (((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */int) arr_8 [i_3])) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_9 [i_3 - 2])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_10 [i_3]))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_6))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) arr_4 [(unsigned char)8] [(unsigned char)8] [i_4]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 4]))) + (arr_0 [i_4 + 4])));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max(((+(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) >= (var_8)))))))));
    var_22 = ((/* implicit */unsigned short) var_1);
}
