/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22706
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
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_3)) & (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2032))))))) + (((/* implicit */unsigned long long int) 758883193U))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_12 = arr_1 [i_0];
            arr_5 [i_1] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 36028659580010496LL)) : (min((((/* implicit */unsigned long long int) arr_0 [i_0] [9U])), (var_7)))))) ? (((((/* implicit */_Bool) ((758883201U) & (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-21713)), (arr_1 [i_0])))) : (7180872888053489345ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7131744270790033373LL)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1173288798U)))))))));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_0] = ((unsigned int) arr_3 [i_2]);
            var_13 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)3443), (((/* implicit */unsigned short) (short)-1)))))));
            var_14 = ((/* implicit */unsigned short) min((((unsigned int) var_2)), (((var_4) >> (((arr_0 [i_0] [i_2]) - (984726921U)))))));
        }
        var_15 = max((((/* implicit */unsigned long long int) arr_4 [(short)8])), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [(unsigned short)4] [i_0] [i_0]), (arr_8 [i_0] [12LL] [i_0]))))) * (((((/* implicit */_Bool) (short)-13859)) ? (((/* implicit */unsigned long long int) -3274240254725943930LL)) : (3171171238896192763ULL))))));
        var_16 = var_6;
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((((arr_4 [i_0]) + (9223372036854775807LL))) >> (((arr_3 [i_0]) - (3278290044U))))) : (arr_4 [i_0])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_13 [i_3] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)3426)) ? (var_7) : (((unsigned long long int) 735001649U)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_11 [i_3])) - ((-(-3945103445042299496LL))))))));
        arr_14 [11ULL] [i_3] = ((/* implicit */long long int) arr_12 [i_3] [i_3]);
        var_18 &= ((/* implicit */unsigned long long int) arr_11 [i_3]);
        var_19 = ((/* implicit */long long int) max((16536674110981465625ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_3])))));
    }
}
