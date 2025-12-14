/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221435
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) var_0);
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(var_1))), (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)12])) ? (arr_2 [6LL]) : (arr_2 [(unsigned char)16]))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
            }
        } 
    } 
    var_17 ^= ((/* implicit */long long int) max((-1703856458), (-1703856449)));
}
