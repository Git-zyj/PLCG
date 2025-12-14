/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200274
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
    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) 8723489173393256684LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14765811014855967718ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-12490))))) : (-5613752111089542164LL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) arr_6 [i_1])));
                    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 ^= ((/* implicit */_Bool) var_16);
        var_24 = (_Bool)1;
        arr_13 [i_3] = ((/* implicit */unsigned char) max(((((_Bool)1) ? (arr_8 [10ULL] [10ULL] [6ULL] [i_3]) : (arr_8 [i_3] [i_3] [i_3] [(_Bool)1]))), (((/* implicit */long long int) ((unsigned char) arr_8 [i_3] [i_3] [i_3] [i_3])))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [0LL]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_3])) > (((/* implicit */int) arr_9 [i_3] [i_3]))))) : (((((/* implicit */int) arr_9 [i_3] [i_3])) ^ (((/* implicit */int) arr_9 [i_3] [i_3]))))));
    }
}
