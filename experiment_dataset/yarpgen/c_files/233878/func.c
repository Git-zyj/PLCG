/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233878
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) 3512826284235184704ULL);
                    var_19 -= ((unsigned short) ((((/* implicit */_Bool) max((var_9), (var_3)))) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1 + 1] [(unsigned short)4])) : (var_8)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned int) arr_7 [i_3] [i_3]);
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_5 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_15)))))));
        var_21 += ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
        var_22 = ((/* implicit */long long int) 241973772U);
    }
    var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
