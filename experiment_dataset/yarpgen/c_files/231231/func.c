/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231231
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
    var_19 = ((/* implicit */unsigned char) var_11);
    var_20 = (~(8191U));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [(unsigned char)6] [i_0] = ((/* implicit */signed char) (+(((((var_2) + (2147483647))) << (((var_14) - (514296375U)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((unsigned int) (-9223372036854775807LL - 1LL)));
            arr_8 [i_1] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_1 - 3] [i_0]))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8103))) : (7ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [(_Bool)1] [i_1 - 2] [i_1])))));
        }
        for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [14U]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0]))))))));
            var_22 += ((/* implicit */int) (unsigned char)127);
            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_2 - 2]))));
            var_24 = ((/* implicit */short) (~(((((/* implicit */int) var_9)) * (((((/* implicit */int) (unsigned char)219)) / (-1164433770)))))));
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_0] [i_0]) : ((-(arr_9 [i_0] [i_2] [i_2])))))) : (((max((0ULL), (((/* implicit */unsigned long long int) var_16)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_3]))))), (((unsigned int) arr_12 [i_3]))));
        var_27 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_2)), (arr_13 [i_3]))) < (arr_13 [i_3]))))));
    }
}
