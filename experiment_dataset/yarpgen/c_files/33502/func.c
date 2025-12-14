/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33502
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned char) (unsigned short)12013);
                        var_12 = ((/* implicit */unsigned int) arr_6 [9U] [i_2] [i_3 + 1] [i_3 + 2]);
                        var_13 = ((/* implicit */int) arr_8 [i_0] [i_0]);
                        var_14 += ((/* implicit */short) (+(arr_4 [i_1 + 1] [i_3 - 1])));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 1] [16ULL] [i_1 - 3] [i_1 - 2] [i_3 + 1]))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((var_2), (((/* implicit */unsigned long long int) var_0)))))));
}
