/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244419
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
    var_19 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((arr_3 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [4LL] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_11);
                var_20 = ((((/* implicit */_Bool) 2476756081U)) ? (((/* implicit */int) ((short) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (short)-32757)))))) : (((/* implicit */int) arr_3 [i_0] [13ULL] [i_0])));
            }
        } 
    } 
}
