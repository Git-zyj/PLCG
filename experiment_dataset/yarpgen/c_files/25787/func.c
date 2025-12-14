/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25787
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
    var_12 ^= var_10;
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 11472581608873109075ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((unsigned long long int) arr_1 [i_0 + 1]))));
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
            var_17 = ((/* implicit */unsigned short) arr_9 [i_1 - 3]);
            var_18 = ((/* implicit */unsigned short) ((var_9) < (((((/* implicit */_Bool) 0ULL)) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_1]))) : ((~(arr_3 [i_2])))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((((/* implicit */int) ((var_5) <= (18446744073709551615ULL)))) >> (((((14573830384492782833ULL) | (var_5))) - (14654693220143852764ULL))))))))));
            var_20 *= ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) 9345300238027853314ULL)))));
        }
        arr_12 [i_1] = ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned short)14]))) : ((+(var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? ((+(9345300238027853310ULL))) : (((unsigned long long int) var_8)))));
    }
}
