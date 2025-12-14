/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247089
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_12 = ((/* implicit */int) (~((-(var_10)))));
    }
    var_13 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (1551817044U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)24094)) & (var_7)))) : (max((arr_5 [i_1]), (((/* implicit */long long int) var_9)))))));
        var_14 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_5 [i_1]), (arr_5 [i_1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) var_8);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 6539290766155894107LL))) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_2) : (((/* implicit */unsigned int) var_6)))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_17 = (!(((/* implicit */_Bool) var_7)));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) 2743150252U)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))))));
                var_19 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3 + 3]))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (var_7)))) && (((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 + 2]))));
                var_21 = ((unsigned int) var_2);
                var_22 = ((/* implicit */long long int) 1551817071U);
            }
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) != (((/* implicit */int) (unsigned char)99)))))));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (((long long int) (unsigned short)42557))));
            var_25 = ((/* implicit */unsigned int) arr_15 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]);
        }
        var_26 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_27 = ((/* implicit */signed char) var_7);
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    }
    var_29 = ((/* implicit */unsigned int) min((((int) var_5)), (((((/* implicit */int) min(((unsigned char)196), (var_1)))) * (((((/* implicit */_Bool) 5741268282030583803LL)) ? (((/* implicit */int) var_8)) : (var_7)))))));
    var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
}
