/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36973
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
    var_18 = ((/* implicit */short) 3051036187U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((459319791393347750ULL) > (((459319791393347750ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 1073741792LL)) : (6953150127507929134ULL)))) ? (min((459319791393347750ULL), (((/* implicit */unsigned long long int) var_11)))) : (((unsigned long long int) 11493593946201622482ULL)))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0] [10LL]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_7 [i_2] [i_2] [0ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                arr_8 [(signed char)10] [i_2] [(signed char)10] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1])) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_2] [i_2] [i_1]))));
            }
        } 
    } 
}
