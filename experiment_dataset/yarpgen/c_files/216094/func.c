/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216094
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((signed char) arr_3 [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_21 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) / (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (arr_6 [i_0] [i_0])))));
            var_22 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_1]));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3133255804U)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (8589934591ULL)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [i_0])))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (-((~(arr_4 [i_2])))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_2]) / (3957631564U))))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
    {
        arr_16 [6U] |= ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_16)))));
        var_25 *= ((((var_16) % (((/* implicit */unsigned int) arr_14 [i_3])))) % (((/* implicit */unsigned int) ((/* implicit */int) var_18))));
    }
    for (signed char i_4 = 3; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */signed char) var_1);
            var_27 = ((/* implicit */signed char) ((int) (-(arr_3 [i_4 - 3]))));
            var_28 |= ((/* implicit */unsigned long long int) arr_5 [i_4 - 1] [i_5]);
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned int) arr_9 [i_4 + 2])) : (arr_22 [i_4] [i_4 - 2] [i_4 + 2]))));
            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_4] [i_4] [i_4 - 2]))));
            var_31 = arr_23 [i_6] [i_4] [i_4];
            var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) (_Bool)0)), (arr_12 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned char)3]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6] [i_4])) && (((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_4]))))))))));
        }
        var_33 += ((/* implicit */unsigned long long int) ((int) (unsigned char)85));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) 
    {
        var_34 = ((/* implicit */int) arr_3 [i_7]);
        var_35 = ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))));
        var_36 = (+(arr_22 [i_7] [i_7 - 2] [i_7 - 2]));
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) (~(arr_10 [i_7 + 3] [i_7 - 1])));
    }
    var_37 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)171)), (-1)));
}
