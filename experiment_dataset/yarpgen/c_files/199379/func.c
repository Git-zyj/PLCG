/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199379
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
    var_18 = ((/* implicit */long long int) var_10);
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)79)) >= (((/* implicit */int) (short)22458)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_20 &= ((/* implicit */long long int) (((-((-(arr_0 [2] [i_0]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10LL])) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -2305708754185764362LL)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((int) (~(-9223372036854775799LL))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) 2305708754185764368LL);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)0);
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((3569238297U) << (((/* implicit */int) arr_6 [i_1] [i_1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (123145302310912ULL)))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((~((+(((/* implicit */int) (short)1896)))))), (((/* implicit */int) (short)0)))))));
    }
}
