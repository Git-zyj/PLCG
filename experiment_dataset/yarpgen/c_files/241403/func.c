/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241403
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
    var_20 ^= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(-1LL)));
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) (unsigned short)54525)) : (((/* implicit */int) (unsigned short)35649))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (~(1879048192U)));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_22 *= ((/* implicit */_Bool) -3395180857887569559LL);
                        arr_13 [4LL] [3U] [i_3] = ((unsigned short) ((((((/* implicit */int) (unsigned short)47642)) >> (((((/* implicit */int) (unsigned short)65535)) - (65524))))) / (((/* implicit */int) (unsigned short)29887))));
                        arr_14 [i_1] [(short)14] [i_2] [i_3] [i_3] [i_4] = min((((/* implicit */long long int) min(((unsigned short)16860), (((/* implicit */unsigned short) (_Bool)1))))), (min((6138482094513166731LL), (((/* implicit */long long int) arr_4 [i_1] [i_1])))));
                        arr_15 [(unsigned short)11] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1LL))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_17))));
            var_24 &= max((min((min((var_13), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_7 [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2]))))));
        }
    }
    var_25 *= ((/* implicit */unsigned short) var_8);
}
