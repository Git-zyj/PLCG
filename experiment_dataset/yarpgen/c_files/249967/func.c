/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249967
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned char) (((+(arr_0 [i_0] [i_0 - 2]))) < (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (-8499308966543752887LL))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) min((arr_0 [i_0] [i_0]), ((~(arr_0 [i_0] [i_0 - 1])))));
        var_17 = ((/* implicit */unsigned char) (+(((unsigned int) max((var_8), ((unsigned char)255))))));
        var_18 ^= ((/* implicit */unsigned char) (unsigned short)35948);
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_2] [i_2])))) ? (min((((/* implicit */unsigned int) ((arr_7 [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))), (3554953089U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) >= (((/* implicit */int) arr_7 [i_2]))))))));
        arr_9 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(740014206U)))) ? (((unsigned int) arr_7 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_2] [i_2]))))));
    }
    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_13 [i_3 - 1] [i_3]))));
        arr_14 [i_3] = ((unsigned int) 740014226U);
        var_20 = max((min((min((531285011U), (arr_6 [i_3] [i_3]))), (arr_10 [i_3 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3554953089U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8717705354495277292LL))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        arr_18 [(unsigned short)0] [i_4] |= ((/* implicit */_Bool) var_10);
        var_21 = ((/* implicit */long long int) min((var_21), (((((var_0) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (signed char)78)))) + (119)))))));
    }
    var_22 = ((/* implicit */unsigned short) var_11);
    var_23 = ((/* implicit */unsigned int) max((var_23), (3554953070U)));
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_9)) : (((long long int) var_9))))))));
}
