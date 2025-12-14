/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51312
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
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) min((var_2), (988177188))))))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))))))));
    var_20 = var_0;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (+(((arr_1 [i_0]) >> (((arr_1 [i_0]) - (1934256808U)))))))) ? (((((((arr_0 [i_0 - 1]) + (9223372036854775807LL))) >> (((var_7) - (4468613650663125411LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))) : (arr_0 [i_0 - 2]));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((((/* implicit */int) (unsigned char)77)) - (43)))))) ? (((((/* implicit */unsigned long long int) -3645021447364132659LL)) ^ (3ULL))) : (((/* implicit */unsigned long long int) (~(-3645021447364132659LL))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (min(((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))), (((((-9047824828387769484LL) & (arr_0 [i_0 - 2]))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [i_0])) : (3645021447364132636LL)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_23 |= ((/* implicit */int) ((((unsigned long long int) -5784998250856074829LL)) << ((((((-2147483647 - 1)) - (-2147483630))) + (79)))));
                        var_24 = ((((/* implicit */_Bool) (~(arr_4 [i_3 + 3] [i_2 + 3])))) ? (((var_14) | (((/* implicit */long long int) arr_16 [i_1] [i_3 + 1] [i_3] [i_2 + 1])))) : (((arr_4 [i_3 + 1] [i_2 - 1]) ^ (((/* implicit */long long int) arr_16 [i_1] [i_3 + 3] [7LL] [i_2 + 2])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) arr_14 [i_1] [4] [4] [4]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_26 *= ((((/* implicit */_Bool) (+(((((/* implicit */long long int) var_6)) & (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_7), (arr_13 [i_5] [18] [i_5] [i_5]))) == (((((/* implicit */_Bool) 3679776500U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [7U] [i_5]))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_16))) > (var_3))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
        var_27 = ((/* implicit */unsigned char) ((18446744073709551610ULL) + (((/* implicit */unsigned long long int) 3596325140U))));
        arr_20 [(_Bool)1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_5])) ? (((arr_4 [i_5] [(_Bool)1]) << (((((arr_6 [i_5]) + (1980672434321570982LL))) - (8LL))))) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_16 [i_5] [i_5] [i_5] [i_5]))))));
    }
}
