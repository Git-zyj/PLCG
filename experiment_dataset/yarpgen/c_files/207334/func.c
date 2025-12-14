/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207334
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) 511U);
                    var_17 &= ((/* implicit */short) (-(18446744073709551615ULL)));
                    var_18 -= ((/* implicit */signed char) ((arr_5 [i_0] [i_1 - 1]) * (((/* implicit */int) var_14))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (arr_11 [i_3])));
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(262143LL))))))));
    }
    var_21 += max((((/* implicit */unsigned long long int) -445660289)), (1ULL));
    var_22 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8))))))));
    var_23 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_7)))))))));
}
