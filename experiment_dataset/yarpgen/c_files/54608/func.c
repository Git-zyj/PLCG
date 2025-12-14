/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54608
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 3] = var_7;
        var_14 = ((((((/* implicit */_Bool) ((18446744073709551615ULL) << (((/* implicit */int) var_1))))) || ((!(((/* implicit */_Bool) var_10)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 65534U)));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_6))))) : (min((2147483647), (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (min((arr_0 [i_0] [i_0 + 2]), (-2147483647))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) (~(arr_2 [i_0])))) / (((long long int) 288230376151711743LL))))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_1] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2 + 3]))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
        }
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((int) (((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)0))))) != (var_11))))));
        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_8 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((int) 18446744073709551615ULL))) : (18446744073709551615ULL)));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 1])))), (((/* implicit */unsigned long long int) var_5))));
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (0U))))));
        arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483647)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))))), (var_4)))) ? ((+(((/* implicit */int) ((unsigned char) arr_6 [i_3 + 2] [i_3]))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_1)))))), (((unsigned short) (+(((/* implicit */int) var_1)))))));
}
