/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54334
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) >= ((((_Bool)1) ? (14659570118371613182ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) ((((-6629294409737707497LL) == (((/* implicit */long long int) var_12)))) ? (((((/* implicit */_Bool) 2754627306450402751LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) : (arr_2 [5] [i_0]))))));
                arr_6 [i_0] [i_1] [(unsigned char)14] = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_12);
    var_14 = ((/* implicit */unsigned char) -2754627306450402759LL);
}
