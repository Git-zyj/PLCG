/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215760
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)3))));
        var_18 += ((/* implicit */unsigned int) var_4);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (((/* implicit */unsigned int) var_6)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_8 [i_2] = (_Bool)1;
        arr_9 [(unsigned short)11] [i_2] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) var_8);
            arr_13 [i_2] = ((/* implicit */unsigned short) var_14);
            arr_14 [i_2] = (!(((/* implicit */_Bool) (short)1023)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) arr_16 [i_4] [i_4]);
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_17)) > (((/* implicit */int) arr_5 [i_2] [i_4]))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned long long int) arr_15 [i_2] [i_4] [i_4])) : (var_7)));
        }
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_24 = ((/* implicit */signed char) arr_19 [i_5] [i_5]);
        arr_20 [i_5] = ((/* implicit */unsigned short) -1);
    }
    var_25 -= ((/* implicit */unsigned long long int) var_4);
    var_26 *= ((/* implicit */long long int) 1);
}
