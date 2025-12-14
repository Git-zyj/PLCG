/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230610
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 &= ((((((/* implicit */int) ((11359243788489700600ULL) > (13323428275861672075ULL)))) == (((((/* implicit */_Bool) (short)-7575)) ? (((/* implicit */int) (short)7561)) : (((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) (+(11496383754055672676ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) : (((arr_5 [i_0] [i_0] [19ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7342))))))) : (((/* implicit */unsigned long long int) 195510328)));
                var_13 |= ((/* implicit */int) arr_1 [i_1] [i_0]);
                var_14 = ((/* implicit */unsigned long long int) min((195510328), (((/* implicit */int) arr_4 [i_0] [i_0]))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) 195510328);
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (signed char)25)), ((short)344))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
