/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23751
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
    var_20 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) || (((/* implicit */_Bool) arr_2 [i_0]))));
            var_22 |= ((((/* implicit */_Bool) min((var_19), (arr_2 [4U])))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)0])), (arr_0 [i_1]))) : ((-(arr_0 [i_1]))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [14ULL]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)12])) == (((/* implicit */int) var_2))))) : (((/* implicit */int) arr_2 [2U])))))));
        }
        var_24 = ((/* implicit */unsigned char) var_11);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((arr_6 [i_2]) - ((+(arr_6 [i_2])))));
        arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))));
    }
    var_26 = var_5;
    var_27 = ((/* implicit */_Bool) max((var_11), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_18))))))));
    var_28 |= ((/* implicit */unsigned short) var_4);
}
