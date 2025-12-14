/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3560
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (arr_0 [i_0] [i_0 + 2])));
        arr_3 [i_0] = ((unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-20443)))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56955))) <= (4594946592815079360LL)))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
        var_16 = ((/* implicit */int) (~(var_1)));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_6)) & (((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_9)) - (30910)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_2]))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (-8506725437513303710LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_2]))) : (((/* implicit */int) arr_7 [i_2])))) - (53124))))))));
        var_21 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) arr_5 [(unsigned short)15] [i_2])));
        var_22 = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) max((((long long int) var_5)), (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? ((~(-2455206558105414607LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8579)))))))));
        var_23 = (~(((/* implicit */int) ((signed char) arr_10 [i_3]))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) var_8);
        arr_15 [(_Bool)1] &= ((((/* implicit */int) ((signed char) (signed char)-1))) <= (((/* implicit */int) arr_9 [i_4] [i_4])));
        var_25 = (~(((/* implicit */int) arr_9 [i_4] [i_4])));
    }
}
