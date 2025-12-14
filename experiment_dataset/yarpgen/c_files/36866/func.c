/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36866
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((var_9), (((/* implicit */long long int) var_6)))), (var_2))))));
    var_11 = ((/* implicit */unsigned char) ((int) var_5));
    var_12 = ((/* implicit */long long int) min((var_12), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58130)) ? (2925022394U) : (10961018U)))), (min((-9223372036854775805LL), (((/* implicit */long long int) 1369944901U))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_8);
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(1369944916U)));
        arr_4 [3LL] = ((/* implicit */signed char) var_4);
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)35))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */long long int) arr_5 [i_1]))))), (max((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        arr_9 [4LL] [i_1] = var_8;
        var_14 -= ((/* implicit */unsigned char) min((2925022394U), (2925022380U)));
        var_15 = ((/* implicit */int) (unsigned char)13);
        arr_10 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 2]))))), (((((/* implicit */int) (unsigned char)13)) ^ (((/* implicit */int) arr_6 [i_1 + 1]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_13 [i_2] = arr_11 [i_2] [i_2];
        var_16 = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-36)))) >> (((min((8628702715412901302LL), (((/* implicit */long long int) arr_11 [i_2] [i_2])))) - (127368990LL)))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-36)))) >> (((((min((8628702715412901302LL), (((/* implicit */long long int) arr_11 [i_2] [i_2])))) - (127368990LL))) - (18383446LL))))));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) var_2);
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)35)))))));
    }
    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        var_17 = ((/* implicit */signed char) (~((-(var_2)))));
        var_18 = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3]))) : (var_2))))), (((/* implicit */long long int) var_6))));
        arr_19 [i_3] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_17 [i_3 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) && (((/* implicit */_Bool) 4311704639516419507ULL)))))));
        var_19 = ((/* implicit */int) (+(2925022394U)));
    }
}
