/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195111
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_2;
        var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7709568616683175884LL))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [12] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_7)))))) : (((unsigned long long int) var_4)));
        var_11 = ((/* implicit */unsigned char) ((arr_3 [i_1]) <= (arr_3 [i_1])));
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned int) 522440273U));
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1]))));
    }
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        arr_12 [i_2] [21LL] = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32494)))))), (min((2450672632U), (2762146801U))))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (+(2450672632U))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) var_4));
        var_14 *= ((/* implicit */signed char) arr_14 [i_3] [i_3]);
        arr_16 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [(unsigned short)16] [(signed char)14]))));
        arr_17 [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_11 [i_3] [i_3])) & (((/* implicit */int) arr_13 [7]))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((var_5) <= (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (short)32489))))))) ? (((/* implicit */int) ((((var_4) >= (var_4))) || (((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) (unsigned short)27923))))));
    var_16 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((long long int) var_3)))))));
    var_17 = ((/* implicit */short) 3224491771U);
}
