/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31725
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 2] [i_2 + 1]))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-18222))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                        arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [(unsigned char)3])))) && (((268435455U) == (1782636608U)))));
                        arr_14 [i_0] [i_2 - 2] = ((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_2 + 2] [i_0] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */long long int) (+(((((arr_15 [i_4]) == (arr_15 [i_4]))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1094217471U)) ? (((/* implicit */int) (short)7959)) : (((/* implicit */int) var_11)))))))));
        var_15 = ((short) (-(arr_17 [i_4])));
    }
    var_16 = ((/* implicit */unsigned int) var_9);
}
