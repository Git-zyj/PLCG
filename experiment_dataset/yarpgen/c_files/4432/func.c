/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4432
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
    var_16 ^= ((/* implicit */_Bool) var_9);
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_1) != (((/* implicit */int) var_10))))) : (var_0)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_18 -= ((/* implicit */int) ((signed char) arr_1 [i_0]));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) 800436208);
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned int) (signed char)96);
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_2])) - (((((/* implicit */_Bool) 5349548402379170479ULL)) ? (((/* implicit */unsigned long long int) 1964377017)) : (4815450224145170549ULL)))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) var_12)))))));
            arr_8 [i_2] [i_2] = ((/* implicit */long long int) var_14);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_3 [i_0] [i_0]))));
        }
        arr_9 [i_0] = ((/* implicit */_Bool) var_0);
        var_23 = ((/* implicit */unsigned short) (-(arr_0 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) var_14);
        arr_14 [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_2)))));
        var_25 = min((var_1), (((/* implicit */int) ((((/* implicit */int) (unsigned short)54096)) >= (((/* implicit */int) (short)0))))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned int) (_Bool)1);
        var_27 = ((/* implicit */int) (unsigned char)240);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) max((6946677226112194568ULL), (((/* implicit */unsigned long long int) -1221798483872105100LL))))))));
        var_28 = var_13;
        var_29 = ((/* implicit */long long int) var_6);
    }
}
