/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230744
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
    var_17 *= ((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) + (var_10)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */short) var_11)), (var_0)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) (short)20603))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)97))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0 - 1] &= ((/* implicit */signed char) (-(((/* implicit */int) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) ((max((((/* implicit */long long int) (short)-32747)), (131071LL))) >= (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (arr_4 [i_3] [i_3] [i_3]) : (arr_4 [(signed char)20] [i_3] [i_3])));
        var_21 = ((/* implicit */_Bool) var_10);
    }
}
