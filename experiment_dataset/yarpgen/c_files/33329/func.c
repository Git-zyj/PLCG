/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33329
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned long long int) ((var_9) ? (-1863879237) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) ((arr_1 [i_1]) >> (((((/* implicit */int) var_2)) - (170)))))) ? ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_1])))) : (((/* implicit */int) var_6))))));
            arr_5 [i_0 + 1] [i_1] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1] [1U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) (_Bool)1))));
            var_14 += ((/* implicit */int) ((unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1]));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))));
            var_17 = ((/* implicit */long long int) (_Bool)1);
            arr_9 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_1 [i_0]))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_8 [i_0 + 1])) - (1))))) : (((((((((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_1 [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_8 [i_0 + 1])) - (1)))));
            var_18 |= ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0 + 1] [i_0]) << (((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_4] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_3] [i_4] [i_0]))));
                    var_19 &= ((/* implicit */_Bool) (-(((int) arr_1 [i_4]))));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_20 += ((/* implicit */long long int) (_Bool)1);
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_5)), (arr_17 [i_5]))), (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_17 [i_5])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((arr_18 [i_5]), (arr_18 [i_5]))))))) : (arr_17 [(_Bool)1])));
        arr_20 [i_5] = ((/* implicit */short) (_Bool)1);
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (_Bool)1))));
    var_22 -= ((((_Bool) (~(var_10)))) ? (((/* implicit */int) ((short) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */int) var_6)));
    var_23 = ((/* implicit */short) (_Bool)1);
    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) (((_Bool)1) ? (((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) var_0)), (var_7)))))) * (((long long int) var_4))));
}
