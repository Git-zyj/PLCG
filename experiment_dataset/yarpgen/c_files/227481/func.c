/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227481
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
    var_11 |= ((/* implicit */_Bool) min(((unsigned short)6), ((unsigned short)6)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = (-(((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) (short)6228))))));
        var_12 |= ((/* implicit */short) min(((-(((/* implicit */int) (short)-4592)))), ((+(((/* implicit */int) arr_0 [(short)6]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = min(((~(((/* implicit */int) var_4)))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) arr_0 [i_0])))))));
                    var_13 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_7))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [(unsigned char)2] |= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [10LL])))), ((-((+(((/* implicit */int) (short)6220))))))));
        var_14 = min(((+(363790694))), ((~(((/* implicit */int) arr_5 [i_3] [i_3] [(signed char)10] [i_3])))));
        var_15 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)4591)), ((unsigned short)252))))));
    }
    var_16 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_10)))), (var_7)))), (var_3)));
}
