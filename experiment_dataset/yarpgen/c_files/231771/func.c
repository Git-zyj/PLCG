/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231771
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) ((_Bool) var_11))) >= (var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned char) (-((-(6574461922851363813ULL)))));
        var_20 |= ((/* implicit */signed char) ((unsigned short) (unsigned char)8));
        var_21 = ((/* implicit */int) arr_2 [i_0 + 3]);
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */short) arr_5 [i_1 + 1]);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : ((+(((/* implicit */int) (short)23693))))));
                        var_23 = ((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 3]);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((int) arr_2 [i_1]))) : (var_12)));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    var_26 += var_13;
}
