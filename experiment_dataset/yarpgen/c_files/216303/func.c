/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216303
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((9706958631409010117ULL) - (9706958631409010086ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_11 [i_2] [(signed char)5] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)105))));
                    arr_12 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3 + 1] [i_3]))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) var_11))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (8739785442300541498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
    }
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (min((((/* implicit */long long int) var_7)), (8265223670846646726LL)))))) ? (((unsigned int) ((int) (_Bool)1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
    var_19 = ((/* implicit */int) var_0);
}
