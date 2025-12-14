/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246820
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
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) ^ (var_7)))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_17)))))))) : ((-(max((var_15), (((/* implicit */long long int) var_2))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) var_1);
        var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [4] = ((/* implicit */int) ((unsigned char) var_0));
        var_21 |= ((/* implicit */int) ((unsigned long long int) ((short) arr_1 [i_1])));
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((var_2) - (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_0)))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_3 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) var_4);
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_12);
                    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_9 [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (((arr_9 [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))))));
                    arr_18 [i_3] = ((/* implicit */short) var_3);
                    arr_19 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) arr_0 [i_2])))))));
                }
            } 
        } 
    }
    var_25 = var_1;
}
