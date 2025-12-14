/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200643
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
    var_20 = var_1;
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : (((((((/* implicit */_Bool) (unsigned char)63)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24797))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((long long int) 17055058429073426LL)), (((/* implicit */long long int) arr_0 [i_1])))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */long long int) 16148543423161264427ULL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_0 [i_1]);
            }
        } 
    } 
}
