/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230489
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65535))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) var_2);
            var_21 = ((/* implicit */long long int) var_12);
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (var_2)));
            arr_11 [i_1] [i_1] = ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) ((((/* implicit */int) (short)8040)) > (((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */int) var_14)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_22 = ((/* implicit */_Bool) ((unsigned char) arr_4 [i_3] [i_2]));
                arr_14 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((755602222) != (((/* implicit */int) arr_3 [i_2] [i_1])))))));
                arr_15 [i_3] [i_2] [i_3] = (~(arr_9 [i_1] [i_1] [i_3]));
                arr_16 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((arr_5 [i_1]) && ((_Bool)1)));
                arr_17 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (short)-8040);
            }
        }
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)8040)) ? (((/* implicit */int) (short)8040)) : (((/* implicit */int) (signed char)-87)))), (((arr_9 [i_1] [i_1] [i_1]) / (arr_9 [i_1] [i_1] [i_1])))));
    }
    var_24 = ((long long int) (unsigned short)1);
    var_25 = 605463378;
}
