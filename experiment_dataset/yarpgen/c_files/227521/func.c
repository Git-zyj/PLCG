/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227521
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
    var_15 -= ((/* implicit */int) var_7);
    var_16 = ((/* implicit */_Bool) (short)9);
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)43491))))) % (((unsigned int) arr_9 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_3])))))));
                        var_19 ^= var_10;
                        arr_13 [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1])) << (((arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]) - (274565141U)))));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0])) ^ (((/* implicit */int) arr_6 [2U] [i_0 + 1] [i_0]))));
        arr_15 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -1393591422)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)9))))));
        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (signed char)-1))));
    }
}
