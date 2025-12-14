/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241668
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
    var_18 += ((/* implicit */signed char) (~(min((((/* implicit */int) var_13)), ((~(((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (min((min((arr_9 [i_0 - 1]), (arr_9 [i_0 + 1]))), (((/* implicit */int) (!((_Bool)1))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2] [i_3])))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) max(((unsigned char)183), (((/* implicit */unsigned char) (_Bool)1))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_9 [i_0 - 1]))));
    }
    for (int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        arr_13 [i_4] &= ((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_4] [i_4])), ((+((+(((/* implicit */int) (short)6))))))));
        var_23 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_10 [i_4 + 1] [i_4 + 1]), (((/* implicit */long long int) arr_12 [i_4 - 1])))))));
    }
}
