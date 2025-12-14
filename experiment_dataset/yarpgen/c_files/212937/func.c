/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212937
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (16334397215440644895ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4669407237776400702LL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)136)), ((unsigned short)65340)))) : (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-((~(1426460263U)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) (~(arr_9 [i_1] [i_1] [i_2 + 1])));
            arr_10 [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) (+(1426460263U)));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1]))));
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_8 [i_1] [i_1])))))));
            arr_13 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_1])) >> (((-11398984666194824LL) + (11398984666194837LL)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_3]))));
            var_17 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (signed char)-30)))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_1]))) - (((unsigned int) var_8))));
            arr_16 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) var_7))) | ((~(0LL)))));
            var_19 = arr_14 [i_3] [i_1];
        }
        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            arr_19 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_4 - 2] [i_1]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_1])) : ((-(((/* implicit */int) (unsigned char)116))))));
            var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (short)10659)) ? (1063323835U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25041))))));
            arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)22748)) || (((/* implicit */_Bool) (~(0LL))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(31U)))) ? (((/* implicit */int) ((((/* implicit */int) min((var_8), ((signed char)30)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -8481903636178433437LL)))))))) : (((/* implicit */int) (((-(4669407237776400701LL))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        arr_26 [(_Bool)1] [i_6] = max((((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [(_Bool)0]))))), (((short) (short)18288)));
    }
    var_23 = ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
}
