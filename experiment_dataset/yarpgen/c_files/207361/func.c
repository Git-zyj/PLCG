/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207361
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
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) (~(var_8)));
                arr_6 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [14LL])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) (_Bool)1))))))), ((~(((unsigned long long int) arr_4 [i_1] [i_0] [(unsigned short)16]))))));
                arr_7 [12U] [i_0] [7] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
                var_16 = (~(min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) 7768202482568112565LL)), (2ULL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(max((((var_8) % (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((var_1) / (((/* implicit */int) var_2)))))))));
}
