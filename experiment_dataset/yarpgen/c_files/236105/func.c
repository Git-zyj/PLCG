/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236105
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
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 = ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_7))));
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_19 += ((/* implicit */short) var_3);
        var_20 = ((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : ((-(arr_0 [i_0 - 1] [i_0 + 1]))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
        arr_2 [(unsigned char)15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 - 1])))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) (short)18);
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((max(((((_Bool)1) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_14)))), ((+(((/* implicit */int) var_13)))))) <= (((var_12) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [4U])) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) var_14)))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] [(short)3] = ((/* implicit */signed char) (-(max((arr_5 [i_1 - 2] [13ULL]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            arr_8 [i_1] = ((/* implicit */short) (~(((/* implicit */int) min((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2]))))));
        }
    }
}
