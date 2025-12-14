/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243735
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */_Bool) max((var_14), ((_Bool)1)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (max((18446744073709551592ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15322)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0]))));
        var_17 = ((/* implicit */unsigned char) (short)-15323);
        arr_2 [i_0] [(signed char)18] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15322)) ? (((/* implicit */int) (short)-24442)) : (((/* implicit */int) (signed char)-50))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) arr_0 [i_1]);
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (short)32767))));
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)27832)) : (((/* implicit */int) arr_5 [i_1]))))));
    }
}
