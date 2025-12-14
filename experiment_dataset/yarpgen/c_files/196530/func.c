/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196530
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = (~(((/* implicit */int) var_0)));
                    arr_8 [i_0] [9U] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
                    var_16 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))));
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) 0U)) != (((long long int) (unsigned short)65535))));
    }
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */short) var_3);
    var_21 = ((/* implicit */short) var_13);
}
