/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28674
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) (unsigned char)180)))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_11 [i_1] [i_2]);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) -1LL))) ^ (((/* implicit */int) ((short) -11LL)))));
                        var_19 = ((/* implicit */unsigned long long int) arr_11 [i_1] [5]);
                        arr_13 [i_0] [21U] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) && (((/* implicit */_Bool) var_16))));
                    }
                } 
            } 
            arr_14 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) var_2));
        }
        var_20 = ((/* implicit */int) ((unsigned int) ((int) arr_11 [i_0] [i_0])));
    }
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2016))) | (1LL)))));
    var_22 = ((/* implicit */int) ((unsigned long long int) (((-(-2038187168432510884LL))) / (((/* implicit */long long int) 4294967280U)))));
}
