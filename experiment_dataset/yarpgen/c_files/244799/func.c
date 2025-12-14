/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244799
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (-1169270146038687470LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((-2038604742), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) >= (min((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0] [i_0])), ((+(var_3)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (short)-1))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(((int) arr_0 [i_0] [i_0]))));
                var_17 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned int) var_11))));
            }
        } 
    } 
}
