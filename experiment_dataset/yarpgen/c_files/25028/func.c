/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25028
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
    var_16 = var_5;
    var_17 = ((/* implicit */unsigned int) var_13);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)19430)) & (((/* implicit */int) var_10))))) < (2113929216U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = (unsigned short)53169;
                var_19 ^= ((/* implicit */short) (((~(((3252216080U) >> (0ULL))))) >> ((((~(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)53190))))))) + (12)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
}
