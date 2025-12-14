/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31762
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
    var_11 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1))))) % (min((var_9), (((/* implicit */int) (short)(-32767 - 1))))))));
    var_12 = ((/* implicit */long long int) (signed char)-117);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */long long int) (short)13018);
        var_15 = arr_1 [i_0];
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_3 [i_2]))));
            var_18 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1] [i_2]))));
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (var_9))) - (32751)))));
        }
        for (signed char i_3 = 4; i_3 < 13; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12720)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL))));
            var_20 = ((/* implicit */unsigned int) var_6);
        }
        var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)14054)) ? (arr_13 [0LL] [i_1] [i_1]) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_19 [i_4] &= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((var_9) / (((/* implicit */int) arr_15 [i_4]))))));
        var_22 &= ((/* implicit */unsigned short) var_1);
        var_23 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_1))))) : (((long long int) var_10)))) % (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
    var_25 = ((/* implicit */unsigned int) var_9);
}
