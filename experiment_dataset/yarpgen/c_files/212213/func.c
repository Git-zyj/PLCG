/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212213
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) << (((arr_8 [i_0] [i_0] [i_0] [i_0]) - (892097206)))))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (18446744073709551608ULL) : (arr_3 [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) << (((((arr_8 [i_0] [i_0] [i_0] [i_0]) - (892097206))) + (926070169)))))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (18446744073709551608ULL) : (arr_3 [i_0]))))));
                    var_13 = ((/* implicit */short) arr_5 [i_0]);
                }
            } 
        } 
    } 
}
