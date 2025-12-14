/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227060
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
    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_1))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [13ULL] [i_0] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_6 [i_3] [3] [i_0])));
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [(signed char)2] [i_3] [i_3] [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)32327))));
        var_13 *= ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]);
        arr_16 [i_4] [i_4] &= ((/* implicit */int) arr_5 [(unsigned short)2]);
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_9 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5]))));
        arr_20 [i_5] = ((/* implicit */short) (~((+((~(arr_7 [(signed char)10] [(signed char)10] [11LL] [i_5])))))));
        arr_21 [i_5 - 1] = (+(((/* implicit */int) (_Bool)0)));
    }
    var_16 = ((/* implicit */_Bool) var_9);
}
