/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38539
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
    var_15 = ((/* implicit */short) var_3);
    var_16 = (-(((/* implicit */int) ((((/* implicit */_Bool) (+(14644831537477103078ULL)))) && (((/* implicit */_Bool) min((var_1), (var_3))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) var_14);
                            var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)11382))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) : (arr_3 [i_1] [i_1 - 1]))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((arr_8 [i_1] [i_0 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (max((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_14)), (var_0)))))) : (max((((/* implicit */unsigned long long int) 1033445785)), (arr_9 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 2])))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_9))))), (((((var_4) + (2147483647))) >> (((((/* implicit */int) var_6)) - (101)))))))) ? (((arr_11 [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1] [i_0 - 3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_22 = ((/* implicit */short) (+((+(((/* implicit */int) var_10))))));
            var_23 = ((/* implicit */short) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_13)) - (18519))))) << (((arr_8 [i_5 + 1] [i_0 - 1]) - (124857206U)))));
        }
        var_24 |= ((/* implicit */unsigned char) (+(((((/* implicit */int) ((short) var_11))) >> (((((/* implicit */int) var_0)) - (6875)))))));
        arr_14 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) (~((~(131071)))));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_19 [i_6 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_3 [i_6 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))));
    }
}
