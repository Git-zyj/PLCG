/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240652
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 |= ((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]));
        var_21 = ((/* implicit */unsigned int) -1520314217630487643LL);
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5)))))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1]))))))))));
        var_23 -= ((((/* implicit */int) ((_Bool) arr_0 [i_1 - 1]))) ^ (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_1 - 1])))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] = ((/* implicit */short) ((((min((var_9), (arr_7 [i_1] [i_1 + 1] [i_1]))) + (2147483647))) << (((((min((-1520314217630487643LL), (((/* implicit */long long int) 0U)))) + (1520314217630487662LL))) - (18LL)))));
                    arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) -659301736);
}
