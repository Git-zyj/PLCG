/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200194
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
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 ^= ((/* implicit */unsigned short) var_17);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((var_8) == (((/* implicit */long long int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) var_12)))))))) || (((/* implicit */_Bool) (short)32767)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) (signed char)-44))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) ((max((arr_4 [i_0]), (arr_4 [i_0]))) <= (min((var_8), (var_11)))));
            var_25 = ((/* implicit */signed char) arr_4 [i_0]);
            arr_5 [i_0] [i_0] [i_0] = var_3;
            arr_6 [i_0] [i_1] = ((((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1])))) | (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_1]))));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_2 + 2] [i_2 + 1])), (var_8)))) || (((/* implicit */_Bool) arr_3 [i_2 + 1]))));
                var_27 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_9 [i_2 + 1])), (arr_4 [i_2 - 1]))) < (((((arr_4 [i_2 + 1]) + (9223372036854775807LL))) << (((arr_9 [i_2 - 1]) - (580778402)))))));
                var_28 = ((/* implicit */signed char) arr_8 [i_0] [i_2 - 1]);
            }
        }
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) min((max((arr_12 [i_3]), (arr_12 [i_3]))), (((/* implicit */unsigned int) arr_11 [i_3]))));
        var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_17)), (min((arr_10 [(signed char)11] [i_3]), (((/* implicit */unsigned long long int) var_6))))));
        var_31 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_12 [i_3])) - (arr_10 [i_3] [i_3]))), (((/* implicit */unsigned long long int) (unsigned short)4220))));
        var_32 = ((/* implicit */long long int) arr_11 [i_3]);
        arr_14 [i_3] = ((/* implicit */_Bool) var_14);
    }
    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
    {
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_1))));
        var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_15 [i_4]))))), ((signed char)43)))), (min((var_10), (((/* implicit */unsigned short) var_19))))));
        var_35 = ((/* implicit */short) (signed char)47);
    }
    var_36 = ((/* implicit */unsigned long long int) var_3);
}
