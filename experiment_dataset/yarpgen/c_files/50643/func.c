/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50643
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
    var_20 = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) / (max((var_17), (((/* implicit */unsigned int) var_3))))))), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (signed char)123))))) ? (min((((/* implicit */long long int) var_6)), (-7026952730304947153LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_4))))))));
    var_21 = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) (unsigned char)109)))))) & (((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [(_Bool)1] [(short)6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (var_18) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 3]))))));
        arr_4 [i_0 - 3] [i_0 - 3] = ((/* implicit */_Bool) ((unsigned short) ((max((arr_0 [i_0] [3U]), (((/* implicit */unsigned int) (unsigned char)228)))) >> (((arr_2 [i_0 + 2]) - (1151942393U))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))) + (2147483647))) >> (((592870202U) - (592870174U)))));
            arr_9 [i_1] [(_Bool)1] [i_2 + 3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) || (((/* implicit */_Bool) arr_8 [i_1 - 3])))))));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1 + 1]))))) ? (arr_0 [9ULL] [(unsigned char)10]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1 + 3])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) arr_0 [(_Bool)1] [(_Bool)1]);
        var_24 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [19U])) ? (592870202U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))), (min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((signed char) max((var_17), (arr_1 [i_3])))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((arr_0 [i_3] [i_3]) ^ (arr_11 [i_3]))), (((/* implicit */unsigned int) arr_8 [i_3]))))) ? (((((/* implicit */_Bool) ((short) 2506692995U))) ? ((~(var_18))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [15ULL])) + (2147483647))) >> (((arr_0 [(unsigned char)14] [i_3]) - (1365719939U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))) : (arr_2 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_6 [i_3]))))) : (((((/* implicit */_Bool) arr_2 [6ULL])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9881)))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_7 [i_4] [i_4] [i_4]), (arr_8 [i_4])))) ^ ((((~(((/* implicit */int) arr_7 [0] [(unsigned char)14] [(unsigned char)18])))) | (((/* implicit */int) ((unsigned char) (unsigned char)89)))))));
        var_26 = ((/* implicit */_Bool) ((unsigned long long int) max((3702097069U), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-115)))))));
    }
}
