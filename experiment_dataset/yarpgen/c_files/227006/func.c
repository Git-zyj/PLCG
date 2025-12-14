/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227006
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_5 [13] [13]) ^ (arr_5 [6LL] [i_0]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55090))) ^ (3498466904U)))))) ? (((((/* implicit */_Bool) -8605333648496225788LL)) ? (-7538502777166940616LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 444702503)) || (((/* implicit */_Bool) (unsigned short)52053)))))))) : (((/* implicit */long long int) 33554431U))));
                arr_7 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (495155909) : (arr_4 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1] [i_0]) : (3183333671U))) : (((/* implicit */unsigned int) var_2))))));
            }
        } 
    } 
    var_10 = (~(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 3528947034U)), (var_5))))));
}
