/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200785
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
    var_20 = ((/* implicit */_Bool) ((((((var_13) - (((/* implicit */int) var_9)))) != (((/* implicit */int) var_10)))) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((_Bool) var_12))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_1] &= ((/* implicit */signed char) arr_1 [i_0] [16U]);
                    var_21 = ((/* implicit */unsigned char) ((arr_1 [i_2] [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1])))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    arr_12 [(unsigned short)2] [i_3] = ((/* implicit */_Bool) var_16);
                    arr_13 [i_0] [i_0] [9ULL] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), ((~(max((((/* implicit */long long int) arr_9 [i_3])), (arr_0 [15U])))))));
                }
                var_22 = ((/* implicit */short) arr_5 [i_0] [5U]);
                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) ((arr_11 [(short)5] [i_1] [i_0]) != (((/* implicit */long long int) -299865657))))))));
                var_23 = ((/* implicit */long long int) (+((-(((((/* implicit */int) var_8)) & (var_5)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) -299865632);
}
