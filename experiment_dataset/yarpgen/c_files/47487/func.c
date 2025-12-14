/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47487
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
    var_19 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (var_12)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((unsigned int) (((~(var_3))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_16))))))));
        var_21 = max((((/* implicit */unsigned long long int) max((max((var_13), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (var_5))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_2))))) + (min((((/* implicit */unsigned long long int) var_10)), (var_3))))));
        var_22 = var_8;
        arr_2 [i_0] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_5))));
        var_23 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) ((signed char) var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (var_5)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_24 -= ((/* implicit */signed char) (-(((var_9) + (var_17)))));
        var_25 = ((/* implicit */int) var_0);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) var_9));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = var_0;
        var_26 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_0) : (var_9))));
        var_27 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_6);
    }
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_28 = ((unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9))));
                var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) var_11)) + (var_10)));
            }
            var_30 = ((/* implicit */int) max((((var_5) + (var_10))), (((((var_10) + (((/* implicit */unsigned int) var_6)))) + (var_18)))));
            var_31 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_6)))) ? (((var_0) + (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_11))) + (((/* implicit */int) var_7))));
        var_33 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) var_12)) + (var_18)))));
        var_34 += ((/* implicit */signed char) var_6);
    }
    var_35 = ((/* implicit */short) var_11);
    var_36 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_11)), ((~(var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */signed char) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_38 = ((/* implicit */unsigned int) var_6);
        var_39 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
        arr_23 [i_6] = ((/* implicit */unsigned short) (~(var_17)));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] [i_7 + 1] = ((/* implicit */short) ((((unsigned long long int) var_17)) << (((var_12) + (1944415320)))));
        var_40 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10))))));
    }
}
