/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2278
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_7))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_8) <= (((/* implicit */int) (unsigned char)255)))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [10ULL] [i_1] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_1)) : (var_7)))) : (var_4)));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [(signed char)1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 2])) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_9))))));
            arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) && (((((/* implicit */unsigned long long int) var_8)) > (arr_4 [i_0 - 2] [i_2 + 2] [i_2])))));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_7)))) <= (((/* implicit */int) (unsigned char)1))))) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
        arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0 - 2]), (arr_0 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))))) & (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_14 [i_0] = ((/* implicit */int) ((_Bool) ((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))))))));
    }
    var_11 = ((/* implicit */_Bool) min((var_11), (((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) & (var_3)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_9))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) <= (min((((unsigned int) var_8)), (((/* implicit */unsigned int) ((((var_1) + (2147483647))) << (((9223372036854775807LL) - (9223372036854775807LL))))))))));
    var_13 &= ((/* implicit */unsigned long long int) ((long long int) ((min((var_9), (((/* implicit */unsigned long long int) var_3)))) - (((/* implicit */unsigned long long int) var_7)))));
}
