/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247815
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
    var_13 = ((/* implicit */signed char) (short)32704);
    var_14 |= ((/* implicit */signed char) ((unsigned short) var_7));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)70))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) != (((((/* implicit */_Bool) (unsigned short)59180)) ? (2147352576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-35))))))))) != (max((max((var_8), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_2))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_17 |= ((/* implicit */unsigned short) (((~(arr_5 [i_0 - 2]))) <= (((/* implicit */long long int) 1091203249U))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((var_8), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */_Bool) (+(min((var_2), (9223372036854775807LL)))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_0 - 2] [i_0 - 1])))) != (min((((/* implicit */unsigned long long int) var_3)), (var_8)))));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_13 [i_3 + 1])) || (((/* implicit */_Bool) arr_13 [i_3 + 1])))), ((!(((/* implicit */_Bool) (signed char)-104))))));
        arr_15 [i_3] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_7 [i_3] [i_3 + 1])))));
        var_19 |= ((/* implicit */signed char) min((max((max((760196846U), (((/* implicit */unsigned int) (unsigned short)59180)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_5)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_11)) : (arr_13 [i_3]))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) (short)47)) : (((/* implicit */int) arr_8 [i_3])))))), ((~(var_7)))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_0);
    }
    var_20 |= ((/* implicit */short) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
