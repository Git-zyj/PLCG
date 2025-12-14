/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195812
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
    var_18 = ((/* implicit */short) var_8);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (short)-18346))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [(unsigned char)6])) % (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [(unsigned char)6])))) < ((+(((/* implicit */int) arr_3 [12U]))))));
                    var_21 ^= ((/* implicit */long long int) (((((+(((/* implicit */int) arr_5 [i_0] [i_1] [(short)2])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [(short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1] [(short)0]))) : (2203268022U))) - (4294963562U)))));
                    var_22 = ((/* implicit */unsigned int) 14374140989142624652ULL);
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0 - 1] = arr_8 [i_1];
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(short)4] [i_2] [i_3])) ^ (((/* implicit */int) ((short) (short)983)))));
                    }
                }
            } 
        } 
    } 
}
