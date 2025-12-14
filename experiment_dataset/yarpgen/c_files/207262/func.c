/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207262
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
    var_14 = ((/* implicit */unsigned char) var_6);
    var_15 = var_1;
    var_16 = ((/* implicit */signed char) -1061982120430390655LL);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((~(2147483647))) == (min((((/* implicit */int) ((unsigned short) 297262741))), (min((((/* implicit */int) var_9)), (-297262742)))))));
        var_17 -= ((/* implicit */signed char) ((min((arr_1 [(signed char)4]), (((/* implicit */long long int) 297262751)))) < (((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (2029539812587089420LL) : (arr_1 [(unsigned short)2])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) ((unsigned int) arr_3 [i_1]));
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) 297262731)) & (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))))) : (min((((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))), (((/* implicit */unsigned int) max((var_10), (var_10))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((arr_1 [i_2]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-7957741962397673056LL))) - (4894LL)))))) : (((/* implicit */unsigned int) ((((((arr_1 [i_2]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-7957741962397673056LL))) - (4894LL))))));
            var_18 -= ((/* implicit */signed char) var_5);
            var_19 = ((/* implicit */signed char) ((long long int) (unsigned short)14770));
        }
    }
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
}
