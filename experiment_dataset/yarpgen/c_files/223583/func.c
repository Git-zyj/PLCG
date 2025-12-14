/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223583
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (arr_0 [i_0] [i_0 + 1])));
        var_13 *= ((/* implicit */long long int) (((+(min((((/* implicit */int) arr_2 [i_0] [17LL])), (var_9))))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_5)), (33030144)))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [18ULL])) ? (((/* implicit */int) arr_2 [21U] [13LL])) : (((/* implicit */int) arr_2 [4LL] [i_0]))))) ? (((/* implicit */int) var_5)) : (-33030144)))))));
    }
    var_15 &= ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned short) (+(var_6)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((((arr_3 [i_2]) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_3))));
            var_18 = ((/* implicit */long long int) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_3 [i_1]))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                var_19 = ((/* implicit */long long int) var_3);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_8))));
                arr_11 [i_2] [(short)16] [i_3] [i_1] &= ((/* implicit */signed char) ((1879048192) + (arr_4 [i_2])));
            }
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) 18446744073709551611ULL)))));
            arr_14 [i_1] [i_4] = ((/* implicit */signed char) arr_13 [i_1]);
        }
    }
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) 2093579123);
        arr_17 [i_5] [(short)23] &= ((/* implicit */signed char) arr_16 [i_5]);
        var_23 = ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) 11013561U))));
        var_24 = ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) 4ULL)))) <= (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [1LL]))) : (var_1))))) ? (((((var_9) <= (var_10))) ? (((/* implicit */int) arr_16 [(_Bool)1])) : (((/* implicit */int) min((arr_16 [i_5]), (((/* implicit */short) (signed char)126))))))) : (max((((/* implicit */int) (_Bool)1)), (arr_15 [(unsigned short)1] [i_5]))));
    }
}
