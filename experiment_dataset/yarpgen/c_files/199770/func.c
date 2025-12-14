/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199770
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = var_3;
        var_11 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))) ? (((int) arr_3 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_1] [2U])), (var_8)))) <= (4294967232ULL))))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = var_1;
            arr_10 [0] &= ((/* implicit */long long int) max(((~(max((((/* implicit */unsigned long long int) -2147483627)), (17849996273541895009ULL))))), (((/* implicit */unsigned long long int) ((arr_8 [i_2 + 1] [i_2 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 2]))))))));
        }
    }
    var_13 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2716608693331464211LL)), (5ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((18446744073709551615ULL) & (18446744073709551615ULL))))))))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_1)))));
}
