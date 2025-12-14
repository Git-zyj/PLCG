/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230887
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */int) arr_4 [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) 16028091133134110941ULL))) : ((+(2400400329470367453ULL)))));
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((_Bool) 2671344896U);
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]);
                var_17 |= ((/* implicit */long long int) var_7);
            }
        }
        var_18 = ((/* implicit */long long int) arr_3 [i_0]);
    }
    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 1]))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1623622400U))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_3] [i_3]) ? (var_8) : (var_0)))))))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
    var_22 += ((/* implicit */unsigned short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)23), ((unsigned char)76)))))))));
}
