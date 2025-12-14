/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24279
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
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */int) min((var_17), (var_10)));
    var_18 = (!(((/* implicit */_Bool) var_13)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) (+(max(((-(var_3))), (((/* implicit */unsigned long long int) ((arr_1 [12U] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) arr_2 [i_1]);
            var_21 = ((/* implicit */int) min((var_21), (max((((int) var_1)), (min((var_13), (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))));
            var_22 -= max((((/* implicit */unsigned int) var_14)), (max((((/* implicit */unsigned int) ((2133978084) >= (var_13)))), (2747754435U))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) var_8);
            var_24 = ((/* implicit */signed char) min(((-(((int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_9))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) ((signed char) arr_5 [i_3] [i_3]));
        var_26 = ((/* implicit */unsigned int) arr_8 [i_3]);
        arr_9 [i_3] = ((/* implicit */unsigned char) arr_8 [(unsigned char)5]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) var_7);
        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_29 -= ((/* implicit */signed char) var_3);
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) max((((/* implicit */short) ((unsigned char) min((arr_1 [i_5] [3LL]), (((/* implicit */unsigned int) arr_6 [1LL])))))), (((short) var_12))));
        var_31 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (max((var_3), (((/* implicit */unsigned long long int) var_9)))))));
        var_32 = ((/* implicit */unsigned int) min((arr_13 [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) ((var_7) || (((/* implicit */_Bool) arr_11 [i_5]))))))))));
    }
    var_33 = ((min((min((var_7), (var_7))), (var_4))) ? (((/* implicit */int) var_1)) : ((~(((var_13) / (((/* implicit */int) var_15)))))));
}
